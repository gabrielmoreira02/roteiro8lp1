#include "apartamento.h"

Apartamento::Apartamento(std::string l, std::string b, int n ,std::string cid,std::string cp, std::string p, int ndvg,double vdc): Imovel(l,b,n,cid,cp){
	posicao=p;
	numeroDeVagasNaGaragem=ndvg;
	valorDoCondominio=vdc;
}

std::string Apartamento::getDescricao(){
	std::string str = "";
	str +=  getEndereco() +"\n"+"Posicao: "+ posicao +" Numero de Vagas na Garagem: "+std::to_string(numeroDeVagasNaGaragem)
	+ " Valor do Condominio: " + std::to_string(valorDoCondominio);
	return str;
}