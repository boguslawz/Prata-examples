//Stephan Prata C++ source code example 11.2
//Requires main.cpp, vect.h, vector.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<fstream>
#include "vect.h"


int main() 
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout;
	fout.open("marsz.txt");
//	fout << "DDD";

	cout << "Podaj dystans do przejscia (k, zakonczyc): ";
	while ( cin >> target)
	{
		cout << "Podaj dlugosc kroku: ";
		if (!(cin >> dstep))
			break;
		
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fout << "Nr. "<< steps << " "<< result << endl;
		}
		cout << "Po " << steps << " krokach delikwent "
			"osiagnal polozenie:\n";
		cout << result << endl;
		fout << "Po " << steps << " krokach delikwent osiagnal polozenie: " 
		 	<< result << endl;
	
		result.polar_mode();

		fout << "czyli \n";
		fout << "(m,a) = "  <<  result ;	

		cout << " czyli \n" << result << endl;
		cout << "Srednia dlugosc kroku pozornego = "
			<< result.magval() / steps << endl;

		fout << "\nSredni krok: " << 	result.magval() / steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejscia (k aby zakonczyc): ";
	}
cout << "Koniec!\n";
fout.close();
cin.clear();
while(cin.get() != '\n')
	continue;
return 0;
	
	
	
	return 0;
}
