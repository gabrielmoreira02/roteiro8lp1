#include "imovel.h"

Imovel::Imovel(std::string l, std::string b, int n ,std::string cid,std::string cp){
	e.setLogradouro(l);
	e.setBairro(b);
	e.setCidade(cid);
	e.setCep(cp);
	e.setNumero(n);
}
Imovel::Imovel(){
	
}

std::string Imovel::getEndereco(){
	std::string str="";
	str += "Logradouro: "+e.getLogradouro()+" Bairro:"+e.getBairro()+" Cidade: "+e.getCidade()
	+" Cep: "+ e.getCep()+" Numero: "+std::to_string(e.getNumero());
	return str;
}

