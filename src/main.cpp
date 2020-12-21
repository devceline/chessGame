#include <GL/glew.h>
#include "GLFW/glfw3.h"
#include <iostream>


int main(void){
    glfwInit();

    GLFWwindow* window = glfwCreateWindow(500, 500, "Testing OpenGL", 0, 0);
    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;

    if(glewInit() != GLEW_OK){
        std::cout << "Something went wrong!" << std::endl;
        return 123;
    }


    return 0;
}
