#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <iostream>

int main() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return 1;
    }

    // Check Vulkan support
    if (!glfwVulkanSupported()) {
        std::cerr << "Vulkan not supported" << std::endl;
        glfwTerminate();
        return 1;
    }

    // Quick GLM test
    glm::vec3 v(1.0f, 2.0f, 3.0f);

    std::cout << "GLFW initialized successfully" << std::endl;
    std::cout << "Vulkan supported: yes" << std::endl;
    std::cout << "GLM vec3: (" << v.x << ", " << v.y << ", " << v.z << ")" << std::endl;

    glfwTerminate();
    return 0;
}