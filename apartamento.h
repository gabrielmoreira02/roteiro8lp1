#ifndef APARTAMENTO_H_
#define APARTAMENTO_H_
#include <string>
#include "imovel.h"
#include <stdlib.h>

class Apartamento:public Imovel{
	std::string posicao;
	int numeroDeVagasNaGaragem;
	double valorDoCondominio;
public:
	Apartamento(std::string l, std::string b, int n ,std::string cid,std::string cp, std::string p, int ndvg,double vdc);

	virtual std::string getDescricao();
};

#endif
