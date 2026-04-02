cmake_minimum_required(VERSION 4.1)

project(Vulkan_practice)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

add_executable(Vulkan_practice main.cpp)
target_link_libraries(Vulkan_practice PRIVATE Vulkan::Vulkan glfw glm::glm)
