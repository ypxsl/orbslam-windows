// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__SET_PARAMETERS_ATOMICALLY__RESPONSE__STRUCT_H_
#define RCL_INTERFACES__SRV__SET_PARAMETERS_ATOMICALLY__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// result
#include "rcl_interfaces/msg/set_parameters_result__struct.h"

/// Struct of message rcl_interfaces/SetParametersAtomically_Response
typedef struct rcl_interfaces__srv__SetParametersAtomically_Response
{
  rcl_interfaces__msg__SetParametersResult result;
} rcl_interfaces__srv__SetParametersAtomically_Response;

/// Struct for an array of messages
typedef struct rcl_interfaces__srv__SetParametersAtomically_Response__Array
{
  rcl_interfaces__srv__SetParametersAtomically_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParametersAtomically_Response__Array;

#if __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__SET_PARAMETERS_ATOMICALLY__RESPONSE__STRUCT_H_
