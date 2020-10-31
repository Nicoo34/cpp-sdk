#pragma once

#include <cstdint>
#include "../IBaseObject.h"

namespace alt
{
    class IWebView : public virtual IBaseObject
    {
    public:
        virtual ~IWebView() = default;
        virtual void Trigger(alt::StringView eventname, alt::MValueArgs &args) = 0;
        virtual void Focus() = 0;
        virtual void Unfocus() = 0;
        virtual String GetUrl() = 0;
        virtual void SetUrl(alt::StringView url) = 0;
        virtual bool IsVisible() = 0;
        virtual void SetVisible(bool visible) = 0;
    };
} // namespace alt