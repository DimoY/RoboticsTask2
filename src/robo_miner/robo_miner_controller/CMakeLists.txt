cmake_minimum_required(VERSION 3.5)
project(robo_miner_controller)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(rclcpp REQUIRED)
find_package(robo_miner_interfaces REQUIRED)

set(INCLUDE_DIR include/${PROJECT_NAME})

add_executable(robo_miner_controller 
src/robo_miner_controller.cpp
${INCLUDE_DIR}/RobotMoveLogistics/RobotMoveLogistics.hpp
${INCLUDE_DIR}/MapNode/MapNode.hpp
${INCLUDE_DIR}/FieldType/Fieldtype.hpp
${INCLUDE_DIR}/MapNodeFields/MapNodeFields.hpp
${INCLUDE_DIR}/Application1/Application1.hpp
)
target_include_directories(robo_miner_controller PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(
  robo_miner_controller
  "rclcpp"
  "robo_miner_interfaces"
  "ament_index_cpp"
)



install(TARGETS robo_miner_controller
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
