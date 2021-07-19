#include "VertexBuffer.h"

VertexBuffer::VertexBuffer(const void* vertices, unsigned int size)
{
	glGenBuffers(1, &id);
	glBindBuffer(GL_ARRAY_BUFFER, id);
	glBufferData(
		GL_ARRAY_BUFFER,
		size,
		vertices,
		GL_STATIC_DRAW
	);
}

VertexBuffer::~VertexBuffer()
{
	glDeleteBuffers(1, &id);
}

void VertexBuffer::connectVertexBuffer() const
{
	glBindBuffer(GL_ARRAY_BUFFER, id);
}

void VertexBuffer::disconnectVertexBuffer() const
{
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}
