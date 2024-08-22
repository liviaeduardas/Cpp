/*Crie uma struct para representar um aluno, incluindo nome, matrícula,
 notas de diversas disciplinas e calcule a média final e mostre o resultado.
 APROVADO = media maior 7
 RECUPERAÇÃO = media menor 7 e maior 5
 REPROVADO = media menor 5*/
 
 #include <iostream>
 using namespace std;
 
 struct Aluno
 {
 	string nome;
	float notas[3];
	int	matricula;
 };
 
 float media;
 float soma = 0;
 
 int main()
 {
 	Aluno p1;
 	cout << "CADASTRO DE NOTAS:" << endl;
 	cout << "NOME DO ALUNO(A): ";
 	cin >> p1.nome;
 	cout << "NUMERO DA MATRICULA: ";
 	cin >> p1.matricula;
 	
 	for(int i = 0; i < 3; i++)
 	{
 		cout << "NOTA " << i + 1 << ": ";
 		cin >> p1.notas[i];
 		soma += p1.notas[i];
	}
	
	media = soma / 3;
	
	cout << "MEDIA: " << media;
	
	if(media >= 7)
		cout << endl << "STATUS APROVADO(A) :)";
	else if (media < 5)
		cout << endl << "STATUS REPROVADO(A)!";
	else
		cout << endl << "STATUS RECUPERACAO!";	
 	
 	return 0;
 }