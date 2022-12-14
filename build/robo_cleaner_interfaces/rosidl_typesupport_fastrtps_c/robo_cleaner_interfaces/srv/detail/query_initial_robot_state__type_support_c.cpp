// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_cleaner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__struct.h"
#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__functions.h"
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


// forward declare type support functions


using _QueryInitialRobotState_Request__ros_msg_type = robo_cleaner_interfaces__srv__QueryInitialRobotState_Request;

static bool _QueryInitialRobotState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QueryInitialRobotState_Request__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _QueryInitialRobotState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QueryInitialRobotState_Request__ros_msg_type * ros_message = static_cast<_QueryInitialRobotState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t get_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QueryInitialRobotState_Request__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotState_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _QueryInitialRobotState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t max_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _QueryInitialRobotState_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_QueryInitialRobotState_Request = {
  "robo_cleaner_interfaces::srv",
  "QueryInitialRobotState_Request",
  _QueryInitialRobotState_Request__cdr_serialize,
  _QueryInitialRobotState_Request__cdr_deserialize,
  _QueryInitialRobotState_Request__get_serialized_size,
  _QueryInitialRobotState_Request__max_serialized_size
};

static rosidl_message_type_support_t _QueryInitialRobotState_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QueryInitialRobotState_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Request)() {
  return &_QueryInitialRobotState_Request__type_support;
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
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__struct.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__functions.h"
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

#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__functions.h"  // initial_robot_state
#include "rosidl_runtime_c/string.h"  // error_reason
#include "rosidl_runtime_c/string_functions.h"  // error_reason

// forward declare type support functions
size_t get_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, InitialRobotState)();


using _QueryInitialRobotState_Response__ros_msg_type = robo_cleaner_interfaces__srv__QueryInitialRobotState_Response;

static bool _QueryInitialRobotState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QueryInitialRobotState_Response__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->error_reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: initial_robot_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, InitialRobotState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_robot_state, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _QueryInitialRobotState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QueryInitialRobotState_Response__ros_msg_type * ros_message = static_cast<_QueryInitialRobotState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: error_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->error_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_reason'\n");
      return false;
    }
  }

  // Field name: initial_robot_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, InitialRobotState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_robot_state))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t get_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QueryInitialRobotState_Response__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotState_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_reason.size + 1);
  // field.name initial_robot_state

  current_alignment += get_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
    &(ros_message->initial_robot_state), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _QueryInitialRobotState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t max_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: initial_robot_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _QueryInitialRobotState_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_cleaner_interfaces__srv__QueryInitialRobotState_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_QueryInitialRobotState_Response = {
  "robo_cleaner_interfaces::srv",
  "QueryInitialRobotState_Response",
  _QueryInitialRobotState_Response__cdr_serialize,
  _QueryInitialRobotState_Response__cdr_deserialize,
  _QueryInitialRobotState_Response__get_serialized_size,
  _QueryInitialRobotState_Response__max_serialized_size
};

static rosidl_message_type_support_t _QueryInitialRobotState_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QueryInitialRobotState_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Response)() {
  return &_QueryInitialRobotState_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_cleaner_interfaces/srv/query_initial_robot_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t QueryInitialRobotState__callbacks = {
  "robo_cleaner_interfaces::srv",
  "QueryInitialRobotState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Response)(),
};

static rosidl_service_type_support_t QueryInitialRobotState__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &QueryInitialRobotState__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, QueryInitialRobotState)() {
  return &QueryInitialRobotState__handle;
}

#if defined(__cplusplus)
}
#endif
