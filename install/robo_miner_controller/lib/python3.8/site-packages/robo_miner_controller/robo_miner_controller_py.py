from robo_miner_interfaces.srv import QueryInitialRobotPosition
from rclpy.node import Node
from rclpy.client import Client
import rclpy

class RoboMinerControler(Node):
    def __init__(self):
        super.__init__("RMC")
        initialPos:Client = self.create_client("query_initial_robot_position")
        request = QueryInitialRobotPosition.Request()
        handle = initialPos.call_async(request)
        k:QueryInitialRobotPosition.Response = handle.result()
        print(k.robot_initial_tile)


def main(args=None):
    rclpy.init(args)
    rmc = RoboMinerControler()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
