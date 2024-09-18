/* EXERCÍCIO 10
Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
a. Horário: composto de hora, minutos e segundos.
b. Data: composto de dia, mês e ano.
c. Compromisso: composto de uma data, horário e texto que descreve o compromisso.*/

#include<iostream>
#include<string>
using namespace std;

struct Horario
{
	int hora, minuto, segundo;
};

struct Data
{
	int dia, ano;
	string mes;
};

struct Compromisso
{
	int hora, minuto, segundo, dia, ano;
	string compromisso, mes;
};

int main()
{
	Horario hora;
	cout << "--- Cadastro da Agenda ---" << endl;
	cout << "HORA: ";
	cin >> hora.hora;
	cout << "MINUTO: ";
	cin >> hora.minuto;
	cout << "SEGUNDOS: ";
	cin >> hora.segundo;
	
	Data data;
	cout << "DIA: ";
	cin >> data.dia;
	cout << "MES: ";
	cin >> data.mes;
	cout << "ANO: ";
	cin >> data.ano;
	
	Compromisso compromisso;
	compromisso.ano = data.ano;
	compromisso.dia = data.dia;
	compromisso.mes = data.mes;
	compromisso.hora = hora.hora;
	compromisso.minuto = hora.minuto;
	compromisso.segundo =  hora.segundo;
	cout << "COMPROMISSO: ";
	cin.ignore();
	getline(cin, compromisso.compromisso);
	
	cout << endl << "--- AGENDA ---" << endl;
	cout << " - DATA: " << compromisso.dia << " / " << compromisso.mes << " / " << compromisso.ano << endl;
	cout << " - HORARIO: " << compromisso.hora << ":" << compromisso.minuto << ":" << compromisso.segundo << endl;
	cout << " - COMPROMISSO: " << compromisso.compromisso << endl;
	
	return 0;
}