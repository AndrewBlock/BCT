#ifndef BCT_REFLECTION_TYPE_H
#define BCT_REFLECTION_TYPE_H

#pragma once

#include "BCT.Core.h"

namespace BCT
{
    namespace Core
    {
        namespace Reflection
        {
            class BCT_CORE_API Type
            {
            public:
                Type(const wchar_t *className);
                Type(const wchar_t *className, const Type *parentType);
                virtual ~Type();

            public:
                const wchar_t *getClassName() const;
                const Type *getParentType() const;

            private:
                const wchar_t *_className;
                const Type *_parentType;
            };
        }
    }
}

#define DECLARE_REFLECTION_TYPE()\
protected:\
    static Type _type;\
public:\
    virtual Type* getType() const { return &_type; }

#define IMPLEMENT_ROOT_REFLECTION_TYPE(className)\
Type className::_type(L""#className"");

#define IMPLEMENT_REFLECTION_TYPE(className, parentClassName)\
Type className::_type(L""#className"", &parentClassName::_type);

#endif //BCT_REFLECTION_TYPE_H
