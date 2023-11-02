#define _USE_LIBMINHAVERSINE_DEFINES
#include "libminhaversine.h"

double distances(place* starting, place* ending)
{
	if (!(VALID_LATITUDE(starting->latitude) && 
		VALID_LATITUDE(ending->latitude) && 
		VALID_LONGITUDE(starting->longitude) && 
		VALID_LONGITUDE(ending->longitude)))
	{
		return ERROR;
	}

	return 2.00 * EARTH_RADIUS * asin(
		sqrt(
			pow(sin((RADIANS(ending->latitude) - RADIANS(starting->latitude)) / 2.00), 2.00) +
			cos(RADIANS(starting->latitude)) *
			cos(RADIANS(ending->latitude)) *
			pow(sin((RADIANS(ending->longitude) - RADIANS(starting->longitude)) / 2.00), 2.00)
		)
	);
}