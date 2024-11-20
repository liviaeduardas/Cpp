#include <iostream>
#include<vector>
using namespace std;

struct Personagem
{
	string nome;
	string atributos[3];
};

void Menu()
{
	int resp;
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
	cout << "\t\tEm um mundo mistico conhecido como Aurora Sombria, um antigo artefato foi dividido em 3 partes e espalhado em locais secretos," << endl;
	cout << "\t\tguardados por forcas das trevas. Agora, o destino desse mundo depende dos guerreiros destemidos que se aventurarem por esse " << endl;
	cout << "\t\tcaminho sombrio e repleto de desafios."<< endl << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
	
	cout << "\t\tMENU DE OPCOES" << endl;
	while(resp != 1 && resp != 2)
	{
		cout << "\t1) Descricao dos personagens"<< endl;
		cout << "\t2) Escolher personagens"<< endl;
		cout << "\tEscolha uma opcao: ";
		cin >> resp;
	}
	if(resp == 1)
	{
		cout << "\n   PERSONAGEM\tFORCA\tAGILIDADE\tINTELIGENCIA\t\tDESCRICAO" << endl;
		cout << "    Guerreiro\t 5\t 3\t\t 2\t\t\t Um especialista em combate corpo a corpo, equipado com espadas e escudos." << endl;
		cout << "    Clerigo\t 1\t 3\t\t 5\t\t\t Um pacifista poderoso que utiliza magia de cura e protecao."<< endl;
		cout << "    Fada\t 3\t 5\t\t 2\t\t\t Uma fada antiga com o poder de causar tempestades. "<< endl;
		cout << "    Bruxa\t 3\t 2\t\t 5\t\t\t Sabia e poderosa, a bruxa manipula feiticos sombrios e pocoes. "<< endl;
		cout << "    Guardiao\t 3\t 5\t\t 5\t\t\t Uma entidade misteriosa conectada ao reino dos espiritos.  "<< endl;
	}
	
	
}


int main() 
{
	Menu();
	return 0;
}