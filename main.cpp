#include "foo.h"
#include <iostream>
#include "libs/glfw/include/GLFW/glfw3.h"

int main() {
    std::cout << "Starting program...\n";

    if (!glfwInit()) {
        std::cerr << "GLFW init failed\n";
        return -1;
    }

    std::cout << "GLFW initialized\n";

    GLFWwindow* window =
        glfwCreateWindow(800, 600, "Test Window", nullptr, nullptr);

    if (!window) {
        std::cerr << "Window creation failed\n";
        glfwTerminate();
        return -1;
    }

    std::cout << "Window created\n";

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}
