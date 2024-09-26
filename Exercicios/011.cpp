/* Faça um programa que leia 2 valores e chame uma função que receba estas 2 variáveis e troque o seu conteúdo,
 ou seja, esta função é chamada passando duas variáveis A e B por exemplo e,
 após a execução da função, A conterão valor de B e B terá o valor de A. */
 
#include<iostream>
using namespace std;

void troca(float &y , float &x)
{
	float t = y;
	y = x;
	x = t;
}

int main ()
{ 
	float a, b;
	cout << "Informe um valor para A: ";
	cin >> a;
	cout << "Informe um valor para B: ";
	cin >> b;
	troca(a, b);
	cout << "Novos valores: A " << a << " B " << b << endl;
	
	return 0;
}
