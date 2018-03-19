#include "Object.h"

using namespace BCT::Core;
using namespace BCT::Core::Reflection;

IMPLEMENT_ROOT_REFLECTION_TYPE(Object)

Object::Object()
{
}

Object::~Object()
{
}

int Object::getHashCode() const
{
    return 1;
}

bool Object::Equals(const Object &object) const
{
    return true;
}
