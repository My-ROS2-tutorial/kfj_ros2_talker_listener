## Introduction

The talker sends "Hello ROS2 number" periodically.

## Usage

```.sh
ament build --only-packages kfj_ros2_talker_listener
. install/local_setup.sh
run kfj_ros2_talker_listener talker-and-listener
```

Output

```
$ ros2 run kfj_ros2_talker_listener talker-and-listener
Node talker2: Publishing: 'Hello ROS2 0'
Node listener2: I heard: 'Hello ROS2 0'
Node talker2: Publishing: 'Hello ROS2 1'
Node listener2: I heard: 'Hello ROS2 1'
Node talker2: Publishing: 'Hello ROS2 2'
Node listener2: I heard: 'Hello ROS2 2'
Node talker2: Publishing: 'Hello ROS2 3'
Node listener2: I heard: 'Hello ROS2 3'
Node talker2: Publishing: 'Hello ROS2 4'
Node listener2: I heard: 'Hello ROS2 4'
Node talker2: Publishing: 'Hello ROS2 5'
Node listener2: I heard: 'Hello ROS2 5'
```
