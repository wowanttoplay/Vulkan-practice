cmake_minimum_required(VERSION 4.1)

project(Vulkan_practice)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

file(GLOB_RECURSE SOURCES src/*.cpp)
file(GLOB_RECURSE HEADERS include/*.h include/*.hpp)

add_executable(Vulkan_practice ${SOURCES} ${HEADERS})
target_include_directories(Vulkan_practice PRIVATE include)
target_link_libraries(Vulkan_practice PRIVATE Vulkan::Vulkan glfw glm::glm)

add_custom_command(TARGET Vulkan_practice POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/shaders $<TARGET_FILE_DIR:Vulkan_practice>/shaders)
