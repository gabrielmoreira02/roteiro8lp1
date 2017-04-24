#ifndef ENDERECO_H_
#define ENDERECO_H_
#include <string>

class Endereco{
protected:
	std::string logradouro;
	std::string bairro;
	int numero;
	std::string cidade;
	std::string cep;
public:
	Endereco(std::string l, std::string b, int n ,std::string cid,std::string cp);
	Endereco();
	int getNumero();
	std::string getLogradouro();
	std::string getBairro();
	std::string getCidade();
	std::string getCep();
	void setNumero(int n);
	void setBairro(std::string b);	
	void setLogradouro(std::string l);
	void setCidade(std::string cid);
	void setCep(std::string cp);

};

#endif
