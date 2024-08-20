#include <iostream>
using namespace std;

struct Jogador
{
	int nivel;
	float saude;
	float dano;
	float resistencia;
	
	void sofrer_dano(float dano)
	{
		saude -= dano;
	}
	
	int get_saude()
	{
		if(saude <= 0)
			cout << "M O R R E U !" << endl;
		else
			cout << "S O B R E V I V E U ! !" << endl;
		cout << "Saude: ";
		return saude;
	}
};

int main()
{
	//inicializando valores da struct
	Jogador p1 = {11, 100.f, 10.f, 50.f};
	cout << p1.get_saude() << endl;
	cout << "\nInforme o dano: ";
	cin >> p1.dano;
	p1.sofrer_dano(p1.dano);
	cout << "\n" << p1.get_saude() << endl;
	
	return 0;
}
