#include<iostream>
#include "plorg.h"
#include<cstring>

Plorg::Plorg()
{
	char t_imie[SIZ] = "Plorga";
	strcpy(imie, t_imie);
	sytosc = 50;
}

Plorg::Plorg(char t_imie[SIZ] , int t_sytosc)
{
	strcpy(imie, t_imie);
	sytosc = t_sytosc;
}

Plorg::~Plorg()
{
}

void Plorg::mow()
{
	std::cout<< "Imie: " << imie << ", i sytosc: " << sytosc << std::endl;
}
