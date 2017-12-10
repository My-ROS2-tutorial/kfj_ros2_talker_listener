/*
 * ROS2 talker & listener.
 * 
 * Refer to https://github.com/ros2/examples/blob/master/rclcpp/minimal_composition/src/composed.cpp
 */

#include<memory>

#include"kfj_ros2_listener/kfj_listener2.hpp"
#include"kfj_ros2_talker/kfj_talker2.hpp"

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);

    auto talker_node = std::make_shared<KfjTalker2>();
    auto listener_node = std::make_shared<KfjListener2>();
    
    rclcpp::executors::SingleThreadedExecutor exec;
    exec.add_node(talker_node);
    exec.add_node(listener_node);
    exec.spin();

    rclcpp::shutdown();

    return 0;
}
