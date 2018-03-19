#ifndef BCT_CORE_STRING_H
#define BCT_CORE_STRING_H

#pragma once

#include "BCT.Core.h"
#include "Object.h"

namespace BCT
{
    namespace Core
    {
        namespace Text
        {
            class BCT_CORE_API String : public Object
            {
                DECLARE_REFLECTION_TYPE()

            public:
                String();
                String(const wchar_t *lpwString);
                String(const String &string);
                virtual ~String();

            public:
                size_t GetLength() const;

            public:
                void operator =(const wchar_t *lpwString);
                void operator =(const String &string);

            public:
                operator const wchar_t*() const;

            private:
                static wchar_t* Alloc(const wchar_t *lpwString);
                static void Free(wchar_t *lpwString);

            private:
                wchar_t *_lpBuffer;
            };
        }
    }
}

#endif //BCT_CORE_STRING_H
