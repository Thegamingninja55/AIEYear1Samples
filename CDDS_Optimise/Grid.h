#pragma once

class Unit
{
	friend class Grid;

public:
	Unit(Grid* grid, double x, double y)
		: grid_(grid),
		x_(x),
		y_(y)
	{}

	void move(double x, double y);

private:
	double x_, y_;
	Grid* grid_;
};

class Grid
{

};