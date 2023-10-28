#pragma once

#ifdef SW_PLATFORM_WINDOWS

int main(int argc, char** argv)
{
    SimWare::Application* app = SimWare::CreateApplication();
    app->Run();
    delete app;
}

#endif
