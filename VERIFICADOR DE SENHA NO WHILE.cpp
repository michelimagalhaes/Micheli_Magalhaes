#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FA�A UM PROG PARA VERIFICAR SE UMA DETERMINADA SENHA NUM�RICA 
DIGITADA ESTA CORRETA. O USU�RIO TER� APENAS 3 TENTATIVAS. SE O USU�RIO ERRAR
A SENHA, ENT�O MOSTRAR A FRASE "Voc� tem mais x tentativas", ONDE X
� SE O USU�RIO ACERTAR A SENHA, ENT�O MOSTRAR A MENSAGEM "Acesso permitido!" E
INTERROPER A EXECU��O COM O C�DIGO break;
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
				cout<<"Senha incorreta, voc� tem mais "<<contador<<" tentativas.\n";
		}else{
			cout<<"Acesso permitido!";
			break;
		}
		contador--;
	}
	
	return (0);
}
