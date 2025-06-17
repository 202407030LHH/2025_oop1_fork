#include "Random.h"

#include <time.h>
#include <stdlib.h>

Random::Random()
{
	srand(time(NULL));
}

int Random::getRandom(int scope)
{
	return rand() % scope;
}
