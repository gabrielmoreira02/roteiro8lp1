#include "terreno.h"

Terreno::Terreno(std::string l, std::string b, int n ,std::string cid,std::string cp, double ar): Imovel(l,b,n,cid,cp){
	area=ar;
}

std::string Terreno::getDescricao(){
	std::string str = "";
	str +=  getEndereco() +"\n"+"Area: "+ std::to_string(area);
	return str;
}