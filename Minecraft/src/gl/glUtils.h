#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

GLFWwindow* window;
static void initOpengGL() {
    glfwInit();
    window = glfwCreateWindow(1720, 880, "Minecraft", NULL, NULL);
    glfwMakeContextCurrent(window);
    glewInit();
}

bool shouldCloseWIndow() {
    return glfwWindowShouldClose(window);
}

void processEvents() {
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void close() {
    glfwTerminate();
}