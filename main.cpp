#include <iostream>
#include <cctype>
#include<cstring>
#include "stack.h"

int main() 
{
	const int MAXI = 35;
	Stack pos;
	char _fullname[MAXI];
	unsigned _payment;
	
	using namespace std;
	char litera;
	Iteam Struktura;	
	cout << "Wprowadz: 'N' nowa pozycja, 'U' usun pozycje, 'K' uciekaj \n";

	while( cin >> litera && (toupper(litera) != 'K'))
	{
		while(cin.get() != '\n')
			continue;
		while(!isalpha(litera))
		{
			cout << '\a';
			continue;
		}
		switch(litera)
		{
			case 'N':
			case 'n':
				{
					if ( !pos.isfull() )
					{
						cout << "Fullname: ";
						cin >> _fullname;
						cout << "Payment: ";
						cin >> _payment;
						//Iteam Struktura;
						strcpy(Struktura.fullname, _fullname);
						Struktura.payment = _payment;
						pos.push(Struktura);
					}
					else
						cout << "Stos jest pelny!.\n";
				break;
				}
			case 'U' :
			case 'u' :
				{
					if(!pos.isempty())
					{
						pos.pop(Struktura);
						cout << "Aktualnie na stosie-> fullname: " << Struktura.fullname << ", payment: " 
							<< Struktura.payment << endl;
					}
					else
						cout << "Stos jest pusty";
				break;
				}
				
			
		}
		
	cout << "Wprowadz: 'N' nowa pozycja, 'U' usun pozycje, 'K' uciekaj \n";	
	}
	
	cout << "\n(-_-) I see you\n";
	
	return 0;
}
