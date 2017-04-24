#include "casa.h"

Casa::Casa(std::string l, std::string b, int n ,std::string cid,std::string cp, int np, int qq,double at, double ac): Imovel(l,b,n,cid,cp){
	numeroDePavimentos =np;
	quantidadeDeQuartos =qq;
	areaDoTerreno = at;
	areaConstruida = ac;
}

std::string Casa::getDescricao(){
	std::string str = "";
	str +=  getEndereco() +"\n"+"Numero de Pavimentos: "+ std::to_string(numeroDePavimentos) + 
	" Quantidade de quartos: "+ std::to_string(quantidadeDeQuartos)+ " Area do terreno: "+std::to_string(areaDoTerreno)+
	" Area contruida: "+ std::to_string(areaConstruida);
	return str;
}