#include <iostream>
#include <MyEngineCore/Application.hpp>
#include <memory>

class MyApp : public MyEngine::Application{
    public:
    virtual void update() override{
        frame++;
    }

    int frame;
};

int main(){
    auto app = std::make_unique<MyApp>();

    int return_code = app->start(800, 800, "MyApp");
    return return_code;
}