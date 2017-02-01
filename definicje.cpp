#include<iostream>
#include "mofe.h"

Move::Move(double a , double b)
{
	x = a;
	y = b;
}

Move::~Move()
{	
}

void Move::showmove() const
{
	using std::cout;
	using std::endl;
	cout << "Biezaca wartosc x: " << x << " & y: " << y << " koniec.\n";
	
}

Move Move::add(const Move & m) const
{
	std::cout << "m.x i m.y: " << m.x <<", " << m.y << std::endl;
	std::cout << "this->x i this->y: " << this->x << ", " << this->y << std::endl;
	double temp_x = m.x + this->x;
	double temp_y = m.y + this->y;	
	Move temp_object(temp_x, temp_y);
	return temp_object;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
