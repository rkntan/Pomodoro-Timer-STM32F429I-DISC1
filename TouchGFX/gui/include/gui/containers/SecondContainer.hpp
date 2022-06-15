#ifndef SECONDCONTAINER_HPP
#define SECONDCONTAINER_HPP

#include <gui_generated/containers/SecondContainerBase.hpp>

class SecondContainer : public SecondContainerBase
{
public:
    SecondContainer();
    virtual ~SecondContainer() {}

    virtual void initialize();
    virtual void setNumber(int16_t itemIndex);
protected:
};

#endif // SECONDCONTAINER_HPP
