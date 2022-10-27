#pragma once
#include <memory>
#include <iostream>
#include <map>
#include <chrono>
#include "robo_miner_controller/MapNode/MapNode.hpp"

#include "robo_miner_controller/MapNodeFields/MapNodeFields.hpp"
#include "robo_miner_controller/FieldType/Fieldtype.hpp"
#include <robo_miner_interfaces/srv/query_initial_robot_position.hpp>
#include <robo_miner_interfaces/srv/robot_move.hpp>
#include "robo_miner_interfaces/srv/field_map_validate.hpp"
#include "robo_miner_interfaces/srv/longest_sequence_validate.hpp"
#include <algorithm>
#include <queue>
using Initial = robo_miner_interfaces::srv::QueryInitialRobotPosition;
using Move = robo_miner_interfaces::srv::RobotMove;
using MapValidation = robo_miner_interfaces::srv::FieldMapValidate;
using LongestSequence = robo_miner_interfaces::srv::LongestSequenceValidate;
constexpr int XCord = 30000;
constexpr int YCord = 30000;


class RobotMoverLogistics{
	
	private:
		std::map<std::pair<int,int>,std::shared_ptr<MapNode>> mapOfObj;
		std::pair<int,int> location = std::pair<int,int>(XCord,YCord);
		int position = 0;
		void printIndividuleJem(int x, int y,std::string pre,std::string after){
			std::pair<int,int> KEY = {x,y};
			auto k = this->mapOfObj.find(KEY);
			if (k != mapOfObj.end())
			{ 
				std::cout<<pre<<getLetterBack(k->second->getCrystal())<<after;
			}else{
				std::cout<<pre<<"_"<<after;
			}
		}
		int minMapX = XCord;
		int maxMapY = YCord;
		int minMapY = XCord;
		int maxMapX = YCord;

		std::vector<std::vector<std::shared_ptr<MapNode>>> num;
		std::vector<std::vector<std::shared_ptr<MapNode>>> gems;
	public:
		void printNode(int x,int y){
			std::cout<<"\n"<<"(X,Y) = ("<<x<<","<<y<<")"<<std::endl;
			printIndividuleJem(x,y+1,"\n  ","\n");
			printIndividuleJem(x-1,y,"",";");
			printIndividuleJem(x,y,"",";");
			printIndividuleJem(x+1,y,"","\n");
			printIndividuleJem(x,y-1,"  ","");
			std::cout<<std::endl;
		}

		void insert(int x,int y,std::shared_ptr<MapNode> object){
			std::pair<int,int> KEY = {x,y};
			mapOfObj.emplace(std::make_pair(KEY,object));
		}
		std::shared_ptr<MapNode> get(int x,int y){
			std::pair<int,int> KEY = {x,y};
			auto k = this->mapOfObj.find(KEY);
			if (k != mapOfObj.end())
			{ 
				return k->second;
			}else{
				printf("ERROR object not found");
			}
		}

		void singleInsert(std::shared_ptr<MapNode> mnLeftEye,int x1,int y1){
			mnLeftEye->setLocation(x1,y1);
			insert(x1,y1,mnLeftEye);
			this->minMapX = std::min(this->minMapX,x1);
			this->maxMapX = std::max(this->maxMapX,x1);
			this->minMapY = std::min(this->minMapY,y1);
			this->maxMapY = std::max(this->maxMapY,y1);
		}

		void tripleInsert(std::shared_ptr<MapNode> mnLeftEye,std::shared_ptr<MapNode> mnCenterEye ,std::shared_ptr<MapNode>  mnRightEye,
							int x1,int y1,int x2,int y2,int x3,int y3){

			singleInsert(mnLeftEye,x1,y1);
			singleInsert(mnCenterEye,x2,y2);
			singleInsert(mnRightEye,x3,y3);
		}
void getRelative(Initial::Response::_robot_position_response_type& resp){
			auto mnLeftEye = std::make_shared<MapNode>(resp.surrounding_tiles[0]);
			auto mnCenterEye = std::make_shared<MapNode>(resp.surrounding_tiles[1]);
			auto mnRightEye = std::make_shared<MapNode>(resp.surrounding_tiles[2]);
			this->position = resp.robot_dir;
			
			int x = location.first;
			int y = location.second;
			switch (this->position)
			{
			case 3:
				tripleInsert(
					mnLeftEye,
					mnCenterEye,
					mnRightEye,
					x,y-1,
					x-1,y,
					x,y+1
				);
				break;
			case 2:
				tripleInsert(
					mnLeftEye,
					mnCenterEye,
					mnRightEye,
					x+1,y,
					x,y-1,
					x-1,y
				);
				break;
			case 1:
				tripleInsert(
					mnLeftEye,
					mnCenterEye,
					mnRightEye,
					x,y+1,
					x+1,y,
					x,y-1
				);
				break;
			case 0:
				tripleInsert(
					mnLeftEye,
					mnCenterEye,
					mnRightEye,
					x-1,y,
					x,y+1,
					x+1,y
				);
				break;
			default:
				break;
			}
		}
		void addMove(uint8_t dirrection, Move::Response::SharedPtr resp){

			
			
			if(dirrection == 0){
				switch (this->position)
				{
				case 3:
					this->location.first--;
					break;
				case 2:
					this->location.second--;
					break;
				case 1:
					this->location.first++;
					break;
				case 0:
					this->location.second++;
					break;
				default:
					break;
				}

				auto node = this->get(this->location.first,this->location.second);
				node->visit();
			}
			getRelative(resp->robot_position_response);
		}
		
		void addInitial(Initial::Response::SharedPtr resp){
			auto mnCurrent = std::make_shared<MapNode>(XCord,YCord,resp->robot_initial_tile);
			insert(XCord,YCord,mnCurrent);
			mnCurrent->visit();
			getRelative(resp->robot_position_response);
		}

		

		int numSuroundWals(){
			auto obj = this->location;
			int res = 0;
			auto object1 = std::vector<std::shared_ptr<MapNode>>({
						   this->get(obj.first-1,obj.second),
						   this->get(obj.first+1,obj.second),
						   this->get(obj.first,obj.second-1),
						   this->get(obj.first,obj.second+1)});
			for (auto i : object1)
			{
				if(i->getBlock()){
					res++;
				}
			}
			
			return res;
		}
		int numVisitedOftenWals(){
			auto obj = this->location;
			int res = 0;
			auto object1 = std::vector<std::shared_ptr<MapNode>>({
						   this->get(obj.first-1,obj.second),
						   this->get(obj.first+1,obj.second),
						   this->get(obj.first,obj.second-1),
						   this->get(obj.first,obj.second+1)});
			for (auto i : object1)
			{
				if(i->isVisitedOftern()){
					res++;
				}
			}
			
			return res;
		}
		bool checkMove(MapNodeFields dirrection){
			auto obj = this->location;
			switch (dirrection)
			{
			case MapNodeFields::DOWN:
				obj.second--;
				break;
			case MapNodeFields::LEFT:
				obj.first--;
				break;
			case MapNodeFields::RIGHT:
				obj.first++;
				break;
			case MapNodeFields::UP:
				obj.second++;
				break;
			default:
				break;
			}
			auto object = this->get(obj.first,obj.second);
			if(object->getBlock()){
				
				return false;
			}
			if(object->isLocked()){
				
				return false;
			}
			
			return true;
		}
		std::pair<int,int> getLocation(){
			return this->location;
		}
		std::pair<size_t,size_t> getSizes(){
			int Xsize = maxMapX -  minMapX;
			int Ysize = maxMapY - minMapY;
			return std::make_pair(this->num.size(),this->num[0].size());
		}
		std::pair<int,int> fillList(){
			int Xsize = maxMapX -  minMapX;
			int Ysize = maxMapY - minMapY;
			for (auto i : this->mapOfObj)
			{
				auto itemX = i.first.first;
				auto itemY = i.first.second;
				this->minMapX = std::min(this->minMapX,itemX);
				this->maxMapX = std::max(this->maxMapX,itemX);
				this->minMapY = std::min(this->minMapY,itemY);
				this->maxMapY = std::max(this->maxMapY,itemY);
			}
			Xsize = maxMapX -  minMapX;
			Ysize = maxMapY - minMapY;
			auto vec = std::vector<std::shared_ptr<MapNode>>(this->mapOfObj.size()*2);
			std::cout<<"Printing:"<<std::endl;
			for (auto i : this->mapOfObj)
			{
				auto itemX = i.first.first-minMapX;
				auto itemY = i.first.second-minMapY;
				std::cout.flush();
				vec[itemX+itemY*(Xsize)] = i.second;
				
			}
			std::cout<<"Remaping to array:"<<std::endl;
			for (int i = Ysize-1; i >0; i--)
			{
				num.push_back(std::vector<std::shared_ptr<MapNode>>());
				for (int j = 1; j <Xsize ; j++)
				{
					num.back().push_back(vec[(i)*Xsize+(j)]);

					//std::cout<<"index X Y"<<i*(Xsize-2)<<" "<<j-1<<std::endl;
					//this->num[i*(Xsize-2)+j-1] = vec[];
				}
				
			}
			return std::pair<int,int>({(30000-minMapX),(maxMapY-30000)});
		}
		std::vector<unsigned char> getArray(){
			for(int i = 0;i<this->num.size();i++){
				for(int j = 0;j<this->num[0].size();j++){
					std::cout<<(int)getLetterBack(this->num[i][j]->getCrystal())<<", ";
					this->num[i][j]->setLocation(j,i);
				}
				std::cout<<std::endl;
				
			}
			std::vector<unsigned char> k;
			for(auto i:this->num){
				for(auto j:i){
					k.push_back(getLetterBack(j->getCrystal()));
				}
				
			}
			return k;
		}
		void DFSFindLonggestGemRec(int x,int y,int id){
			std::cout.flush();
			if(x>=this->num[0].size() || x<0 || y<0 || y>=this->num.size() ){
				return;
			}
			std::shared_ptr<MapNode> k = this->num[y][x];
			if(k->getMapped()){
				return;
			}
			if(k->getBlock() ){
				return;		
			}
			
			if(id == -1){
				
				
				std::vector<std::shared_ptr<MapNode>> gemLine;
				k->toogleMapped();
				gemLine.push_back(k);
				this->gems.push_back(gemLine);
				int idem_id = this->gems.size()-1;
				DFSFindLonggestGemRec(x+1,y,idem_id);
				DFSFindLonggestGemRec(x-1,y,idem_id);
				DFSFindLonggestGemRec(x,y+1,idem_id);
				DFSFindLonggestGemRec(x,y-1,idem_id);
			}
			else{
				if(k->getCrystal()!=this->gems[id].begin()->get()->getCrystal()) {
					return;
				}
				k->toogleMapped();
				this->gems[id].push_back(k);
				DFSFindLonggestGemRec(x+1,y,id);
				DFSFindLonggestGemRec(x-1,y,id);
				DFSFindLonggestGemRec(x,y+1,id);
				DFSFindLonggestGemRec(x,y-1,id);
			}
		}
		bool MiningLocationOk(int x,int y){
			if(x>=this->num[0].size() || x<0 || y<0 || y>=this->num.size() ){
				return false;
			}
			std::shared_ptr<MapNode> k = this->num[y][x];
			if(k->getMapped()){
				return false;
			}
			if(k->getBlock() ){
				return false;		
			}
			return true;
		}
		bool MiningGemOk(int x,int y,FieldType ft){
			bool mine_ok = MiningLocationOk(x,y);
			if(!mine_ok){
				return false;
			}
			std::shared_ptr<MapNode> k = this->num[y][x];
			bool gem_equal = k->getCrystal()==ft;
			return  gem_equal;

		}
		FieldType getGemType(int x,int y){
			return this->num[y][x]->getCrystal();
		}
		void DFSFindLonggestGem(){
			for(int i = 0;i<this->num.size();i++){
				for(int j = 0;j<this->num[0].size();j++){
					std::cout<<(int)getLetterBack(this->num[i][j]->getCrystal())<<", ";
					this->num[i][j]->setLocation(j,i);
				}
				std::cout<<std::endl;
				
			}
			for (size_t i = 0; i < this->num.size(); i++)
			{
				for (size_t j = 0; j < this->num[0].size(); j++)
				{
					this->DFSFindLonggestGemRec(j,i,-1);
				}
			}
			for (size_t i = 0; i < this->num.size(); i++)
			{
				for (size_t j = 0; j < this->num[0].size(); j++)
				{
					this->num[i][j]->untoogleMapped();
				}
			}
		}
		std::pair<int,int> indexesBiggestGem(){
			int max = 0;
			int index = 0;
			for (size_t i = 0; i < this->gems.size(); i++)
			{
				if(max<gems[i].size()){
					index = i;
					max = gems[i].size();
				}
			}
			return std::pair<int,int>(max,index);
		}
		std::shared_ptr<LongestSequence::Request> longest_gem(){
			int max= indexesBiggestGem().first;
			int index = indexesBiggestGem().second;
			std::shared_ptr<LongestSequence::Request> k = std::make_shared<LongestSequence::Request>();
			for(auto i:gems[index]){
				robo_miner_interfaces::msg::FieldPoint item;
				item.row = i->getLocation().second;
				item.col = i->getLocation().first;
				k->sequence_points.push_back(item);
			}
			return k;

		}
		bool isValid(int x, int y)
		{
			// If cell lies out of bounds
			if (x < 0 || y < 0
				|| x >= this->num[0].size() || y >= this->num.size())
				return false;
		
			// If cell is already visited
			if (this->num[y][x]->getBlock() || this->num[y][x]->getMapped())
				return false;
		
			// Otherwise
			return true;
		}
		
		// Function to perform the BFS traversal
		std::vector<MapNodeFields> BFS(int x,int y)
		{
			using namespace std::chrono_literals;
			std::queue<std::pair<std::pair<int,std::vector<MapNodeFields>>,std::shared_ptr<MapNode>>> q;
			std::pair<int,int> location = {x-1,y-1};
			std::vector<std::pair<std::vector<MapNodeFields>,std::shared_ptr<MapNode>>> arr;
			printf("While is finished startomg at %d %d\n",location.first,location.second);
			auto loc1 = this->gems[indexesBiggestGem().second];
			q.push({{0,std::vector<MapNodeFields>({STAY})},this->num[location.second][location.first]});
			std::pair<std::pair<int,std::vector<MapNodeFields>>,std::shared_ptr<MapNode>> item;
			while(!q.empty()){

				item = q.front();
				q.pop();
				
				item.second->toogleMapped();
				int x1 = item.second->getLocation().first,y1 = item.second->getLocation().second;
				printf("item popped at X:%d Y:%d\n",x1,y1);
				for (auto i : item.first.second)
				{
					switch (i)
					{
					case STAY:
						std::cout<<"STAY-> ";
						break;
					case LEFT:
						std::cout<<"LEFT-> ";
						break;
					case RIGHT:
						std::cout<<"RIGHT-> ";
						break;
					case UP:
						std::cout<<"UP-> ";
						DOWN;
					case DOWN:
						std::cout<<"DOWN-> ";
						break;
					
					default:
						break;
					}
				}
				std::cout<<std::endl;
				printf("%d\n",item.first.first);
				bool flag = false;
				for (auto i : loc1)
				{
					if(item.second->getLocation().first == i->getLocation().first && item.second->getLocation().second == i->getLocation().second){
						printf("location found at %d %d\n",x1,y1);
						flag = true;
						break;
					}
				}
				if(flag){
					break;
				}
				
				
				if(this->isValid(x1+1,y1)){
					auto new_list = item.first.second;	
					new_list.push_back(RIGHT);
					q.push({{item.first.first+1,new_list},this->num[y1][x1+1]});
					printf("item added at X:%d Y:%d\n",x1+1,y1);
					std::cout.flush();
				}
				if(this->isValid(x1-1,y1)){
					auto new_list = item.first.second;
					new_list.push_back(LEFT);
					q.push({{item.first.first+1,new_list},this->num[y1][x1-1]});
					printf("item added at X:%d Y:%d\n",x1-1,y1);
					std::cout.flush();
				}
				if(this->isValid(x1,y1+1)){
					auto new_list = item.first.second;
					new_list.push_back(DOWN);
					q.push({{item.first.first+1,new_list},this->num[y1+1][x1]});
					printf("item added at X:%d Y:%d\n",x1,y1+1);
					std::cout.flush();
				}
				if(this->isValid(x1,y1-1)){
					auto new_list = item.first.second;
					new_list.push_back(UP);
					q.push({{item.first.first+1,new_list},this->num[y1-1][x1]});
					printf("item added at X:%d Y:%d\n",x1,y1-1);
					std::cout.flush();
				}
			}
			std::cout<<"print list"<<std::endl;
			for (size_t i = 0; i < this->num.size(); i++)
			{
				for (size_t j = 0; j < this->num[0].size(); j++)
				{
					this->num[i][j]->untoogleLocked();
					this->num[i][j]->untoogleMapped();
				}
			}
			return item.first.second;
		}

		RobotMoverLogistics():mapOfObj(){

		}
		
};
