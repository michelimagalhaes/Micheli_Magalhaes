#include <iostream>

using namespace std;

/*

Faça um código que leia a idade de uma pessoa expressa em anos
e mostre a idade dessa pessoa em dia, considerando que o ano tem 365 dias

*/

int main(){
	
	float idadea, idaded ;
	
	cout<<"Digite sua idade em anos: \n";
	cin>>idadea;
	
	idaded = idadea * 365;
	
	cout<<"\nIdade em anos: " <<idadea <<" e idade em dias: " <<idaded;
	 
	//getchar cria uma pausa no sistema esperando o usuário
	//digitar alguma coisa
	
	getchar();	
	return 0;
	
}
