#include <iostream>

using namespace std;

/*

ESCREVA UM PROGRAMA QUE RECEBA O VALOR ATUAL DO SAL�RIO
DE UM FUNCION�RIO, CALCULE UMA AUMENTO DE 15% E MOSTRE O VALOR INICIAL
E O SAL�RIO COM AUMENTO.

*/

int main(){
	
	float sal, salaumento ;
	char nome;
	
	cout<<"Digite o nome do Funcion�rio: \n";
	cin>>nome;
	
	cout<<"Digite o valor do sal�rio desse funcion�rio: \n";
	cin>>sal;
	
	salaumento = sal * 1,15;
	
	cout<<"\nO sal�rio do funcion�rio: " <<nome <<" � $" <<sal
	<<"\nE seu sal�rio atual com aumento � $ " <<salaumento;
		 
	//getchar cria uma pausa no sistema esperando o usu�rio
	//digitar alguma coisa
	
	getchar();	
	return 0;
	
}
