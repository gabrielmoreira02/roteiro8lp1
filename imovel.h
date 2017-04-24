#ifndef IMOVEL_H_
#define IMOVEL_H_
#include <string>
#include "endereco.h"

class Imovel{
protected:
	Endereco e;
public:
	Imovel(std::string l, std::string b, int n ,std::string cid,std::string cp);
	Imovel();
	std::string getEndereco();
	virtual std::string getDescricao()=0;
};
#endif