// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:srv/Item.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__BUILDER_HPP_

#include "robo_miner_interfaces/srv/detail/item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_Item_Request_point
{
public:
  Init_Item_Request_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_miner_interfaces::srv::Item_Request point(::robo_miner_interfaces::srv::Item_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::Item_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::Item_Request>()
{
  return robo_miner_interfaces::srv::builder::Init_Item_Request_point();
}

}  // namespace robo_miner_interfaces


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_Item_Response_error
{
public:
  explicit Init_Item_Response_error(::robo_miner_interfaces::srv::Item_Response & msg)
  : msg_(msg)
  {}
  ::robo_miner_interfaces::srv::Item_Response error(::robo_miner_interfaces::srv::Item_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::Item_Response msg_;
};

class Init_Item_Response_field
{
public:
  Init_Item_Response_field()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Item_Response_error field(::robo_miner_interfaces::srv::Item_Response::_field_type arg)
  {
    msg_.field = std::move(arg);
    return Init_Item_Response_error(msg_);
  }

private:
  ::robo_miner_interfaces::srv::Item_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::Item_Response>()
{
  return robo_miner_interfaces::srv::builder::Init_Item_Response_field();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__BUILDER_HPP_
