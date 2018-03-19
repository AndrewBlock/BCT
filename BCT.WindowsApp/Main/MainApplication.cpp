#include "MainApplication.h"

using namespace BCT::WindowsApp::Main;

DECLARE_APPLICATION_ENTRYPOINT(MainApplication)

IMPLEMENT_REFLECTION_TYPE(MainApplication, Application)

MainApplication::MainApplication()
{
}

MainApplication::~MainApplication()
{
}

void MainApplication::RunInstance()
{
    auto type = getType();
}
