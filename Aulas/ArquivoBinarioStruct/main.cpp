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
    // Salvando no arquivo binário
    ofstream arquivoBin("pessoa.dat", ios::binary);
    if (!arquivoBin) {
        cout << "Falha ao abrir o arquivo para escrita.\n";
        return 1;
    }

    Pessoa p1 = {1, "Lívia", "Silveira"};
    
    arquivoBin.write(reinterpret_cast<const char*>(&p1), sizeof(Pessoa));
    if (arquivoBin.good()) {
        cout << "A pessoa foi salva com sucesso!\n";
    } else {
        cout << "Erro ao salvar a pessoa.\n";
    }
    arquivoBin.close();

    // Lendo do arquivo binário
    ifstream arquivoBinRead("pessoa.dat", ios::binary);
    if (!arquivoBinRead) {
        cout << "Falha ao abrir o arquivo para leitura.\n";
        return 1;
    }

    Pessoa p2;
    
    arquivoBinRead.read(reinterpret_cast<char*>(&p2), sizeof(Pessoa));
    if (arquivoBinRead.good()) {
        cout << "\nNome: " << p2.nome << " " << p2.sobrenome << ", ID: " << p2.id << '\n';
    } else {
        cout << "Erro ao ler a pessoa.\n";
    }
    arquivoBin.close();

    return 0;
}
