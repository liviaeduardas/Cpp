#include <iostream>
#include <string>

using namespace std;

struct Estudante
{
    string nome;
    int notas[4];
};

int main()
{
    Estudante estudante1;
    
    estudante1.nome = "Raissa";
    estudante1.notas[0] = 10;
    estudante1.notas[1] = 8;
    estudante1.notas[2] = 5;
    estudante1.notas[3] = 9;

    cout << "Nome:" << estudante1.nome << endl;
    cout << "Notas: ";
    for(int nota : estudante1.notas)
    {
        cout << nota << " ";
    }
    
    return 0;
}