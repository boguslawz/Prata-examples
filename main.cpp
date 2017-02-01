#include <iostream>
#include "list.h"

inline void doubleIT(Item & x) { x = x*2;}

int main()
{
	using std::cout;
	using std::endl;
	List lis;
	
	for(int i = 0; i< 10; i++)
		{
			lis.push(i);
		}
	lis.printIT();
	lis.visit(doubleIT);
	lis.printIT();
	return 0;
}
