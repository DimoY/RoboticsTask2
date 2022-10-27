// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_miner_interfaces:srv/Item.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__STRUCT_H_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "robo_miner_interfaces/msg/detail/field_point__struct.h"

// Struct defined in srv/Item in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__Item_Request
{
  robo_miner_interfaces__msg__FieldPoint point;
} robo_miner_interfaces__srv__Item_Request;

// Struct for a sequence of robo_miner_interfaces__srv__Item_Request.
typedef struct robo_miner_interfaces__srv__Item_Request__Sequence
{
  robo_miner_interfaces__srv__Item_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__Item_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Item in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__Item_Response
{
  uint8_t field;
  bool error;
} robo_miner_interfaces__srv__Item_Response;

// Struct for a sequence of robo_miner_interfaces__srv__Item_Response.
typedef struct robo_miner_interfaces__srv__Item_Response__Sequence
{
  robo_miner_interfaces__srv__Item_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__Item_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ITEM__STRUCT_H_
