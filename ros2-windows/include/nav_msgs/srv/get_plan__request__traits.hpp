// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_PLAN__REQUEST__TRAITS_HPP_
#define NAV_MSGS__SRV__GET_PLAN__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "nav_msgs/srv/get_plan__request__struct.hpp"


template<>
struct has_fixed_size<nav_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value>{};

template<>
struct has_bounded_size<nav_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value>{};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__GET_PLAN__REQUEST__TRAITS_HPP_
