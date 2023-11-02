#pragma once

#ifdef _USE_LIBMINHAVERSINE_DEFINES

#define EARTH_RADIUS 6371.00
#define PI 3.14159265358979323846

#define RADIANS(degrees) (degrees * (PI / 180.00))
#define VALID_LATITUDE(lat) ((lat) >= -90.00 && (lat) <= 90.00)
#define VALID_LONGITUDE(lon) ((lon) >= -180.00 && (lon) <= 180.00)

#endif

#ifndef ERROR
#define ERROR -1
#endif

#include <math.h>

typedef struct
{
	double latitude;
	double longitude;
} place;

double distances(place* starting, place* ending);