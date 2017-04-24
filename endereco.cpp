#include "endereco.h"


Endereco::Endereco(std::string l, std::string b, int n ,std::string cid,std::string cp){
	numero=n;
	bairro=b;
	logradouro = l;
	cidade=cid;
	cep=cp;
}
Endereco::Endereco(){

}
int Endereco::getNumero(){
	return numero;
}
std::string Endereco::getLogradouro(){
	return logradouro;
}
std::string Endereco::getBairro(){
	return bairro;
}
std::string Endereco::getCidade(){
	return cidade;
}
std::string Endereco::getCep(){
	return cep;
}
void Endereco::setNumero(int n){
	numero=n;
}	
void Endereco::setBairro(std::string b){
	bairro=b;
}	
void Endereco::setLogradouro(std::string l){
	logradouro = l;
}
void Endereco::setCidade(std::string cid){
	cidade=cid;
}
void Endereco::setCep(std::string cp){
	cep=cp;
}
