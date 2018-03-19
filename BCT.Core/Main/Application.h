#ifndef BCT_CORE_MAIN_APPLICATION_H
#define BCT_CORE_MAIN_APPLICATION_H

#pragma once

#include "BCT.Core.h"
#include "Object.h"

namespace BCT
{
    namespace Core
    {
        namespace Main
        {
            class BCT_CORE_API Application : public Object
            {
                DECLARE_REFLECTION_TYPE()

            public:
                Application();
                virtual ~Application();

            public:
                virtual void InitializeInstance();
                virtual void RunInstance();
                virtual void ShutdownInstance();

            public:
                int Main(HINSTANCE hInstance, LPWSTR lpwCmdLine, int nCmdShow);

            private:

            private:
            };
        }
    }
}

#define DECLARE_APPLICATION_ENTRYPOINT(applicationClass)\
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpwCmdLine, int nCmdShow)\
{\
    applicationClass application;\
    return application.Main(hInstance, lpwCmdLine, nCmdShow);\
}

#endif //BCT_CORE_MAIN_APPLICATION_H
