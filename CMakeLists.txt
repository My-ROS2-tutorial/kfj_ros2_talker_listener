cmake_minimum_required(VERSION 3.5)
project(kfj_ros2_talker_listener)

set(CMAKE_PREFIX_PATH
    $ENV{CMAKE_PREFIX_PATH}
    ${CMAKE_PREFIX_PATH}
    )

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(kfj_ros2_listener REQUIRED)
find_package(kfj_ros2_talker REQUIRED)

add_executable("talker-and-listener" main.cpp)
ament_target_dependencies("talker-and-listener" rclcpp std_msgs kfj_ros2_talker kfj_ros2_listener)

install(TARGETS
    "talker-and-listener"
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
    )

ament_package()
