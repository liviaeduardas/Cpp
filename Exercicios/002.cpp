/*Crie um programa em C++ que permita cadastrar os dados de 3 produtos, como nome e preço.
 Utilize uma struct para representar um produto e armazene os dados em um vetor de structs.
  Ao final, imprima os dados de todos os produtos cadastrados.*/
  
  #include <iostream>
  using namespace std;
  
  struct Cadastros
  {
  	string nome;
  	float preco;
  };
  
int main()
{ 
	Cadastros produtos[3];
	
	for(int i = 0; i < 3; i++)
	{
		cout << "     Produto " << i + 1 << endl;
		cout << "Nome: " ;
		cin >> produtos[i].nome;
		cout << "Preco: " ;
		cin >> produtos[i].preco;
		cout << "---------------------" << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << "PRODUTOS CADASTRADOS" << endl;
	for(int i = 0; i < 3; i++)
	{
		cout <<"--------------------" << endl;
		cout << "NOME: " << produtos[i].nome << endl;
		cout << "PRECO: R$" << produtos[i].preco << endl;
	}
	
	
	return 0;
}