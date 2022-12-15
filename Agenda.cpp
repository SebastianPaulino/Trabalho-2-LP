#include <iostream>
#include <string.h>
#include "Agenda.h"
#include "Contato.h"

using namespace std;

	Contato contatos[1000];
	int tam = 0;
	
	Contato busca(char* nome)
	{
		for(int i = 0; i <= tam; i++)
		{
			if(strcmp(contatos[i].getNome(),nome) == 0)
			{
				return contatos[i];
			}
		}
	}
	
	int altera(const char* nome, const char* telefone, const char* endereco, const char* relacao)
	{
		for(int i = 0; i <= tam; i++)
		{
			if(strcmp(contatos[i].getNome(), nome) == 0)
			{
				contatos[i].setNome(nome); contatos[i].setEnd(endereco);
				contatos[i].setTel(telefone); contatos[i].setRel(relacao);
				return 1;
			}
		}
		return 0;
	}
	
	int insere(char* nome, char* telefone, char* endereco, char* relacao)
	{
		if(strcmp(busca(nome).getNome(), nome) != 0)
		{
			contatos[tam].setNome(nome); contatos[tam].setEnd(endereco);
			contatos[tam].setTel(telefone); contatos[tam].setRel(relacao);
			tam++;
			return 1;
		}
		else
		{
			return altera(nome,telefone,endereco,relacao);
		}
	}
	
	int remove(char* nome)
	{
		for(int i = 0; i < tam; i++)
		{
			if(strcmp(contatos[i].getNome(),nome)== 0)
			{
				tam--;
				return 1;
			}
		}
		return 0;
	}
	
	int listar()
	{
		for(int i = 0; i <= tam; i++)
		{
			contatos[i].toString();
		}
	}
	
	int salvarecupera(char* nome, char* telefone, char* endereco, char* relacao, int x) // 0 = salvar 1 recupera
	{
		if(x == 0)
		{
			std::ofstream arquivo("contatos.txt");
		
			arquivo << nome << "," << telefone << "," << endereco << relacao << std::endl;
			
			arquivo.close();
		}
		else
		{
			std::ifstream arquivo("contatos.txt");
			
			std::string linha;
			std::getline(arquivo, linha);
			size_t pos = linha.find(',');
			contatos[tam].setNome() = linha.substr(0, pos);
			linha = linha.substr(pos + 1);
			pos = linha.find(',');
			contatos[tam].setTel() = linha.substr(0, pos);
			contatos[tam].setEnd() = linha.substr(pos + 1);
			contatos[tam].setRel() = linha.substr(pos + 2);
		
			arquivo.close();
		}
	}
	
	
	
	
	
	
