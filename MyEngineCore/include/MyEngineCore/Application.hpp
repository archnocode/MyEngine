#pragma once

#include <GLFW/glfw3.h>
#include <iostream>
#include "MyEngineCore/Log.hpp"

namespace MyEngine{
    enum ApplicationError{
        INIT =     -1,
        CREATE =   -2
    };

    class Application{
        public:
        Application();
        virtual ~Application();

        Application(const Application&) = delete;
        Application(Application&&) = delete;
        Application& operator=(const Application&) = delete;
        Application& operator=(Application&&) = delete;

        virtual int start(unsigned int width, unsigned int height, const char* title);

        virtual void update(){};
    };
}