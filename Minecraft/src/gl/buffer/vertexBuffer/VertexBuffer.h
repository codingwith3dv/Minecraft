#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class VertexBuffer {
public:
	VertexBuffer(const void* vertices, unsigned int size);
	~VertexBuffer();
	void connectVertexBuffer() const;
	void disconnectVertexBuffer() const;
private:
	unsigned int id = 0;
};