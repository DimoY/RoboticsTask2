#pragma once
#include <rclcpp/rclcpp.hpp>
#include <robo_miner_interfaces/srv/query_initial_robot_position.hpp>
#include <robo_miner_interfaces/srv/robot_move.hpp>
#include <robo_miner_interfaces/srv/longest_sequence_validate.hpp>
#include <robo_miner_interfaces/srv/field_map_validate.hpp>
#include <robo_miner_interfaces/srv/activate_mining_validate.hpp>
#include <robo_miner_interfaces/srv/item.hpp>
#include <robo_miner_interfaces/msg/user_authenticate.hpp>
#include <chrono>
#include <memory>
#include <functional>
//ros2 service call /activate_mining_validate robo_miner_interfaces/srv/ActivateMiningValidate {}\
using namespace std::chrono_literals;
constexpr const char *QUERY_INITIAL_ROBOT_POSITION_SERVICE = "query_initial_robot_position";
constexpr const char *ROBOT_MOVE_SERVICE = "move_robot";
constexpr const char *MAP_VALIDATION_SERVICE = "field_map_validate";
constexpr const char *LONGEST_SEQUENCE_VALIDATION = "longest_sequence_validate";
constexpr const char *ACTIVATE_MINING = "activate_mining_validate";
constexpr const char *GET_MINE_ID = "get_item";
constexpr const char *USER_AUTHENTICATE_TOPIC = "user_authenticate";
using Initial = robo_miner_interfaces::srv::QueryInitialRobotPosition;
using Move = robo_miner_interfaces::srv::RobotMove;
using MapValidation = robo_miner_interfaces::srv::FieldMapValidate;
using LongestSequence = robo_miner_interfaces::srv::LongestSequenceValidate;
using ActivateMiningValidate = robo_miner_interfaces::srv::ActivateMiningValidate;
using Item = robo_miner_interfaces::srv::Item;
using Authenticate  = robo_miner_interfaces::msg::UserAuthenticate;
using namespace std::chrono_literals;
#include "robo_miner_controller/RobotMoveLogistics/RobotMoveLogistics.hpp"


#include "robo_miner_controller/MapNodeFields/MapNodeFields.hpp"

class RoboMinerControler: public rclcpp::Node
{
private:
	RobotMoverLogistics RML;
	std::shared_ptr<rclcpp::Client<Initial>> initial_client;
	std::shared_ptr<rclcpp::Client<Move>> move_client;
	std::shared_ptr<rclcpp::Client<MapValidation>> map_validation;
	std::shared_ptr<rclcpp::Client<LongestSequence>> longest_sequence;
	std::shared_ptr<rclcpp::Client<ActivateMiningValidate>> activate_mining_validate;
	std::shared_ptr<rclcpp::Service<Item>> get_item;
	std::shared_ptr<rclcpp::Publisher<Authenticate>> auth;
	uint8_t position;
	std::pair<int,int> robot_location = {0,0};
public:
	
	RoboMinerControler():Node("RMC"){
		 using namespace std::placeholders; 
		initial_client = this->create_client<Initial>(QUERY_INITIAL_ROBOT_POSITION_SERVICE);
		move_client = this->create_client<Move>(ROBOT_MOVE_SERVICE);
		map_validation = this->create_client<MapValidation>(MAP_VALIDATION_SERVICE);
		longest_sequence = this->create_client<LongestSequence>(LONGEST_SEQUENCE_VALIDATION);
		activate_mining_validate = this->create_client<ActivateMiningValidate>(ACTIVATE_MINING);
		auth = this->create_publisher<Authenticate>(USER_AUTHENTICATE_TOPIC,10);
		/* if (rclcpp::spin_until_future_complete(node, result) ==rclcpp::FutureReturnCode::SUCCESS)
		{

		} else {
			RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
		} */
		auto k = Authenticate();
		k.commit_sha = "d37a8bddcedd8cbbfb782f96cd6b28f4eabe920a";
		k.repository = "https://github.com/DimoY/RoboticTask2.git";
		k.user = "DimoY";
		auth->publish(k);
	}





	void getInitailInfo(){
		while (!this->initial_client->wait_for_service(1s)) {
				if (!rclcpp::ok()) {
					printf("Error");
					return;
				}
			}
			Initial::Request::SharedPtr request = std::make_shared<Initial::Request>();
			auto result = this->initial_client->async_send_request(request);
			// Wait for the result.
			if (rclcpp::spin_until_future_complete(this->shared_from_this(), result) ==rclcpp::FutureReturnCode::SUCCESS){
				Initial::Response::SharedPtr resp = result.get();
				this->position = resp->robot_position_response.robot_dir;
				RML.addInitial(resp);

	}
	}
	int robotMove(uint8_t dirrection){
			while (!this->move_client->wait_for_service(1s)) {
				if (!rclcpp::ok()) {
					printf("Error");
					return 1;
				}
			}
			Move::Request::SharedPtr request = std::make_shared<Move::Request>();
		request->robot_move_type.move_type = dirrection;

			auto result = this->move_client->async_send_request(request);

			// Wait for the result.
			if (rclcpp::spin_until_future_complete(this->shared_from_this(), result) ==rclcpp::FutureReturnCode::SUCCESS){
				Move::Response::SharedPtr resp = result.get();
				this->position = resp->robot_position_response.robot_dir;
				RML.addMove(dirrection,resp);
				if(resp->robot_position_response.success==true){
					return 0;
				}else{
					exit(-1);
					return 1;
				}
				
				
		}else{
			printf("Error");
			return 1;
		}
	}

	
	bool moveExactNoCheck(MapNodeFields fields){
		if(fields == STAY){
			return true;
		}
		switch (this->position)
		{
		case UP:
			if( fields == LEFT){
				robotMove(1);
			}
			else if( fields == RIGHT){
				robotMove(2);
			}
			else if(fields == DOWN){
				robotMove(2);
				robotMove(2);
			}
			break;
		case MapNodeFields::LEFT:
			if( fields == UP){
				robotMove(2);
			}
			else if( fields == RIGHT){
				robotMove(2);
				robotMove(2);
			}
			else if(fields == DOWN){
				robotMove(1);
			}
			break;
		case MapNodeFields::DOWN:
			if( fields == UP){
				robotMove(2);
				robotMove(2);
			}
			else if( fields == RIGHT){
				robotMove(1);
			}
			else if(fields == LEFT){
				robotMove(2);
			}
			break;
		case MapNodeFields::RIGHT:
			if( fields == UP){
				robotMove(1);
			}
			else if( fields == DOWN){
				robotMove(2);
			}
			else if(fields == LEFT){
				robotMove(2);
				robotMove(2);
			}
			break;
		default:
			break;
		}
		robotMove(0);
		return true;
	}
	bool moveExact(MapNodeFields fields){
		if(!RML.checkMove(fields)){
			return false;
		}
		return this->moveExactNoCheck(fields);
	}
	void finalStretch(){
		std::cout<<"Remaping"<<std::endl;
		this->robot_location= RML.fillList();
		
		while (!this->map_validation->wait_for_service(1s)) {
			if (!rclcpp::ok()) {
				printf("Error");
				return;
			}
		}
		MapValidation::Request::SharedPtr request = std::make_shared<MapValidation::Request>();
		request->field_map.cols = RML.getSizes().second;
		request->field_map.rows = RML.getSizes().first;
		std::cout<<"Colls :"<<request->field_map.cols<<" Rows: "<<request->field_map.rows<<std::endl;
		
		std::cout<<std::endl;
		request->field_map.data = RML.getArray();
		
		auto result = this->map_validation->async_send_request(request);
		// Wait for the result.
		if (rclcpp::spin_until_future_complete(this->shared_from_this(), result) ==rclcpp::FutureReturnCode::SUCCESS){
			MapValidation::Response::SharedPtr resp = result.get();
			std::cout<<resp->success<<std::endl;
		}
	}
	void dfsMine(int x,int y){
		printf("Mine at X:%d, Y:%d\n",x,y);
		FieldType k = RML.getGemType(x,y);
		printf("%d ",RML.MiningGemOk(x+1,y,k));
		std::cout.flush();
		printf("%d ",RML.MiningGemOk(x,y+1,k));
		std::cout.flush();
		printf("%d ",RML.MiningGemOk(x-1,y,k));
		std::cout.flush();
		printf("%d \n",RML.MiningGemOk(x,y-1,k));
		std::cout.flush();
		if(RML.MiningGemOk(x+1,y,k) && moveExact(MapNodeFields::RIGHT)){
				dfsMine(x+1,y);
				moveExactNoCheck(MapNodeFields::LEFT);
			
		}
		if(RML.MiningGemOk(x-1,y,k) && moveExact(MapNodeFields::LEFT)){
				dfsMine(x-1,y);
				moveExactNoCheck(MapNodeFields::RIGHT);
		}
		if(RML.MiningGemOk(x,y+1,k) && moveExact(MapNodeFields::DOWN)){
				dfsMine(x,y+1);
				moveExactNoCheck(MapNodeFields::UP);
		}
		if(RML.MiningGemOk(x,y-1,k) && moveExact(MapNodeFields::UP)){
			
				dfsMine(x,y-1);
				moveExactNoCheck(MapNodeFields::DOWN);
			
		}
	}
	void FindLongestGem(){
		std::cout<<"Finding longest Gem ..."<<std::endl;
		RML.DFSFindLonggestGem();
		std::cout<<"Gem found ..."<<std::endl;
		auto request = RML.longest_gem();
		for (auto i : request->sequence_points)
		{
			std::cout<<"rows: "<<i.row<<" cols:"<<i.col<<","<<std::endl;
		}
		std::cout<<std::endl;
		auto result =  longest_sequence->async_send_request(request);
		// Wait for the result.
		if (rclcpp::spin_until_future_complete(this->shared_from_this(), result) ==rclcpp::FutureReturnCode::SUCCESS){
			auto resp = result.get();
			std::cout<<resp->success<<std::endl;
		}
		auto k = RML.BFS(robot_location.first,robot_location.second);
		for (auto i : k)
		{
			switch (i)
				{
				case UP:
					std::cout<<"Move up"<<std::endl;
					robot_location.second--;
					break;
				case DOWN:
					std::cout<<"Move down"<<std::endl;
					robot_location.second++;
					break;
				case LEFT:
					std::cout<<"Move left"<<std::endl;
					robot_location.first--;
					break;
				case RIGHT:
					std::cout<<"Move right"<<std::endl;
					robot_location.first++;
					break;
				case STAY:
					std::cout<<"First"<<std::endl;
					break;
				default:
					break;
				}
			this->moveExactNoCheck(i);
		}

		while (!this->activate_mining_validate->wait_for_service(1s)) {
			if (!rclcpp::ok()) {
				printf("Error");
				return;
			}
		}
		ActivateMiningValidate::Request::SharedPtr requestActivateMining = std::make_shared<ActivateMiningValidate::Request>();
		auto resultActivation = this->activate_mining_validate->async_send_request(requestActivateMining);
		// Wait for the result.
		if (rclcpp::spin_until_future_complete(this->shared_from_this(), resultActivation) ==rclcpp::FutureReturnCode::SUCCESS){
			ActivateMiningValidate::Response::SharedPtr resp = resultActivation.get();
			std::cout<<resp->error_reason<<std::endl;
			std::cout<<resp->success<<std::endl;
		}
		dfsMine(robot_location.first-1,robot_location.second-1);
	}
	~RoboMinerControler(){

	}
};


void DFS(std::shared_ptr<RoboMinerControler> node){
	if(node->moveExact(MapNodeFields::RIGHT)){
		DFS(node);
		node->moveExactNoCheck(MapNodeFields::LEFT);
	}
	if(node->moveExact(MapNodeFields::DOWN)){
		DFS(node);
		node->moveExactNoCheck(MapNodeFields::UP);
	}

	if(node->moveExact(MapNodeFields::LEFT)){
		DFS(node);
		node->moveExactNoCheck(MapNodeFields::RIGHT);
	}

	if(node->moveExact(MapNodeFields::UP)){
		DFS(node);
		node->moveExactNoCheck(MapNodeFields::DOWN);
	}

	
}
