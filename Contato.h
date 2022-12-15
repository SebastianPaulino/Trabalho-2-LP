#ifndef CONTATO_H
#define CONTATO_H
#include <iostream>
#include <string.h>

using namespace std;

class Contato
{
	public:
		Contato(const char*nome,const char*telefone,const char*endereco,const char*relacao){}
		
		char* toString();
		char* getNome();
		char* getTel();
		char* getEnd();
		char* getRel();
		void setNome(char* nome);
		void setTel(char* tel);
		void setEnd(char* end);
		void setRel(char* Rel);
};

#endif
