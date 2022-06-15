#ifndef MINUTESCONTAINER_HPP
#define MINUTESCONTAINER_HPP

#include <gui_generated/containers/MinutesContainerBase.hpp>

class MinutesContainer : public MinutesContainerBase
{
public:
    MinutesContainer();
    virtual ~MinutesContainer() {}

    virtual void initialize();
    virtual void setNumber(int16_t itemIndex);
protected:
};

#endif // MINUTESCONTAINER_HPP
