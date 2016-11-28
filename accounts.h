// Open Tibia
#ifndef __ACCOUNT__
#define __ACCOUNT__
#include "otsystem.h" //inclui o arquivo "otsystem"
#ifndef __LOGIN_SERVER__


typedef std::list<std::string> Characters; // define uma lista um tipo string Characters
#else // se o que for escrito abaixo disso, será usado o else como valor absoluto
#include "gameservers.h" // inclu o arquivo "gameservers.h" nesse mesmo arquivo
typedef std::map<std::string>, GameServer*> Characters; // define o tipo GameServer* como referencia e string

#endif //Se a expressão escrita (após #endif) tiver um valor diferente de zero, o grupo de linhas imediatamente após a política #endif será mantido na unidade de tradução.
class Account // define a classe Account
{
	public: // define como publico
	Account() {number = premiumDays = lastDay = warning = 0;} // chama a função Accounts() e iguala todos os valores = 0;
	virtual ~Account() {charList.clear();} // adiciona polimorfismo a função Account() chama a função charList.clear();

	uint32_t number, premiumDays, lastDay; // define essas variaveis como inteiro não negativo
	int32_t warnings; // define warnings como deve possuir tamanho mínimo de 32 bits;
	std::string name, password, recoveryKey; // define como string name, password e RecoveryKey
	Characters charList;

}
#endif