#include <iostream>
#include<cstring>

class Person{
	private:
		static const int LIMIT = 256;
		std::string lname;
		char fname[LIMIT];
	public:
		Person() { lname = " "; fname[0] = '\0';}
		Person(const std::string & ln, const char * fn = "Hej ty");
		//ponizsze metody wysweiitlaja imie i nazwisko
		void Show() const;
		void FormalShow() const;
};

int main() {
	
	
	Person A("zolo", "andrzej");
	A.Show();
	Person B("kynia");
	B.Show();
	Person C = {};
	C.Show();
	
	return 0;
}

Person::Person(const std::string & ln, const char * fn )
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	std::cout << "nazwisko: " << lname << ", imie: " << fname << std::endl ;
}
