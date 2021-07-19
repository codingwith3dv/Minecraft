#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class IndexBuffer {
public:
	IndexBuffer(const unsigned int* indices, unsigned int _count);
	~IndexBuffer();
	void connectIndexBuffer() const;
	void disconnectIndexBuffer() const;

	inline unsigned int getCount() const { return count; };

private:
	unsigned int id;
	unsigned int count;
};