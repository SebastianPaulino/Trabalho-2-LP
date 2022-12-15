#include "Contato.h"
#include <iostream>
#include <string>

using namespace std;


	char nome[50];
	char telefone[10];
	char endereco[20];
	char relacao[15];
	
	char *toString()
	{
		printf("%s\n%s\n%s\n%s\n", &nome, &telefone, &endereco, &relacao);
	}
	
	char *getNome()
	{
		return nome;
	}
	char *getTel()
	{
		return telefone;
	}
	char *getEnd()
	{
		return endereco;
	}
	char *getRel()
	{
		return relacao;
	}
	void setNome(char* nome)
	{
		strcpy(nome,nome);
	}
	void setTel(char* tel)
	{
		strcpy(telefone,tel);
	}
	void setEnd(char* end)
	{
		strcpy(endereco,end);
	}
	void setRel(char* Rel)
	{
		strcpy(relacao,Rel);
	}		

