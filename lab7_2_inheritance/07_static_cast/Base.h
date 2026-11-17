#pragma once

class Base
{
public:
    virtual void DummyFunction();   // virtual => Base is polymorphic, which dynamic_cast needs
    virtual ~Base() {}
};
