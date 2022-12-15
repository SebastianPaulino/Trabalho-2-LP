#include "Principal.h"
#include <string.h>


int main() {
    Agenda agenda;

    // Insere os contatos na agenda
    agenda.insere("Fulano","99999999","Rua A","UFF");
    agenda.insere("Ciclano","88888888","Rua B","Cederj");
    agenda.insere("Beltrano","88889999","Rua C","Infância");

    // Lista os contatos da agenda
    agenda.listar();

    return 0;
}
	

