#include "Exception.h"

using namespace BCT::Core::Exceptions;

IMPLEMENT_REFLECTION_TYPE(Exception, Object)

Exception::Exception()
{
}

Exception::Exception(const String &message)
{
    _message = message;
}

Exception::~Exception()
{
}

String& Exception::getMessage()
{
    return _message;
}
