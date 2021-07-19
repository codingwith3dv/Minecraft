#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <fstream>
#include <sstream>
#include <string>

struct ShaderSource {
	std::string VertexSource;
	std::string FragmentSource;
};

class Shader {
public:
	Shader(const std::string& filePath);
	~Shader();
	void connectShader() const;
	void disconnectShader() const;
private:
	unsigned int id;
	std::string filePath;
	ShaderSource parseShader();
	unsigned int compileShader(unsigned int type, const std::string& source);
	unsigned int createShader(const std::string& vertexSource, const std::string& fragmentSource);
};