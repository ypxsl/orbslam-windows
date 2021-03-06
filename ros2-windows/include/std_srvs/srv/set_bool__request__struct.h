// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__SET_BOOL__REQUEST__STRUCT_H_
#define STD_SRVS__SRV__SET_BOOL__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message std_srvs/SetBool_Request
typedef struct std_srvs__srv__SetBool_Request
{
  bool data;
} std_srvs__srv__SetBool_Request;

/// Struct for an array of messages
typedef struct std_srvs__srv__SetBool_Request__Array
{
  std_srvs__srv__SetBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Request__Array;

#if __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__SET_BOOL__REQUEST__STRUCT_H_
