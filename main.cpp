#include <iostream>
#include "mofe.h"
using namespace std;

int main() 
{
	Move kaska;
	kaska.showmove();
	kaska = Move(2,3);
	kaska.showmove();
	kaska.reset();	
	kaska.showmove();
	kaska = Move(20,30);
	Move kaska_01(100,200);
	Move ciekawe;
	ciekawe = kaska.add(kaska_01);
	ciekawe.showmove();	
	
	return 0;
}
