#ifndef TERRENO_H_
#define TERRENO_H_
#include <string>
#include "imovel.h"
#include <stdlib.h>

class Terreno:public Imovel{
	double area;
public:
	Terreno(std::string l, std::string b, int n ,std::string cid,std::string cp, double ar);

	std::string getDescricao();
};

#endif
