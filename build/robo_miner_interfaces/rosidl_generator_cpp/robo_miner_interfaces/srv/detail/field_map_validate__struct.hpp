// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_miner_interfaces:srv/FieldMapValidate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__FIELD_MAP_VALIDATE__STRUCT_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__FIELD_MAP_VALIDATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'field_map'
#include "robo_miner_interfaces/msg/detail/u_int8_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Request __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FieldMapValidate_Request_
{
  using Type = FieldMapValidate_Request_<ContainerAllocator>;

  explicit FieldMapValidate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field_map(_init)
  {
    (void)_init;
  }

  explicit FieldMapValidate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field_map(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _field_map_type =
    robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator>;
  _field_map_type field_map;

  // setters for named parameter idiom
  Type & set__field_map(
    const robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator> & _arg)
  {
    this->field_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Request
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Request
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldMapValidate_Request_ & other) const
  {
    if (this->field_map != other.field_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldMapValidate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldMapValidate_Request_

// alias to use template instance with default allocator
using FieldMapValidate_Request =
  robo_miner_interfaces::srv::FieldMapValidate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces


#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Response __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FieldMapValidate_Response_
{
  using Type = FieldMapValidate_Response_<ContainerAllocator>;

  explicit FieldMapValidate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
    }
  }

  explicit FieldMapValidate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_reason_type error_reason;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_reason(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Response
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__FieldMapValidate_Response
    std::shared_ptr<robo_miner_interfaces::srv::FieldMapValidate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldMapValidate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_reason != other.error_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldMapValidate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldMapValidate_Response_

// alias to use template instance with default allocator
using FieldMapValidate_Response =
  robo_miner_interfaces::srv::FieldMapValidate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces

namespace robo_miner_interfaces
{

namespace srv
{

struct FieldMapValidate
{
  using Request = robo_miner_interfaces::srv::FieldMapValidate_Request;
  using Response = robo_miner_interfaces::srv::FieldMapValidate_Response;
};

}  // namespace srv

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__FIELD_MAP_VALIDATE__STRUCT_HPP_
