#include "Application.h"
#include "Exceptions/Exception.h"

using namespace BCT::Core::Exceptions;
using namespace BCT::Core::Main;

IMPLEMENT_REFLECTION_TYPE(Application, Object)

Application::Application()
{
}

Application::~Application()
{
}

void Application::InitializeInstance()
{
}

void Application::RunInstance()
{
}

void Application::ShutdownInstance()
{
}

int Application::Main(HINSTANCE hInstance, LPWSTR lpwCmdLine, int nCmdShow)
{
    try
    {
        InitializeInstance();
        RunInstance();
        ShutdownInstance();

        return 0;
    }
    catch (Exception)
    {
        return -1;
    }
}
