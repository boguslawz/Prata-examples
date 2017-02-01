static const int SIZ = 19;
class Plorg
{
	private:
		char imie[SIZ];
		int sytosc;
	public:	
		Plorg();
		Plorg(char t_imie[SIZ] , int t_sytosc);
		~Plorg();
		void mow();
};
