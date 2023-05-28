#include <iostream>

using namespace std;

/*

ESCREVA UM PROGRAMA QUE RECEBA O VALOR ATUAL DO SALÁRIO
DE UM FUNCIONÁRIO, CALCULE UMA AUMENTO DE 15% E MOSTRE O VALOR INICIAL
E O SALÁRIO COM AUMENTO.

*/

int main(){
	
	float sal, salaumento ;
	char nome;
	
	cout<<"Digite o nome do Funcionário: \n";
	cin>>nome;
	
	cout<<"Digite o valor do salário desse funcionário: \n";
	cin>>sal;
	
	salaumento = sal * 1,15;
	
	cout<<"\nO salário do funcionário: " <<nome <<" é $" <<sal
	<<"\nE seu salário atual com aumento é $ " <<salaumento;
		 
	//getchar cria uma pausa no sistema esperando o usuário
	//digitar alguma coisa
	
	getchar();	
	return 0;
	
}
