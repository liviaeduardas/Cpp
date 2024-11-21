#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <random>
#include <thread>
#include <chrono>
#include <fstream> 
using namespace std;

struct Personagem
{
	string nome;
	string atributos;
	int protecao; // protege de ataque
	int dano; // dano no inimigo
	int forca;
	int agilidade;
	int vida = 20;
};

Personagem personagens;
vector<Personagem>p1;

void Atributos(string nome)
{
	if(nome == "GUERREIRO")
	{
		int resp;
		cout << "\n\n\t\tESCOLHA UM ATRIBUTO" << endl;
		cout << "\t ATRIBUTO\t\t\tDESCRICAO" << endl;
		cout << "\t-> 1 Espada Mestre\t\tEspecialista em combate, aumentando a chance de causar dano critico." << endl;
		cout << "\t-> 2 Escudo de Ferro\t\tAumenta a resistencia a ataques fisicos e melhora a defesa do grupo." << endl;
		cout << "\t-> 3 Soco Brutal\t\tCausa dano fisico com golpes corporais poderosos, ideal em combates sem armas." << endl;
		cout << "\tSua escolha: ";
		cin >> resp;
		while(resp != 1 && resp != 2 && resp != 3)
		{
		    cout << "\tResposta invalida! Escolha entre 1, 2 ou 3: ";
		    cin >> resp;
		}
		switch(resp)
		{
			case 1:
				personagens.atributos = "ESPADA MESTRE";
				personagens.dano = 5;
				personagens.protecao = 0;
				break;
			case 2:
				personagens.atributos = "ESCUDO DE FERRO";
				personagens.protecao = 2;
				break;
			case 3:
				personagens.atributos = "BRIGA BRUTAL";
				personagens.dano = 3;
				personagens.protecao = 0;
				break;
		}
		personagens.agilidade = 3;
		personagens.forca = 5;
	}
	else if(nome == "BRUXA")
	{
		int resp;
		cout << "\n\n\t\tESCOLHA UM ATRIBUTO" << endl;
		cout << "\t ATRIBUTO\t\t\tDESCRICAO" << endl;
		cout << "\t-> 1 Maldicaoo Sombria\t\tEnfraquece inimigos, reduzindo a forca" << endl;
		cout << "\t-> 2 Pocoes Arcanas\t\tPocoes que restauram os poderes dos aliados." << endl;
		cout << "\t-> 3 Feitico Posicao\t\tLanca feiticos que dificultando a reacao dos inimigos." << endl;
		cout << "\tSua escolha: ";
		cin >> resp;
		while(resp != 1 && resp != 2 && resp != 3)
		{
		    cout << "\tResposta invalida! Escolha entre 1, 2 ou 3: ";
		    cin >> resp;
		}
		switch(resp)
		{
			case 1:
				personagens.atributos = "MALDICAO SOMBRIA";
				personagens.dano = 3;
				personagens.protecao = 0;
				break;
			case 2:
				personagens.atributos = "POCOES ARCANAS";
				personagens.protecao = 3;
				break;
			case 3:
				personagens.atributos = "FEITICO POSICAO";
				personagens.dano = 2;
				personagens.protecao = 0;
				break;
		}
		personagens.agilidade = 2;
		personagens.forca = 3;
	}
	else if(nome == "DRAGAO")
	{
		int resp;
		cout << "\n\n\t\tESCOLHA UM ATRIBUTO" << endl;
		cout << "\t ATRIBUTO\t\t\tDESCRICAO" << endl;
		cout << "\t-> 1 Sopro de Fogo\t\tAtaque de longo alcance com chamas." << endl;
		cout << "\t-> 2 Voo Agil\t\t\tPermite esquivar-se de ataques." << endl;
		cout << "\t-> 3 Garras Afiadas\t\tAtaque de curto alcance com alta chance de dano fisico bruto." << endl;
		cout << "\tSua escolha: ";
		cin >> resp;
		while(resp != 1 && resp != 2 && resp != 3)
		{
		    cout << "\tResposta invalida! Escolha entre 1, 2 ou 3: ";
		    cin >> resp;
		}
		switch(resp)
		{
			case 1:
				personagens.atributos = "SOPRO DE FOGO";
				personagens.dano = 5;
				personagens.protecao = 0;
				break;
			case 2:
				personagens.atributos = "VOO AGIL";
				personagens.protecao = 3;
				break;
			case 3:
				personagens.atributos = "GARRAS AFIADAS";
				personagens.dano = 3;
				personagens.protecao = 0;	
				break;
		}
		personagens.agilidade = 2;
		personagens.forca = 5;
	}
	else if(nome == "GUARDIAO")
	{
		int resp;
		cout << "\n\n\t\tESCOLHA UM ATRIBUTO" << endl;
		cout << "\t ATRIBUTO\t\t\tDESCRICAO" << endl;
		cout << "\t-> 1 Invocacao de Espiritos\tConvoca almas ancestrais para almentar a protecao." << endl;
		cout << "\t-> 2 Protecao Eterea\t\tEscudo espiritual que absorve dano magico." << endl;
		cout << "\t-> 3 Absolvicao\t\t\tAbsorve o dano causado." << endl;
		cout << "\tSua escolha: ";
		cin >> resp;
		while(resp != 1 && resp != 2 && resp != 3)
		{
		    cout << "\tResposta invalida! Escolha entre 1, 2 ou 3: ";
		    cin >> resp;
		}
		switch(resp)
		{
			case 1:
				personagens.atributos = "INVOCACAO DE INSPIRITOS";
				personagens.protecao = 5;
				break;
			case 2:
				personagens.atributos = "PROTECAO ETEREA";
				personagens.protecao = 3;	
				break;
			case 3:
				personagens.atributos = "ABSOLVICAO";
				personagens.protecao = 4;
				break;
		}
		personagens.agilidade = 2;
		personagens.forca = 3;
	}
	else if(nome == "FADA")
	{
		int resp;
		cout << "\n\n\t\tESCOLHA UM ATRIBUTO" << endl;
		cout << "\t ATRIBUTO\t\t\tDESCRICAO" << endl;
		cout << "\t-> 1 Raio Fulminante\t\tLanca raios de energia que causam dano." << endl;
		cout << "\t-> 2 Ventania Selvagem\t\tConjura ventos poderosos para empurrar o oponente." << endl;
		cout << "\t-> 3 Escudo de Tempestade\tCria uma barreira de vento e eletricidade que reduz o dano recebido." << endl;
		cout << "\tSua escolha: ";
		cin >> resp;
		while(resp != 1 && resp != 2 && resp != 3)
		{
		    cout << "\tResposta invalida! Escolha entre 1, 2 ou 3: ";
		    cin >> resp;
		}
		switch(resp)
		{
			case 1:
				personagens.atributos = "RAIO FULMINANTE";
				personagens.dano = 3;
				personagens.protecao = 0;
				break;
			case 2:
				personagens.atributos = "VENTANIA SELVAGEM";
				personagens.dano = 2;
				personagens.protecao = 0;
				break;
			case 3:
				personagens.atributos = "ESCUDO DE TEMPESTAGEM";
				personagens.protecao = 3;
				break;
		}
		personagens.agilidade = 5;
		personagens.forca = 3;
	}
	p1.push_back(personagens);
}


void EscolhaPersonagem(int resp)
{
	string personagem;
	if(resp == 1)
		{
			cout << "\n   PERSONAGEM\tFORCA\tAGILIDADE\t\tDESCRICAO" << endl;
			cout << "    Guerreiro\t 5\t 3\t\t\t Um especialista em combate corpo a corpo, equipado com espadas e escudos." << endl;
			cout << "    Dragao\t 5\t 2\t\t\t Uma criatura imponente e mistica com o poder do fogo e do voo."<< endl;
			cout << "    Fada\t 3\t 5\t\t\t Uma fada antiga com o poder de causar tempestades. "<< endl;
			cout << "    Bruxa\t 3\t 2\t\t\t Sabia e poderosa, a bruxa manipula feiticos sombrios e pocoes. "<< endl;
			cout << "    Guardiao\t 3\t 5\t\t\t Uma entidade misteriosa conectada ao reino dos espiritos.  "<< endl;
			cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		}
	if(resp == 2)
	{
		cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		cout << "\n\t\tESCOLHA SEU PERSONAGEM 1" << endl;
		this_thread::sleep_for(std::chrono::seconds(1));
		cout << "\t-> Guerreiro" << endl;
		cout << "\t-> Dragao" << endl;
		cout << "\t-> Fada" << endl;
		cout << "\t-> Bruxa" << endl;
		cout << "\t-> Guardiao" << endl;
		cout << "\tPersonagem 1: ";
		cin >> personagem;
		transform(personagem.begin(), personagem.end(), personagem.begin(), ::toupper);
		while(personagem != "GUERREIRO" && personagem != "DRAGAO" && personagem != "FADA" && personagem != "BRUXA" && personagem != "GUARDIAO")
		{
		    cout << "\tResposta invalida!!" << endl;
		    cout << "\tEscolha entre Guerreiro, Guardiao, Dragao, Fada ou Bruxa: ";
		    cin >> personagem;
		    transform(personagem.begin(), personagem.end(), personagem.begin(), ::toupper);
		}
		personagens.nome = personagem;
		Atributos(personagens.nome);
		cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;	
		cout << "\n\n\t\tESCOLHA SEU PERSONAGEM 2" << endl;
		this_thread::sleep_for(std::chrono::seconds(1));
		cout << "\t-> Guerreiro" << endl;
		cout << "\t-> Dragao" << endl;
		cout << "\t-> Fada" << endl;
		cout << "\t-> Bruxa" << endl;
		cout << "\t-> Guardiao" << endl;
		cout << "\tPersonagem 2: ";
		cin >> personagem;
		transform(personagem.begin(), personagem.end(), personagem.begin(), ::toupper);
		while(personagem != "GUERREIRO" && personagem != "DRAGAO" && personagem != "FADA" && personagem != "BRUXA" && personagem != "GUARDIAO")
		{
		    cout << "\tResposta invalida!!" << endl;
		    cout << "\tEscolha entre Guerreiro, Guardiao, Dragao, Fada ou Bruxa: ";
		    cin >> personagem;
		    transform(personagem.begin(), personagem.end(), personagem.begin(), ::toupper);
		}
		personagens.nome = personagem;
		Atributos(personagens.nome);
		cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;	
	}
}

void DescricaoCenario(int cenario)
{
	if(cenario == 1)
	{
		cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t\tDECRICAO CENARIO: NIVEL " << cenario << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		
		cout << "\t\t--- FLORESTA DAS SOMBRAS ---" << endl << endl;
		cout << "\tUma floresta densa e misteriosa, iluminada apenas pelo brilho de cogumelos." << endl;
		cout << "\t\tUma criatura encantada os aguarda, mas o perigo ainda e controlavel." << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		cout << "\t-> INIMIGO: - GUARDIAO DAS RAIZES -" << endl;
		cout << "\t-> Um enorme ser feito de raizes e madeira encantada, protetor da floresta." << endl;
		cout << "\t-> HABILIDADE: Ataque com raizes, criacao de espinhos venenosos no chao." << endl;
		cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;	
	}
	else if (cenario == 2)
    {
    	cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t\tDECRICAO CENARIO: NIVEL " << cenario << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		
        cout << "\t\t--- RUINAS DO TEMPO ---" << endl << endl;
        cout << "\tAntigas construcoes de pedra tomadas por areia e poeira, onde o tempo parece distorcido." << endl;
        cout << "\tNas ruinas, guardioes magicos atacam qualquer um que se aproxime, e quebra-cabecas complexos protegem o caminho." << endl;
        cout << "\tAqui, so os verdadeiros aventureiros conseguem progredir." << endl << endl;
        this_thread::sleep_for(std::chrono::seconds(2));
        cout << "\t-> INIMIGO: - GUARDIAO DO TEMPO -" << endl;
        cout << "\t-> Um espectro envolto em luz azul que controla o fluxo do tempo nas ruinas." << endl;
        cout << "\t-> HABILIDADES: Manipulacao do tempo (atrasando ou acelerando os movimentos dos herois)," << endl;
        cout << "\t   ataques com luz espectral e criacao de ilusoes temporais." << endl;
        cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
    }
    else if (cenario == 3)
    {
    	cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\t--- ABISMO DAS ALMAS ---" << endl << endl;
        cout << "\tUma caverna profunda e desolada, onde os ecos das almas aprisionadas ainda ressoam." << endl;
        cout << "\tE o lugar mais sombrio e perigoso de Aurora Sombria, repleto de monstros brutais e um guardiao final temivel" << endl;
        cout << "\tEsse e o destino dos herois mais corajosos." << endl << endl;
        this_thread::sleep_for(std::chrono::seconds(2));
        cout << "\t-> INIMIGO: - DRAGAO FANTASMA -" << endl;
        cout << "\t-> A criatura mais poderosa, um dragao aprisionado entre o mundo dos vivos e dos mortos." << endl;
        cout << "\t-> HABILIDADES: Sopro congelante, invisibilidade parcial, voo, e um ataque" << endl;
        cout << "\t   de rajada espiritual que atravessa armaduras." << endl;
        cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
    }
    else if (cenario == 4)
    {
    	cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
    	cout << "\t\t--- RENASCIMENTO DE AURORA SOMBRIA ---" << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(1));
		cout << "\tApos a luta mais desafiadora de suas vidas, o Guardiao Supremo cai, revelando a peca final do artefato." << endl;
		cout << "\tQuando os fragmentos se unem, uma explosao de luz preenche o Santuario." << endl;
		cout << "\tAurora Sombria e restaurada, brilhando com uma energia vibrante e renovadora." << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		cout << "\tA escuridao que ameacava consumir o mundo comeca a recuar, substituida por esperanca e harmonia." << endl;
		cout << "\tOs guerreiros, agora herois lendarios, contemplam o horizonte iluminado." << endl;
		cout << "\tO mundo nao apenas sobreviveu... ele renasceu." << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(3));
		cout << "\tCom a missao concluida, cada guerreiro segue seu caminho, levando consigo" << endl;
		cout << "\tlembracas de coragem, amizade e sacrificio." << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		cout << "\tFIM DO JOGO - Obrigado por jogar!" << endl << endl;
		cout << "\t --> Todos os trunos foram salvos no documento ESTADO DO JOGO, para que voce possa acompanhar seu desempenho!" << endl;
		cout << endl<<"------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
	}
}

void Menu(int num)
{
	int resp;
	if(num == 1)
	{
		do
		{
			cout << "\n\t\tMENU DE OPCOES" << endl;
			cout << "\t1) Descricao dos personagens"<< endl;
			cout << "\t2) Escolher personagens"<< endl;
			cout << "\t3) Descricao do cenario 1" << endl;
			cout << "\t4) Jogar" << endl;
			cout << "\t5) Saida" << endl;
			cout << "\tEscolha uma opcao: ";
			cin >> resp;
			while(resp != 1 && resp != 2 && resp != 3 && resp != 4 && resp != 5)
			{
			    cout << "\tResposta invalida! Escolha entre 1, 2, 3 ou 4: ";
			    cin >> resp;
			}
			if (resp == 5)
				exit(0);
			if (resp == 4)
				break;
			if(resp == 1)
				EscolhaPersonagem(1);
			if(resp == 2)
				EscolhaPersonagem(2);
			if(resp == 3)
				DescricaoCenario(1);
		}while(resp == 1 || resp == 2 || resp == 3);
	}
	else if(num == 2)
	{
		do
		{
			cout << "\n\t\tMENU DE OPCOES" << endl;
			cout << "\t1) Descricao dos personagens"<< endl;
			cout << "\t2) Mudar personagens"<< endl;
			cout << "\t3) Descricao do cenario 2" << endl;
			cout << "\t4) Jogar" << endl;
			cout << "\t5) Saida" << endl;
			cout << "\tEscolha uma opcao: ";
			cin >> resp;
			while(resp != 1 && resp != 2 && resp != 3 && resp != 4 && resp != 5)
			{
			    cout << "\tResposta invalida! Escolha entre 1, 2, 3 ou 4: ";
			    cin >> resp;
			}
			if (resp == 5)
				exit(0);
			if (resp == 4)
				break;
			if(resp == 1)
				EscolhaPersonagem(1);
			if(resp == 2)
			{
				p1.clear();
				EscolhaPersonagem(2);
			}
			if(resp == 3)
				DescricaoCenario(2);
		}while(resp == 1 || resp == 2 || resp == 3);
	}
	else if(num == 3)
	{
		do
		{
			cout << "\n\t\tMENU DE OPCOES" << endl;
			cout << "\t1) Descricao dos personagens"<< endl;
			cout << "\t2) Mudar personagens"<< endl;
			cout << "\t3) Descricao do cenario 3" << endl;
			cout << "\t4) Jogar" << endl;
			cout << "\t5) Saida" << endl;
			cout << "\tEscolha uma opcao: ";
			cin >> resp;
			while(resp != 1 && resp != 2 && resp != 3 && resp != 4 && resp != 5)
			{
			    cout << "\tResposta invalida! Escolha entre 1, 2, 3 ou 4: ";
			    cin >> resp;
			}
			if (resp == 5)
				exit(0);
			if (resp == 4)
				break;
			if(resp == 1)
				EscolhaPersonagem(1);
			if(resp == 2)
			{
				p1.clear();
				EscolhaPersonagem(2);
			}
			if(resp == 3)
				DescricaoCenario(3);
		}while(resp == 1 || resp == 2 || resp == 3);
	}
}

bool personagem_existe(const string& nome, const vector<Personagem>& personagens) 
{
    for (const Personagem& p : personagens) 
    {
        if (p.nome == nome) 
        {
            return true; 
        }
    }
    return false; 
}

void salvarEstadoJogo(const vector<Personagem>& personagens, string vilao, int turno, int vida, int nivel) 
{
    ofstream arquivo("estado_jogo.txt", ios::app); // Abre em modo de adiÃ§Ã£o
    if (!arquivo.is_open()) 
	{
        cout << "Erro ao abrir o arquivo!" << std::endl;
        return;
    }
	
	arquivo << "---- NIVEL " << nivel << " ----\n";
    arquivo << "---- Turno " << turno << " ----\n";
    arquivo << "Personagens:\n";
    for (const auto& personagem : personagens) 
	{
        arquivo << "Nome: " << personagem.nome << ", Vida: " << personagem.vida << "\n";
    }
    arquivo << "VilÃ£o:\n";
    arquivo << "Nome: " << vilao<< ", Vida: " << vida << "\n";
    arquivo << "---------------------\n";
    arquivo.close();
}


int Jogo1(vector<Personagem>& personagens, string nomecenario, string vilao, string ataque, int forca, int agilidade, int vida, int dano, int nivel)
{
	random_device rd;
   	mt19937 gen(rd());
	uniform_int_distribution<int> distrib(1, 6);
	
	int flag = 1;
	int maior, dado, total;
	string nomeAgilidade, proximo, temp;
	
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
	cout << "\t\t\t--- " << nomecenario << " ---" << endl;
	this_thread::sleep_for(std::chrono::seconds(2));
	cout << "\t Prontos para duelar? ..." << endl;
	this_thread::sleep_for(std::chrono::seconds(2));
	cout << "\t O " << vilao << " os aguardam ..." << endl;
	this_thread::sleep_for(std::chrono::seconds(1));
	cout << "\t VIDA \t\tPERSONAGEM" << endl;
	cout << "\t " << vida << "\t\t" << vilao << endl;
	for(Personagem& i : p1)
	{
		cout << "\t " << i.vida << "\t\t" << i.nome << endl; 
	}
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

	cout << "\n\tO primeiro ataque sera... ";
	
	maior = agilidade;
	nomeAgilidade = vilao;
	for(const Personagem& i: p1)
	{
		if(i.agilidade > maior)
		{
			maior = i.agilidade;
			nomeAgilidade = i.nome;
		}
	}
	
	cout << nomeAgilidade << endl << endl;
	
	if(nomeAgilidade == vilao)
	{	
		int i = 1;
		for(int c = 0; c < 3; c++)
		{
			this_thread::sleep_for(std::chrono::seconds(2));
			cout << "\t\t\t--- " << i << " TURNO ---" << endl << endl;
			dado = distrib(gen);
			total = forca + 3 + dado;
			
			cout << "\t - - > Qual personagem recebera o ataque? [ ";
            for (const Personagem& i : p1) 
            {
                cout << i.nome << " ";
            }
            cout << "] ";
            cin >> temp;
            transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
           
           while(true)
           {
                if (personagem_existe(temp, p1)) 
                {
                    proximo =  temp;
                    break;
                } 
                else 
                {
                    cout << "\tResposta invalida!" << endl;
                    cout << "\t Escolha entre seus personagens: ";
                    cin >> temp;
                    transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
                } 
           }
            
			total = forca + dado + dano;
			this_thread::sleep_for(std::chrono::seconds(1));
			cout << endl << endl << "\t\tATAQUE"<< endl;
			cout << "\tNOME: " << vilao << endl;
			cout << "\tATAQUE: " << ataque << endl;
			cout << "\tFORCA\tDANO DO ATRIBUTO\tDADO\tPROTECAO\tTOTAL DE DANO\tVIDA RESTANTE" << endl;
			cout << "\t"<< forca << "\t\t" << dano << "\t\t" << dado << "\t0\t\t\t" << total << "\t\t" << vida<< endl;
		
			cout << endl << "\t\tPERSONAGENS:"<< endl;
			for(Personagem& i: p1)
			{
				if(proximo == i.nome)
				{
					i.vida -= total;
				}
				if(i.vida < 0)
					i.vida = 0;
				cout << "\t - NOME: " << i.nome <<" | VIDA: " << i.vida << endl;
			}
			
			if(vida <= 0)
			{
				this_thread::sleep_for(std::chrono::seconds(2));
				salvarEstadoJogo(p1, vilao, i, vida, nivel);
				cout << endl << endl << "\t --> PARABENS VOCE VENCEU O " << vilao << " !!!!!" << endl;
				return 2;
			}
			else
			{
				for(Personagem& c: p1)
				{
					if(c.vida <= 0)
					{
						this_thread::sleep_for(std::chrono::seconds(2));
						salvarEstadoJogo(p1, vilao, i, vida, nivel);
						cout << endl << endl << "\t --> GAME OVER !!!!!" << endl;
						return 1;
					}
				}
			}

			cout << "\n\t - - > Qual personagem fara o proximo ataque? [ ";
			for(Personagem i: p1)
			{
				cout << i.nome << " ";
			}
			cout << "] ";
			cin >> temp;
			transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
			 
			 while(true)
           {
                if (personagem_existe(temp, p1)) 
                {
                    proximo =  temp;
                    break;
                } 
                else 
                {
                    cout << "\tResposta invalida!" << endl;
                    cout << "\t Escolha entre seus personagens: ";
                    cin >> temp;
                    transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
                } 
           }
			
			dado = distrib(gen);
			for(Personagem& i : p1)
			{
				if(i.nome == proximo)
				{
					if(i.protecao > 0 && flag == 1)
					{
						cout << "Seu personagem tem um atributo de protecao com valor " << i.protecao << "! Deseja acrescentar essa vantagem a qual personagem? ";
						cin >> temp;
						maior = i.protecao;
						transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
						 while(true)
                       {
                            if (personagem_existe(temp, p1)) 
                            {
                                for(Personagem& i : p1)
        						{
        							if(i.nome ==  temp)
        								i.vida += maior;
        						}
                                break;
                            } 
                            else 
                            {
                                cout << "\tResposta invalida!" << endl;
                                cout << "\t Escolha entre seus personagens: ";
                                cin >> temp;
                                transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
                            } 
                       }
					   flag += 1;	
					}
					total = i.forca + i.dano + dado;
					this_thread::sleep_for(std::chrono::seconds(1));
					cout << "\n\n\tNOME: " << i.nome << endl;
					cout << "\tATAQUE: " << i.atributos << endl;
					cout << "\tFORCA\tDANO DO ATRIBUTO\tDADO\tPROTECAO\tTOTAL DE DANO\tVIDA RESTANTE" << endl;
					cout << "\t"<< i.forca << "\t\t" << i.dano << "\t\t" << dado << "\t" << i.protecao <<"\t\t\t" << total << "\t\t" << i.vida << endl;
					vida -= total;
					if(vida < 0)
						vida = 0;
				}
			}
			
			this_thread::sleep_for(std::chrono::seconds(2));
			cout << "\n\t\t\t FIM DO " << i << "TURNO" << endl;
			i += 1;
			cout << "\t - VILAO: " << vilao << " | VIDA: " << vida << endl;
			for(Personagem& i: p1)
			{
				if(i.vida < 0)
					i.vida = 0;
				cout << "\t - NOME: " << i.nome <<" | VIDA: " << i.vida << endl;
			}
			salvarEstadoJogo(p1, vilao, i, vida, nivel);
			if(vida <= 0)
			{
				this_thread::sleep_for(std::chrono::seconds(2));
				cout << endl << endl << "\t --> PARABENS VOCE VENCEU O " << vilao << " !!!!!" << endl;
				return 2;
			}
			else
			{
				for(Personagem& i: p1)
				{
					if(i.vida <= 0)
					{
						this_thread::sleep_for(std::chrono::seconds(2));
						cout << endl << endl << "\t --> GAME OVER !!!!!" << endl;
						return 1;
					}
				}
			}
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		}
	}	
	else
	{
		int j = 1;
		
		for(int c = 0; c < 3; c++)
		{
			dado = distrib(gen);
			
			this_thread::sleep_for(std::chrono::seconds(2));
			cout << "\t\t\t--- " << j << " TURNO ---" << endl;
			dado = distrib(gen);
				
			for(Personagem i : p1)
			{
				if(i.nome == nomeAgilidade && j == 1)
				{
					total = i.forca + i.dano + dado;
					this_thread::sleep_for(std::chrono::seconds(1));
					cout << "\n\n\tNOME: " << i.nome << endl;
					cout << "\tATAQUE: " << i.atributos << endl;
					cout << "\tFORCA\tDANO DO ATRIBUTO\tDADO\tPROTECAO\tTOTAL DE DANO\tVIDA RESTANTE" << endl;
					cout << "\t"<< i.forca << "\t\t" << i.dano << "\t\t" << dado << "\t" << i.protecao <<"\t\t\t" << total << "\t\t" << i.vida << endl;
					vida -= total;
				}
				else if(j > 1)
				{
					cout << "\n\t - - > Qual personagem fara o proximo ataque? [ ";
					for(Personagem i: p1)
					{
						cout << i.nome << " ";
					}
					cout << "] ";
					cin >> temp;
					transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
					 while(true)
                   {
                        if (personagem_existe(temp, p1)) 
                        {
                            proximo =  temp;
                            break;
                        } 
                        else 
                        {
                            cout << "\tResposta invalida!" << endl;
                            cout << "\t Escolha entre seus personagens: ";
                            cin >> temp;
                            transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
                        } 
                   }
					
					dado = distrib(gen);
					for(Personagem& i : p1)
					{
						if(i.nome == proximo)
						{
							if(i.protecao > 0 && flag == 1)
							{
								cout << "Seu personagem tem um atributo de protecao com valor " << i.protecao << "! Deseja acrescentar essa vantagem a qual personagem? ";
								cin >> temp;
								maior = i.protecao;
								transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
								 while(true)
                               {
                                    if (personagem_existe(temp, p1)) 
                                    {
                                        for(Personagem& i : p1)
                						{
                							if(i.nome ==  temp)
                								i.vida += maior;
                						}
                                        break;
                                    } 
                                    else 
                                    {
                                        cout << "\tResposta invalida!" << endl;
                                        cout << "\t Escolha entre seus personagens: ";
                                        cin >> temp;
                                        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
                                    } 
                               }
                               flag +=1;
							}
						}
					}
					total = i.forca + i.dano + dado;
					this_thread::sleep_for(std::chrono::seconds(1));
					cout << "\n\n\tNOME: " << i.nome << endl;
					cout << "\tATAQUE: " << i.atributos << endl;
					cout << "\tFORCA\tDANO DO ATRIBUTO\tDADO\tPROTECAO\tTOTAL DE DANO\tVIDA RESTANTE" << endl;
					cout << "\t"<< i.forca << "\t\t" << i.dano << "\t\t" << dado << "\t" << i.protecao <<"\t\t\t" << total << "\t\t" << i.vida << endl;
					vida -= total;
					break;
				}
			}
			
			cout << "\n\t\t VILAO" << endl;
			if(vida < 0)
				vida = 0;
			cout << "NOME: " << vilao << " | VIDA: " << vida << endl;
			
			if(vida <= 0)
			{
				this_thread::sleep_for(std::chrono::seconds(2));
				cout << endl << endl << "\t --> PARABENS VOCE VENCEU O " << vilao << " !!!!!" << endl;
				salvarEstadoJogo(p1, vilao, j, vida, nivel);
				return 2;
			}
			else
			{
				for(Personagem& i: p1)
				{
					if(i.vida <= 0)
					{
						this_thread::sleep_for(std::chrono::seconds(2));
						cout << endl << endl << "\t --> GAME OVER !!!!!" << endl;
						salvarEstadoJogo(p1, vilao, j, vida, nivel);
						return 1;
					}
				}
			}
			
			
			cout << "\t - - > Qual personagem recebera o ataque? [ ";
			for(Personagem& i: p1)
			{
				cout << i.nome << " ";
			}
			cout << "] ";
			cin >> temp;
			transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
			while(true)
            {
                if (personagem_existe(temp, p1)) 
                {
                    proximo =  temp;
                    break;
                } 
                else 
                {
                    cout << "\tResposta invalida!" << endl;
                    cout << "\t Escolha entre seus personagens: ";
                    cin >> temp;
                    transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
                } 
            }
			
			total = forca + dado + dano;	
			this_thread::sleep_for(std::chrono::seconds(1));
			cout << endl << endl << "\t\tATAQUE"<< endl;
			cout << "\tNOME: " << vilao << endl;
			cout << "\tATAQUE: " << ataque << endl;
			cout << "\tFORCA\tDANO DO ATRIBUTO\tDADO\tPROTECAO\tTOTAL DE DANO\tVIDA RESTANTE" << endl;
			cout << "\t"<< forca << "\t\t" << dano << "\t\t" << dado << "\t0\t\t\t" << total << "\t\t" << vida<< endl;
		
			cout << endl << "\t\tPERSONAGENS:"<< endl;
			for(Personagem& i: p1)
			{
				if(proximo == i.nome)
				{
					i.vida -= total;
				}
				if(i.vida < 0)
					i.vida = 0;
				cout << "\t - NOME: " << i.nome <<" | VIDA: " << i.vida << endl;
			}
			
			
			this_thread::sleep_for(std::chrono::seconds(2));
			cout << "\n\t\t\t FIM DO " << j << " TURNO" << endl;
			cout << "\t - NOME: " << vilao << " | VIDA: " << vida << endl;
			for(Personagem& i: p1)
			{
				if(i.vida < 0)
					i.vida = 0;
				cout << "\t - NOME: " << i.nome <<" | VIDA: " << i.vida << endl;
			}
			
			salvarEstadoJogo(p1, vilao, j, vida, nivel);
			
			j += 1;	
			
			if(vida <= 0)
			{
				this_thread::sleep_for(std::chrono::seconds(2));
				cout << endl << endl << "\t --> PARABENS VOCE VENCEU O " << vilao << " !!!!!" << endl;
				return 2;
			}
			else
			{
				for(Personagem& i: p1)
				{
					if(i.vida <= 0)
					{
						this_thread::sleep_for(std::chrono::seconds(2));
						cout << endl << endl << "\t --> GAME OVER !!!!!";
						return 1;
					}
				}
			}
			cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		}
		for(Personagem i: p1)
		{
			if(i.vida > 0 && vida > 0)
			{
				cout << "EMPATE!!" << endl;
				return 1;
			}
		}
	}
}

void NovosAtributos(int nivel)
{
	int resp;
	if(nivel == 1)
	{
		cout << "\t\t--- VITORIA NA FLORESTA DAS SOMBRAS ---" << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(1));
		cout << "\tApos uma batalha intensa, os guerreiros finalmente derrotam o Guardiao das Raizes." << endl;
		cout << "\tEnquanto as energias magicas do ser se dissipam, um brilho misterioso emerge do solo." << endl;
		cout << "\tUma das partes do antigo artefato agora esta em suas maos!" << endl << endl;
		
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		cout << "\t\t\t --- APRIMORE SEUS PERSONAGENS ---" << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(1));
		cout << "\t- - > 1 - Adicone 2 a vida de seus personagens!" << endl;
		cout << "\t- - > 2 - Adicione 1 a agilidade de seus personagens!" << endl;
		cout << "\tEscolha uma opcao: ";
		cin >> resp;
		while(resp != 1 && resp != 2)
		{
			cout << "Opcao nao valida!!! ESCOLHA ENTRE 1 OU 2: ";
			cin >> resp;
		}
		if(resp == 1)
		{
			cout << "\t - Otima escolha! Seus personagens agora tem:" << endl;
			for(Personagem& i: p1)
			{
				i.vida = 22;
				cout << "\tNOME: " << i.nome << " | VIDA: " << i.vida << endl;
			}
		}
		else if(resp == 2)
		{
			cout << "\t - Otima escolha! Seus personagens agora tem:" << endl;
			for(Personagem& i: p1)
			{
				i.agilidade += 1;
				i.vida = 20;
				cout << "\tNOME: " << i.nome << " | AGILIDADE: " << i.agilidade << endl;
			}
		}
	}
	else if(nivel == 2)
	{
		cout << "\t\t--- VITORIA NAS RUINAS DO TEMPO ---" << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(1));
		cout << "\tDepois de superar armadilhas engenhosas e derrotar o temivel Guardiao do Tempo," << endl;
		cout << "\tos guerreiros se veem diante de uma visao espetacular." << endl;
		cout << "\tUma luz azulada comeÃ§a a brilhar intensamente no centro das ruinas." << endl;
		cout << "\tA distorcao temporal lentamente se desfaz, revelando uma peca do antigo artefato!" << endl << endl;
		cout << "\tCom mais um fragmento em maos, o destino de Aurora Sombria esta um passo mais proximo de ser restaurado." << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(2));
		cout << "\t\t\t --- APRIMORE SEUS PERSONAGENS ---" << endl << endl;
		this_thread::sleep_for(std::chrono::seconds(1));
		cout << "\t- - > 1 - Adicone 5 a vida de seus personagens!" << endl;
		cout << "\t- - > 2 - Adicione 3 a agilidade de seus personagens!" << endl;
		cout << "\tEscolha uma opcao: ";
		cin >> resp;
		while(resp != 1 && resp != 2)
		{
			cout << "Opcao nao valida!!! ESCOLHA ENTRE 1 OU 2: ";
			cin >> resp;
		}
		if(resp == 1)
		{
			cout << "\t - Otima escolha! Seus personagens agora tem:" << endl;
			for(Personagem& i: p1)
			{
				i.vida = 25;
				cout << "\tNOME: " << i.nome << " | VIDA: " << i.vida << endl;
			}
		}
		else if(resp == 2)
		{
			cout << "\t - Otima escolha! Seus personagens agora tem:" << endl;
			for(Personagem& i: p1)
			{
				i.agilidade += 3;
				i.vida = 20;
				cout << "\tNOME: " << i.nome << " | AGILIDADE: " << i.agilidade << endl;
			}
		}
	}
}


int main() 
{
	int retorno;

	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
	cout << "\t\t\t\tAURORA SOMBRIA: A ASCENSAO DOS GUARDIOES" << endl << endl;
	cout << "\t\tEm um mundo mistico conhecido como Aurora Sombria, um antigo artefato foi dividido em 3 partes e espalhado em locais secretos," << endl;
	cout << "\t\tguardados por forcas das trevas. Agora, o destino desse mundo depende dos guerreiros destemidos que se aventurarem por esse " << endl;
	cout << "\t\tcaminho sombrio e repleto de desafios."<< endl << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

	this_thread::sleep_for(std::chrono::seconds(2));
	do{
		Menu(1);
	    system("cls");
		retorno = Jogo1(p1, "FLORESTA DAS SOMBRAS", "GUARDIAO DAS RAIZES", "Espinhos venenosos no chao", 5, 2, 25,3,1);
	    while(retorno == 2) 
	    {
	    	cout << "\t --> Todos os trunos foram salvos no documento ESTADO DO JOGO, para que voce possa acompanhar seu desempenho!" << endl;
	        this_thread::sleep_for(std::chrono::seconds(3));
	        system("cls");
	        NovosAtributos(1);
	        Menu(2);
	        system("cls");
	        retorno = Jogo1(p1, "RUINAS DO TEMPO", "GUARDIAO DO TEMPO", "Ataques com luz espectral e ilusoes temporais", 5, 3, 30, 4,2);
	        if(retorno == 1)
	        	break;
	        this_thread::sleep_for(std::chrono::seconds(2));
	        system("cls");
	        NovosAtributos(2);
	        Menu(3);
	        system("cls");
	        retorno = Jogo1(p1, "ABISMO DAS ALMAS", "DRAGAO FANTASMA", "Sorpo congelante", 5, 5, 35, 5,3);
	        if(retorno == 1)
	        	break;
	        this_thread::sleep_for(std::chrono::seconds(2));
	        system("cls");
	        DescricaoCenario(4);
	        break;
	    } 
	    if(retorno == 1) 
	    {
			cout << "\t --> Todos os trunos foram salvos no documento ESTADO DO JOGO, para que voce possa acompanhar seu desempenho!" << endl;
	        cout << "Voce perdeu. Retornando ao menu principal..." << endl;
	        this_thread::sleep_for(std::chrono::seconds(2));
	        system("cls");
	        p1.clear();
	    }
	}while(retorno == 1);


    return 0;
}			