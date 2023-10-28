#include <SimWare.h>

class Sandbox : public SimWare::Application
{
public:
    Sandbox()
    {   
    }

    ~Sandbox()
    {
    }
};

SimWare::Application* SimWare::CreateApplication()
{
    return new Sandbox();
}