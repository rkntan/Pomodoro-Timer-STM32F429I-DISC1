#include <gui/containers/MinutesContainer.hpp>
#include <touchgfx/Utils.hpp>

MinutesContainer::MinutesContainer()
{

}

void MinutesContainer::initialize()
{
    MinutesContainerBase::initialize();

}
void MinutesContainer::setNumber(int16_t itemIndex)
{
	//touchgfx_printf("Print our value for integer i = %i \n", itemIndex);

	Unicode::snprintf(numberMinutesBuffer,NUMBERMINUTES_SIZE, "%02d", itemIndex);
/*
	switch (itemIndex)
	    {
	    case 0:
	    	Unicode::strncpy(numberMinutesBuffer,itemIndex, NUMBERMINUTES_SIZE);
	        break;
	    case 1:
	    	Unicode::strncpy(numberMinutesBuffer, "2", NUMBERMINUTES_SIZE);
	        break;
	    case 2:
	    	Unicode::strncpy(numberMinutesBuffer, "3", NUMBERMINUTES_SIZE);
	        break;
	    case 3:
	    	Unicode::strncpy(numberMinutesBuffer, "4", NUMBERMINUTES_SIZE);
	        break;
	    case 4:
	    	Unicode::strncpy(numberMinutesBuffer, "5", NUMBERMINUTES_SIZE);
	        break;
	    case 5:
	    	Unicode::strncpy(numberMinutesBuffer, "6", NUMBERMINUTES_SIZE);
	        break;
	    default:
	    	Unicode::strncpy(numberMinutesBuffer, "11", NUMBERMINUTES_SIZE);
	    }
	*/
	numberMinutes.setWildcard(numberMinutesBuffer);

}
