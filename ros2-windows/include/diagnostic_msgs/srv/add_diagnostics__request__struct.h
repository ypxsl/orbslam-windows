// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__REQUEST__STRUCT_H_
#define DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// load_namespace
#include "rosidl_generator_c/string.h"

/// Struct of message diagnostic_msgs/AddDiagnostics_Request
typedef struct diagnostic_msgs__srv__AddDiagnostics_Request
{
  rosidl_generator_c__String load_namespace;
} diagnostic_msgs__srv__AddDiagnostics_Request;

/// Struct for an array of messages
typedef struct diagnostic_msgs__srv__AddDiagnostics_Request__Array
{
  diagnostic_msgs__srv__AddDiagnostics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__AddDiagnostics_Request__Array;

#if __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__ADD_DIAGNOSTICS__REQUEST__STRUCT_H_