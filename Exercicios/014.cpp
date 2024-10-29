 /*
   * EXERCÍCIO:RESOLVIDO
   * Modifique o código abaixo para que o procedimento imprime também exiba a média e o status (APR ou REP).
   * A Média deve ser calculada conforme as norma da Unaerp. Estudante aprovado se média >=5 e % de faltas <= 25.
   * PROIBIDO MODIFICAR A STRUCT
   * Aplicar algoritmo de ordenação (ordenar por RA)
   * Aplicar o algoritmos de busca Binária. Exibir todos os dados do estudante caso encontrado ou mensagem adequada
   * caso contrário
   * */


  #include <stdio.h>
  #include <stdlib.h> // pra usar a função rand e srand
  #include <time.h> // pegar a hora/minutos/segundos/milisegundos atuais
  #define TAMANHO 40 // tamanho da sala

  typedef struct { //struct
      int RA, faltas;
      float parcial, exame;
  } Alunos;

  void preenche (Alunos a[]) {
      srand(time(NULL)); // liga o randomizador ao relógio do computador
      int ra=0;
      printf ("preenchendo\n");
      for (int i = 0 ; i < TAMANHO ; i++) {
         while ( (ra  < 10000) )
              ra  = (rand() % 40000); // apenas para manter em 5 digitos da unaerp
         a[i].RA=ra;
         a[i].parcial = ((rand() % 100) / 10);
         a[i].exame = ((rand() % 100) / 10);
         a[i].faltas =  rand() % 30;
         ra=0;
      }
  }

  void imprime (Alunos a[]) {
      printf ("RA\t\t%%FALTAS\t\tPARCIAL\t\tEXAME\t\MEDIA\t\tSTATUS\n");
      for (int i =0 ; i < TAMANHO ; i++)
      {
          printf ("%d\t\t%d\t\t%.1f\t\t%.1f\t",
              a[i].RA,a[i].faltas,a[i].parcial, a[i].exame );
        // Implementando a MÉDIA e o STATUS
          float media = (a[i].parcial)*0.4 + (a[i].exame)*0.6;
          printf("%.2f\t\t", media);
          if(media >= 5 && a[i].faltas <= 25)
          	printf("APROVADO(A)\n");
          else
        	printf("REPROVADO(A)\n");
	  }
  }

// Ordenando os alunos por seus RA
void ordena(Alunos a[])
{
	for(int passo = 0; passo < 40 - 1; passo++)
	{
		for(int i = 0; i < 40 - passo - 1; i++)
		{
			if(a[i].RA > a[i+1].RA)
			{
				// Trocando não só o RA, mas todas as informações correspondentes ao RA
				int temp = a[i].RA;
				int temp1 = a[i].faltas;
				float temp2 = a[i].parcial;
				float temp3 = a[i].exame;
				a[i].RA = a[i+1].RA;
				a[i+1].RA= temp;
				a[i].faltas = a[i+1].faltas;
				a[i+1].faltas= temp1;
				a[i].parcial = a[i+1].parcial;
				a[i+1].parcial= temp2;
				a[i].exame = a[i+1].exame;
				a[i+1].exame= temp3;
			}
		}
	}
}

//Bucando aluno por RA
int buscaBinaria(Alunos a[], int chave) {
    int baixo=0,alto =TAMANHO -1;
    while (baixo <= alto) {
        int meio = baixo + (alto - baixo) / 2;

        if (a[meio].RA == chave)
            return meio;

        if (a[meio].RA < chave)
            baixo = meio + 1;

        else
            alto = meio - 1;
    }
    return -1;
}

  int main(void)
  {
    Alunos lista[TAMANHO];
    preenche(lista); 
    ordena(lista);
    imprime(lista);
    int busca, achou;
    printf("------------------------- BUSCA POR RA -------------------------\n");
	printf("Informe um codigo: ");
    scanf ("%d", &busca);
	achou = buscaBinaria(lista,busca);
    if (achou == -1 )
        printf ("\nEstudante nao encontrado");
    else {
        float media = (lista[achou].parcial)*.4 + (lista[achou].exame)*.6;
        printf ("\nRA\t\t%%FALTAS\t\tPARCIAL\t\tEXAME\t\tMEDIA\t\tSTATUS\n");
        printf ("%d\t\t%d\t\t%.1f\t\t%.1f\t\t%.1f\t\t",
                    lista[achou].RA,lista[achou].faltas,lista[achou].parcial, lista[achou].exame,media);
        if ( (media<5.0) || (lista[achou].faltas>25) )
            printf ("REP\n");
            else
            printf ("APR\n");
	}
  }