#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

#include "casa.h"
#include "terreno.h"
#include "apartamento.h"


int main(){

	Imovel *i[6];
	i[0] = new Casa("Zona Praias", "Cabo Branco", 3320,"Joao Pessoa","58045-010",2,4,300,180);
	cout<< i[0]->getDescricao()<<endl<<endl;
	i[1] = new Casa("Zona Sul", "Bancarios", 180,"Joao Pessoa","58432-015",1,3,250,140);
	cout<< i[1]->getDescricao()<<endl<<endl;


	i[2] = new Terreno("Zona Norte", "Intermares", 243,"Cabedelo","56749-014",433);
	cout<< i[2]->getDescricao() <<endl <<endl;
	i[3] = new Terreno("Centro", "Tambia", 321,"Joao Pessoa","58023-010",249);
	cout<< i[3]->getDescricao() <<endl <<endl;

	i[4] = new Apartamento("Praias", "Tambau", 132,"Joao Pessoa","58044-010","Apt 401",3,400);
	cout<< i[4]->getDescricao() <<endl<<endl;
	i[5] = new Apartamento("Zona Norte", "Espinheiro", 3123,"Recife","59032-045","Apt 2001",5,800);
	cout<< i[5]->getDescricao()<<endl<<endl;
}

