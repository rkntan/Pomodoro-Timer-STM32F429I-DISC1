#include <gui/containers/SecondContainer.hpp>

SecondContainer::SecondContainer()
{

}

void SecondContainer::initialize()
{
    SecondContainerBase::initialize();
}

void SecondContainer::setNumber(int16_t itemIndex)
{
	Unicode::snprintf(numberSecondsBuffer,NUMBERSECONDS_SIZE, "%02d", itemIndex);
	numberSeconds.setWildcard(numberSecondsBuffer);

}
