/*
	Particle Engine Module
	Copyright (c) 2014 Samuel "MrOverkill" Meyers
	Public Domain
*/

#ifndef UTIL_H
#define UTIL_H

#include <cstdlib>
#include <ctime>

namespace trillek
{

namespace util
{

class Util
{
	public:
		static void seed();
		static float randFloat(float min, float max);
		static int randInt(int min, int max);
};

}

}

#endif
