// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/srv/detail/query_battery_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_cleaner_interfaces/srv/detail/query_battery_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robo_cleaner_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_serialize(
  const robo_cleaner_interfaces::srv::QueryBatteryStatus_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_cleaner_interfaces::srv::QueryBatteryStatus_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
get_serialized_size(
  const robo_cleaner_interfaces::srv::QueryBatteryStatus_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
max_serialized_size_QueryBatteryStatus_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _QueryBatteryStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::srv::QueryBatteryStatus_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _QueryBatteryStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _QueryBatteryStatus_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::srv::QueryBatteryStatus_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _QueryBatteryStatus_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_QueryBatteryStatus_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _QueryBatteryStatus_Request__callbacks = {
  "robo_cleaner_interfaces::srv",
  "QueryBatteryStatus_Request",
  _QueryBatteryStatus_Request__cdr_serialize,
  _QueryBatteryStatus_Request__cdr_deserialize,
  _QueryBatteryStatus_Request__get_serialized_size,
  _QueryBatteryStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _QueryBatteryStatus_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_QueryBatteryStatus_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robo_cleaner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>()
{
  return &robo_cleaner_interfaces::srv::typesupport_fastrtps_cpp::_QueryBatteryStatus_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_cleaner_interfaces, srv, QueryBatteryStatus_Request)() {
  return &robo_cleaner_interfaces::srv::typesupport_fastrtps_cpp::_QueryBatteryStatus_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace robo_cleaner_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const robo_cleaner_interfaces::msg::BatteryStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robo_cleaner_interfaces::msg::BatteryStatus &);
size_t get_serialized_size(
  const robo_cleaner_interfaces::msg::BatteryStatus &,
  size_t current_alignment);
size_t
max_serialized_size_BatteryStatus(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_serialize(
  const robo_cleaner_interfaces::srv::QueryBatteryStatus_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_status
  robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.battery_status,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_cleaner_interfaces::srv::QueryBatteryStatus_Response & ros_message)
{
  // Member: battery_status
  robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.battery_status);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
get_serialized_size(
  const robo_cleaner_interfaces::srv::QueryBatteryStatus_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_status

  current_alignment +=
    robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.battery_status, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
max_serialized_size_QueryBatteryStatus_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: battery_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_BatteryStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _QueryBatteryStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::srv::QueryBatteryStatus_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _QueryBatteryStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _QueryBatteryStatus_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::srv::QueryBatteryStatus_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _QueryBatteryStatus_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_QueryBatteryStatus_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _QueryBatteryStatus_Response__callbacks = {
  "robo_cleaner_interfaces::srv",
  "QueryBatteryStatus_Response",
  _QueryBatteryStatus_Response__cdr_serialize,
  _QueryBatteryStatus_Response__cdr_deserialize,
  _QueryBatteryStatus_Response__get_serialized_size,
  _QueryBatteryStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _QueryBatteryStatus_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_QueryBatteryStatus_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robo_cleaner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>()
{
  return &robo_cleaner_interfaces::srv::typesupport_fastrtps_cpp::_QueryBatteryStatus_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_cleaner_interfaces, srv, QueryBatteryStatus_Response)() {
  return &robo_cleaner_interfaces::srv::typesupport_fastrtps_cpp::_QueryBatteryStatus_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace robo_cleaner_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _QueryBatteryStatus__callbacks = {
  "robo_cleaner_interfaces::srv",
  "QueryBatteryStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_cleaner_interfaces, srv, QueryBatteryStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_cleaner_interfaces, srv, QueryBatteryStatus_Response)(),
};

static rosidl_service_type_support_t _QueryBatteryStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_QueryBatteryStatus__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robo_cleaner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_cleaner_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<robo_cleaner_interfaces::srv::QueryBatteryStatus>()
{
  return &robo_cleaner_interfaces::srv::typesupport_fastrtps_cpp::_QueryBatteryStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_cleaner_interfaces, srv, QueryBatteryStatus)() {
  return &robo_cleaner_interfaces::srv::typesupport_fastrtps_cpp::_QueryBatteryStatus__handle;
}

#ifdef __cplusplus
}
#endif
