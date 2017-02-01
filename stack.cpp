// stack.cpp
#include "stack.h"
#include<iostream>
Stack::Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Iteam & item)
{
	if (top < MAX)
	{
		total_payment += item.payment;
		items[top++]= item; 
		//top++;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Iteam & item)
{
	if (top > 0)
	{
		
		//--top;
		std::cout << "Sciagnalem: " << item.payment << std::endl;
		item = items[--top];
		total_payment -= item.payment;
		std::cout << "Total payment: " << total_payment << std::endl;
		return true;
	}
	else
		return false;
}
