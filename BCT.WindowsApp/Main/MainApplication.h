#ifndef BCT_WINDOWSAPP_MAIN_MAINAPPLICATION_H
#define BCT_WINDOWSAPP_MAIN_MAINAPPLICATION_H

#pragma once

#include "BCT.WindowsApp.h"

using namespace BCT::Core::Main;

namespace BCT
{
    namespace WindowsApp
    {
        namespace Main
        {
            class MainApplication : public Application
            {
                DECLARE_REFLECTION_TYPE()

            public:
                MainApplication();
                virtual ~MainApplication();

            public:
                virtual void RunInstance();

            private:
            };
        }
    }
}

#endif //BCT_WINDOWSAPP_MAIN_MAINAPPLICATION_H
