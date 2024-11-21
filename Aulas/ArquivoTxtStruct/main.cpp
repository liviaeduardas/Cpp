#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Pessoa {
    int id;
    char nome[50];
    char sobrenome[50];
};

int main() {

    ofstream arquivoTxt("pessoa.txt");
    if (!arquivoTxt) {
        cout << "Falha ao abrir o arquivo para escrita.\n";
        return 1;
    }

    Pessoa p1 = {1, "Lívia", "Silveira"};
    arquivoTxt << p1.id << '\n' << p1.nome << '\n' << p1.sobrenome << '\n';
    cout << "A pessoa foi salva com sucesso!\n";
    arquivoTxt.close();

    // Lendo do arquivo de texto
    ifstream arquivoTxtRead("pessoa.txt");
    if (!arquivoTxtRead) {
        cout << "Falha ao abrir o arquivo para leitura.\n";
        return 1;
    }

    Pessoa p2;
    arquivoTxtRead >> p2.id;
    arquivoTxtRead.ignore(); // Ignora o caractere de nova linha após o ID
    arquivoTxtRead.getline(p2.nome, 50);
    arquivoTxtRead.getline(p2.sobrenome, 50);

    cout << "\nNome: " << p2.nome << " " << p2.sobrenome << ", ID: " << p2.id << '\n';
    arquivoTxtRead.close();

    return 0;
}