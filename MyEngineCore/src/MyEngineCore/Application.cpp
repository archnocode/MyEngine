#include "MyEngineCore/Application.hpp"

namespace MyEngine{
    Application::Application(){
        LOG_INFO("INFO MESSAGE");
        LOG_WARN("WARN MESSAGE");
        LOG_ERROR("ERROR MESSAGE");
        LOG_CRITICAL("CRITICAL MESSAGE");
    }
    Application::~Application(){

    }

    int Application::start(unsigned int width, unsigned int height, const char* title){
        if (!glfwInit()){
            std::cerr << "\e[31mFailed to init GLFW!\e[0m" << std::endl;
            return MyEngine::INIT;
        }
        GLFWwindow* window = glfwCreateWindow(width, height, title, NULL, NULL);
        if (!window){
            std::cerr << "\e[31mFailed to create Window!\e[0m" << std::endl;
            return MyEngine::CREATE;
        }

        glfwMakeContextCurrent(window);

        while (!glfwWindowShouldClose(window)){
            glfwSwapBuffers(window);
            glfwPollEvents();
            update();
        }

        glfwTerminate();
        return 0;
    }
}