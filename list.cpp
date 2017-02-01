#include "list.h"
#include<iostream>

List::List()
{
	top = 0;
}

bool List::isempty() const
{
	return(top == 0);
}

bool List::isfull() const
{
	return(top == MAX);
}

bool List::push(const Item & item)
{
	if( !isfull() )
	{
		items[top++] = item;
		return 1;
	}
	else
		std::cout << "Lista jest pelna! (-_-)/  \n";
		return 0;
}

void List::visit(void (*pf) (Item &))
{
	for(int i =0; i < top; i++)
		(*pf)(items[i]);
	
}

void List::printIT()
{
	for(int i = 0; i < top; i++)
		std::cout << "Obiekt top nr. " << i << ", to: " << items[i] << std::endl;
}
