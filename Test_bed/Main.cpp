#include "Location.h"
#include <iostream>
#include "Snake.h"
#include "Board.h"

int main()
{
	//comment here
	Board brd;
	Snake snek({ 2,2 });
	Location delta_loc = { 1,0 };
	std::cout << delta_loc.x << std::endl;
	std::cout << delta_loc.y << std::endl;
	const Location next = snek.GetNextHeadLocation(delta_loc);
	std::cout << next.x << std::endl;
	std::cout << next.y << std::endl;
	if (snek.IsInTileExceptEnd(next))
	{
		std::cout << "snek.IsInTileExceptEnd is true" << std::endl;
	}
	if (brd.IsInsideBoard(next))
	{
		std::cout << "brd.IsInsideBoard is true" << std::endl;
	}
}