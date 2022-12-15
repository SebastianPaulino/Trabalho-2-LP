#ifndef AGENDA_H
#define AGENDA_H
#include "Contato.h"
#include <list>

using namespace std;

class Agenda
{
	
	public:
		
		Contato busca(char* nome);
		
		int altera(const char* nome, const char* telefone, const char* endereco, const char* relacao);
		int insere(char* nome, char* telefone, char* endereco, char* relacao);
		int remove(char* nome);
		int listar();
		int salvarecupera(char* nome, char* telefone, char* endereco, char* relacao, int x);
};

#endif
