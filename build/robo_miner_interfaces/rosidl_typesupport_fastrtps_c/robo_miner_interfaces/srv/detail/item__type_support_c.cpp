// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:srv/Item.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/srv/detail/item__struct.h"
#include "robo_miner_interfaces/srv/detail/item__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "robo_miner_interfaces/msg/detail/field_point__functions.h"  // point

// forward declare type support functions
size_t get_serialized_size_robo_miner_interfaces__msg__FieldPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_miner_interfaces__msg__FieldPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, FieldPoint)();


using _Item_Request__ros_msg_type = robo_miner_interfaces__srv__Item_Request;

static bool _Item_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Item_Request__ros_msg_type * ros_message = static_cast<const _Item_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, FieldPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->point, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Item_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Item_Request__ros_msg_type * ros_message = static_cast<_Item_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, FieldPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->point))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__Item_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Item_Request__ros_msg_type * ros_message = static_cast<const _Item_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name point

  current_alignment += get_serialized_size_robo_miner_interfaces__msg__FieldPoint(
    &(ros_message->point), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Item_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__Item_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__Item_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_miner_interfaces__msg__FieldPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Item_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__Item_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Item_Request = {
  "robo_miner_interfaces::srv",
  "Item_Request",
  _Item_Request__cdr_serialize,
  _Item_Request__cdr_deserialize,
  _Item_Request__get_serialized_size,
  _Item_Request__max_serialized_size
};

static rosidl_message_type_support_t _Item_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Item_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, Item_Request)() {
  return &_Item_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/item__struct.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/item__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Item_Response__ros_msg_type = robo_miner_interfaces__srv__Item_Response;

static bool _Item_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Item_Response__ros_msg_type * ros_message = static_cast<const _Item_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: field
  {
    cdr << ros_message->field;
  }

  // Field name: error
  {
    cdr << (ros_message->error ? true : false);
  }

  return true;
}

static bool _Item_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Item_Response__ros_msg_type * ros_message = static_cast<_Item_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: field
  {
    cdr >> ros_message->field;
  }

  // Field name: error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__Item_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Item_Response__ros_msg_type * ros_message = static_cast<const _Item_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name field
  {
    size_t item_size = sizeof(ros_message->field);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Item_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__Item_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__Item_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: field
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Item_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__Item_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Item_Response = {
  "robo_miner_interfaces::srv",
  "Item_Response",
  _Item_Response__cdr_serialize,
  _Item_Response__cdr_deserialize,
  _Item_Response__get_serialized_size,
  _Item_Response__max_serialized_size
};

static rosidl_message_type_support_t _Item_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Item_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, Item_Response)() {
  return &_Item_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/srv/item.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Item__callbacks = {
  "robo_miner_interfaces::srv",
  "Item",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, Item_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, Item_Response)(),
};

static rosidl_service_type_support_t Item__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Item__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, Item)() {
  return &Item__handle;
}

#if defined(__cplusplus)
}
#endif
