// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__ACCEL__FUNCTIONS_H_
#define GEOMETRY_MSGS__MSG__ACCEL__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "geometry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geometry_msgs/msg/accel__struct.h"

/// Initialize geometry_msgs/Accel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(geometry_msgs__msg__Accel)) before
 * or use geometry_msgs__msg__Accel__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__Accel__init(geometry_msgs__msg__Accel * msg);

/// Finalize geometry_msgs/Accel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Accel__fini(geometry_msgs__msg__Accel * msg);

/// Create geometry_msgs/Accel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls geometry_msgs__msg__Accel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__Accel *
geometry_msgs__msg__Accel__create();

/// Destroy geometry_msgs/Accel message.
/**
 * It calls geometry_msgs__msg__Accel__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Accel__destroy(geometry_msgs__msg__Accel * msg);


/// Initialize array of geometry_msgs/Accel messages.
/**
 * It allocates the memory for the number of elements and
 * calls geometry_msgs__msg__Accel__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__Accel__Array__init(geometry_msgs__msg__Accel__Array * array, size_t size);

/// Finalize array of geometry_msgs/Accel messages.
/**
 * It calls geometry_msgs__msg__Accel__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Accel__Array__fini(geometry_msgs__msg__Accel__Array * array);

/// Create array of geometry_msgs/Accel messages.
/**
 * It allocates the memory for the array and
 * calls geometry_msgs__msg__Accel__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__Accel__Array *
geometry_msgs__msg__Accel__Array__create(size_t size);

/// Destroy array of geometry_msgs/Accel messages.
/**
 * It calls geometry_msgs__msg__Accel__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Accel__Array__destroy(geometry_msgs__msg__Accel__Array * array);

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__ACCEL__FUNCTIONS_H_
