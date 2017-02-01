// stack.h -- definicja klasy stosu (wg ADT)
#ifndef STACK_H_
#define STACK_H_
static double total_payment;
struct customer{
	char fullname[35];
	double payment;
};
typedef customer Iteam;

class Stack
{
	private:
		enum {MAX = 10};
		Iteam items[MAX];
		int top;
		double total_payment;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		//push() zwraca false, jesli stos jest juz pelen
		//(true w pozostalych przypadkach)
		bool push(const Iteam & item);
		bool pop(Iteam & iteam);	
};

#endif
