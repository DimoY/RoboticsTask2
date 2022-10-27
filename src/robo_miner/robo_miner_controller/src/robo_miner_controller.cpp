#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include <memory>
#include <chrono>
#include <robo_miner_controller/Application1/Application1.hpp>




int main(int argc, char ** argv)
{
printf("Prob hanging");
	rclcpp::init(argc, argv);
printf("Prob hanging");
		std::shared_ptr<RoboMinerControler> node = std::make_shared<RoboMinerControler>();

		node->getInitailInfo();
		node->robotMove(1);
		DFS(node);
		node->finalStretch();
		node->FindLongestGem();
	//implement movment


	rclcpp::shutdown();
	printf("END\n");
	return 1;
}