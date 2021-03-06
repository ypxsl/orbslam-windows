// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__TRANSITION__FUNCTIONS_H_
#define LIFECYCLE_MSGS__MSG__TRANSITION__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "lifecycle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lifecycle_msgs/msg/transition__struct.h"

/// Initialize lifecycle_msgs/Transition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(lifecycle_msgs__msg__Transition)) before
 * or use lifecycle_msgs__msg__Transition__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
bool
lifecycle_msgs__msg__Transition__init(lifecycle_msgs__msg__Transition * msg);

/// Finalize lifecycle_msgs/Transition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
void
lifecycle_msgs__msg__Transition__fini(lifecycle_msgs__msg__Transition * msg);

/// Create lifecycle_msgs/Transition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls lifecycle_msgs__msg__Transition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
lifecycle_msgs__msg__Transition *
lifecycle_msgs__msg__Transition__create();

/// Destroy lifecycle_msgs/Transition message.
/**
 * It calls lifecycle_msgs__msg__Transition__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
void
lifecycle_msgs__msg__Transition__destroy(lifecycle_msgs__msg__Transition * msg);


/// Initialize array of lifecycle_msgs/Transition messages.
/**
 * It allocates the memory for the number of elements and
 * calls lifecycle_msgs__msg__Transition__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
bool
lifecycle_msgs__msg__Transition__Array__init(lifecycle_msgs__msg__Transition__Array * array, size_t size);

/// Finalize array of lifecycle_msgs/Transition messages.
/**
 * It calls lifecycle_msgs__msg__Transition__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
void
lifecycle_msgs__msg__Transition__Array__fini(lifecycle_msgs__msg__Transition__Array * array);

/// Create array of lifecycle_msgs/Transition messages.
/**
 * It allocates the memory for the array and
 * calls lifecycle_msgs__msg__Transition__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
lifecycle_msgs__msg__Transition__Array *
lifecycle_msgs__msg__Transition__Array__create(size_t size);

/// Destroy array of lifecycle_msgs/Transition messages.
/**
 * It calls lifecycle_msgs__msg__Transition__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lifecycle_msgs
void
lifecycle_msgs__msg__Transition__Array__destroy(lifecycle_msgs__msg__Transition__Array * array);

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__TRANSITION__FUNCTIONS_H_
