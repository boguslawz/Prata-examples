#ifndef LIST_H_
#define STACK_H_

typedef int Item;

class List
{	
	private:
		enum {MAX = 10};
		Item items[MAX];
		int top;
	public:
		List();
		bool isempty() const;
		bool isfull() const;
		bool push(const Item & item);
		void visit(void (*pf) (Item &));
		void printIT();	
};

#endif
