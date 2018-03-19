#ifndef BCT_CORE_EXCEPTIONS_EXCEPTION_H
#define BCT_CORE_EXCEPTIONS_EXCEPTION_H

#pragma once

#include "BCT.Core.h"
#include "Object.h"
#include "Text/String.h"

using namespace BCT::Core::Text;

namespace BCT
{
    namespace Core
    {
        namespace Exceptions
        {
            class BCT_CORE_API Exception : public Object
            {
                DECLARE_REFLECTION_TYPE()

            public:
                Exception();
                Exception(const String &message);
                virtual ~Exception();

            public:
                String& getMessage();

            private:
                String _message;
            };
        }
    }
}

#endif //BCT_CORE_EXCEPTIONS_EXCEPTION_H
