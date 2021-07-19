#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "gl/glUtils.h"
#include "gl/renderer/Renderer.h"

#include "gl/buffer/vertexBuffer/VertexBuffer.h"
#include "gl/buffer/indexBuffer/IndexBuffer.h"
#include "gl/shader/Shader.h"

int main(void)
{
    initOpengGL();

    float vertices[8] = {
        -0.5f, -0.5f,
         0.5f, -0.5f,
         0.5f,  0.5f,
        -0.5f,  0.5f,
    };
    unsigned int indices[] = {
        0, 1, 2, 2, 3, 0
    };

    VertexBuffer vbo(vertices, 8 * sizeof(float));
    IndexBuffer ibo(indices, 6);
    Shader shader("src/shaders/block.shader");

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);

    shader.connectShader();

    while (!shouldCloseWIndow())
    {
        Renderer::clear();

        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        processEvents();
    }

    close();
    return 0;
}