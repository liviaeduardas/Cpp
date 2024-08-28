// EXEMPLO 3 PROTÓTIPO FUNÇÃO

#include<iostream>
using namespace std;

int max(int x, int y);

int main()
{
	int a = 10, b = 20;
	
	int maior = max(a, b);
	cout << "Maior: " << maior;
	
	return 0;
}

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;		
}