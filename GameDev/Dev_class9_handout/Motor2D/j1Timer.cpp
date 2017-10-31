// ----------------------------------------------------
// j1Timer.cpp
// Fast timer with milisecons precision
// ----------------------------------------------------

#include "j1Timer.h"
#include "SDL\include\SDL_timer.h"

// ---------------------------------------------
j1Timer::j1Timer()
{
	Start();
}

// ---------------------------------------------
void j1Timer::Start()
{
	// TODO 1: Fill Start(), Read(), ReadSec() methods
	// they are simple, one line each!
	started_at = SDL_GetTicks();	
}

// ---------------------------------------------
uint32 j1Timer::Read() const
{
	uint32 current_time = SDL_GetTicks() - started_at;
	return current_time;
}

// ---------------------------------------------
float j1Timer::ReadSec() const
{
	uint32 current_time = SDL_GetTicks() - started_at;
	return current_time /= 1000;
}