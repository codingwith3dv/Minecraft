#shader vertex
#version 330 core

layout(location = 0) in vec2 a_position;

void main(void) {
	gl_Position = vec4(a_position, 0.0, 1.0);
};

#shader fragment
#version 330 core

layout(location = 0) out vec4 color;

void main(void) {
	color = vec4(0.2, 0.6, 0.8, 1.0);
};