#include "String.h"

using namespace BCT::Core::Text;

IMPLEMENT_REFLECTION_TYPE(String, Object)

String::String()
{
    _lpBuffer = Alloc(nullptr);
}

String::String(const wchar_t *lpwString)
{
    _lpBuffer = Alloc(lpwString);
}

String::String(const String &string)
{
    _lpBuffer = Alloc(string._lpBuffer);
}

String::~String()
{
    Free(_lpBuffer);
}

size_t String::GetLength() const
{
    return wcslen(_lpBuffer);
}

void String::operator =(const wchar_t *lpwString)
{
    Free(_lpBuffer);
    _lpBuffer = Alloc(lpwString);
}

void String::operator =(const String &string)
{
    Free(_lpBuffer);
    _lpBuffer = Alloc(string._lpBuffer);
}

String::operator const wchar_t*() const
{
    return _lpBuffer;
}

wchar_t* String::Alloc(const wchar_t *lpwString)
{
    if (lpwString == nullptr)
        return Alloc(L"");

    auto characterCount = wcslen(lpwString) + 1;
    auto lpwBuffer = (wchar_t*) malloc(sizeof(wchar_t) * characterCount);

    wcscpy_s(lpwBuffer, characterCount, lpwString);

    return lpwBuffer;
}

void String::Free(wchar_t *lpwString)
{
    if (lpwString == nullptr)
        return;

    free(lpwString);
}
