#pragma once

#include <GLFW/glfw3.h>

class Renderer {
public:
	static void clear() {
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	};
};