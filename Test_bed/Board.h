#pragma once

#include"Location.h"

class Board
{
public:
	int GetGridWidth() const;
	int GetGridHeight() const;
	bool IsInsideBoard(const Location& loc) const;

private:
	static constexpr int dimension = 20;
	static constexpr int width = 25;
	static constexpr int height = 25;
};