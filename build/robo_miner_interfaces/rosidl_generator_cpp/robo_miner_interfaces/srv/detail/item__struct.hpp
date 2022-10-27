// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_miner_interfaces:srv/Item.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__STRUCT_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point'
#include "robo_miner_interfaces/msg/detail/field_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__Item_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__Item_Request __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Item_Request_
{
  using Type = Item_Request_<ContainerAllocator>;

  explicit Item_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    (void)_init;
  }

  explicit Item_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator>;
  _point_type point;

  // setters for named parameter idiom
  Type & set__point(
    const robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::srv::Item_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::Item_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::Item_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::Item_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__Item_Request
    std::shared_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__Item_Request
    std::shared_ptr<robo_miner_interfaces::srv::Item_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Item_Request_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const Item_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Item_Request_

// alias to use template instance with default allocator
using Item_Request =
  robo_miner_interfaces::srv::Item_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces


#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__Item_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__Item_Response __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Item_Response_
{
  using Type = Item_Response_<ContainerAllocator>;

  explicit Item_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field = 0;
      this->error = false;
    }
  }

  explicit Item_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field = 0;
      this->error = false;
    }
  }

  // field types and members
  using _field_type =
    uint8_t;
  _field_type field;
  using _error_type =
    bool;
  _error_type error;

  // setters for named parameter idiom
  Type & set__field(
    const uint8_t & _arg)
  {
    this->field = _arg;
    return *this;
  }
  Type & set__error(
    const bool & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::srv::Item_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::Item_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::Item_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::Item_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__Item_Response
    std::shared_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__Item_Response
    std::shared_ptr<robo_miner_interfaces::srv::Item_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Item_Response_ & other) const
  {
    if (this->field != other.field) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Item_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Item_Response_

// alias to use template instance with default allocator
using Item_Response =
  robo_miner_interfaces::srv::Item_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces

namespace robo_miner_interfaces
{

namespace srv
{

struct Item
{
  using Request = robo_miner_interfaces::srv::Item_Request;
  using Response = robo_miner_interfaces::srv::Item_Response;
};

}  // namespace srv

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__STRUCT_HPP_
