#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FAÇA UM PROG PARA VERIFICAR SE UMA DETERMINADA SENHA NUMÉRICA 
DIGITADA ESTA CORRETA. O USUÁRIO TERÁ APENAS 3 TENTATIVAS. SE O USUÁRIO ERRAR
A SENHA, ENTÃO MOSTRAR A FRASE "Você tem mais x tentativas", ONDE X
É SE O USUÁRIO ACERTAR A SENHA, ENTÃO MOSTRAR A MENSAGEM "Acesso permitido!" E
INTERROPER A EXECUÇÃO COM O CÓDIGO break;
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 2, senha=1234;
	
	while(contador >= 0){
		cout<<"Informe a senha: ";
		cin>>senha;
		
		if(senha != 1234){
			if(contador <= 0)
				cout<<"Acesso negado!\n";
			else
				cout<<"Senha incorreta, você tem mais "<<contador<<" tentativas.\n";
		}else{
			cout<<"Acesso permitido!";
			break;
		}
		contador--;
	}
	
	return (0);
}
