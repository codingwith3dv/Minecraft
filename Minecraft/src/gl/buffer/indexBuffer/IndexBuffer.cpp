#include "IndexBuffer.h"

IndexBuffer::IndexBuffer(const unsigned int* indices, unsigned int _count)
	: count(_count)
{
	glGenBuffers(1, &id);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, id);
	glBufferData(
		GL_ELEMENT_ARRAY_BUFFER,
		count * sizeof(unsigned int),
		indices,
		GL_STATIC_DRAW
	);
}

IndexBuffer::~IndexBuffer()
{
	glDeleteBuffers(1, &id);
}

void IndexBuffer::connectIndexBuffer() const
{
}

void IndexBuffer::disconnectIndexBuffer() const
{
}
