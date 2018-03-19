#ifndef BCT_CORE_OBJECT_H
#define BCT_CORE_OBJECT_H

#pragma once

#include "BCT.Core.h"
#include "Reflection/Type.h"

using namespace BCT::Core::Reflection;

namespace BCT
{
    namespace Core
    {
        class BCT_CORE_API Object
        {
            DECLARE_REFLECTION_TYPE()

        public:
            Object();
            virtual ~Object();

        public:
            virtual int getHashCode() const;
            virtual bool Equals(const Object &object) const;

        private:

        private:
        };
    }
}

#endif //BCT_CORE_OBJECT_H
