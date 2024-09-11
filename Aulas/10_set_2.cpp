// Exemplo 3 FUNÇÕES POR REFERÊNCIA e PONTEIROS

#include<iostream>
using namespace std;

void Troca(int &, int &);

int main()
{
	int x, y;
	
	//Pode usar printf para ler dois valores ao mesmo tempo
	printf("Entre x e y: ");
	scanf("%d%d", &x, &y);
	
	cout << endl << "ANTES DA TROCA: x = " << x << " | y = " << y;
	
	//usando valores na função
	Troca(x, y);
	
	printf("\n TROCA: x = %d | y = %d", x, y);
	
		
	return 0;
}

void Troca(int &a, int &b)
{
	int temp;
	//armazena b em uma variável depois troca os valores de a e b
	temp = b;
	b = a;
	a = temp;
}