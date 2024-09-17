/* EXERCÍCIO 08
 Escreva uma função que aceita como parâmetro um array de inteiros com N valores,
 e determina o maior elemento do array e o número de vezes que este elemento ocorreu no array.*/

#include <iostream>
#include <vector>

using namespace std;

void maior_elemento(vector<int> vetor, int tamanho)
{
	int maior = vetor[0];
	int cont = 0;

	for(int i = 0; i < tamanho; i++)
	{
		if(vetor[i] > maior)
			maior = vetor[i];
	}
	
	for(int i : vetor)
	{
		if(i == maior)
			cont += 1;
	}
	
	cout << endl << "Maior valor do vetor = " << maior << endl;
	cout << "O valor " << maior << " apareceu " << cont << " vezes no vetor.";
}

int main() 
{
    vector<int> vec; 
    int n, tamanho;
	char resp;

   cout << "--- CARREGANDO VETOR ---" << endl;
	do
	{
		cout << "Informe um valor: ";
		cin >> n;
		vec.push_back(n);
		cout << "Deseja continuar? [s|n] ";
		cin >> resp;
		if (resp != 'n' & resp != 's')
		{
			cout << "RESPOSTA INVALIDA" << endl;
			cout << "Deseja continuar? [s|n] ";
			cin >> resp;
		}		
	}while(resp != 'n');

	tamanho = vec.size();
	maior_elemento(vec, tamanho);
	
    return 0;
}