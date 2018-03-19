#include "Type.h"

using namespace BCT::Core::Reflection;

Type::Type(const wchar_t *className)
{
    _className = className;
    _parentType = nullptr;
}


Type::Type(const wchar_t *className, const Type *parentType)
{
    _className = className;
    _parentType = parentType;
}

Type::~Type()
{
}

const wchar_t *Type::getClassName() const
{
    return _className;
}

const Type *Type::getParentType() const
{
    return _parentType;
}
