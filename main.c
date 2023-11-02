#include "libminhaversine.h"
#include <stdio.h>

int main()
{
	place montreal = { 45.503748351307685, -73.56700185471236 };
	place los_angeles = { 34.05190411965307, -118.24286791473439 };
	double result = distances(&montreal, &los_angeles);

	if (result == ERROR)
	{
		printf("result error\n");
		return ERROR;
	}

	printf("distance: %.2f km\n", result);

	return 0;
}