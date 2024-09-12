/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
 Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros.
 Imprima os valores das variáveis antes e após a modificação.*/
 
 #include <iostream>
 using namespace std;
 
 int main()
 {
 	int inteiro = 8;
 	float real = 9.5;
 	char n = 'l';
 	
 	int* ponteiro_int = &inteiro;
 	float* ponteiro_float = &real;
 	char* ponteiro_char = &n;
 	
 	cout << "VALORES INICIAIS:" << endl;
 	cout << "Inteiro: " << *ponteiro_int << " | " << "Real: " << *ponteiro_float << " | " << "Char: " << *ponteiro_char << endl;
 	
 	*ponteiro_int = 10;
 	*ponteiro_float = 89.67;
 	*ponteiro_char = 'R';
 	
 	cout << endl << "NOVOS VALORES:" << endl;
 	cout << "Inteiro: " << inteiro << " | " << "Real: " << real << " | " << "Char: " << n << endl;
 	return 0;
 }