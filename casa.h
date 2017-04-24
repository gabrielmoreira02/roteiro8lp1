#ifndef CASA_H_
#define CASA_H_
#include <string>
#include "imovel.h"
#include <stdlib.h>

class Casa:public Imovel{
	int numeroDePavimentos;
	int quantidadeDeQuartos;
	double areaDoTerreno;
	double areaConstruida;
public:
	Casa(std::string l, std::string b, int n ,std::string cid,std::string cp, int np, int qq,double at, double ac);

	std::string getDescricao();
};

#endif
