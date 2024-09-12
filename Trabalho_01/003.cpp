/* EXERCÍCIO 3
 Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo,
 ou seja, esta função é chamada passando duas variáveis A e B por exemplo e,
 após a execução da função, A conterão valor de B e B terá o valor de A. */
 
 #include <iostream>
 using namespace std;
 
 void Troca(int &a, int &b)
 {
 	int novo;
	novo = b;
 	b = a;
 	a = novo;
 }
 
 int main ()
 {
 	int a = 10;
 	int b = 21;
 	cout << "Valores Iniciais: a = " << a << " b = " << b << endl;
 	Troca(a, b);
 	cout << endl << "Novos valores: a = " << a << " b = " << b;
 	return 0;
 }