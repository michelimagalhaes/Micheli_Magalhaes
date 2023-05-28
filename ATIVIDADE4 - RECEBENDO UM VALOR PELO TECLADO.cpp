#include <iostream>

using namespace std;

/*

Faça um código que receba as dimensões de um retângulo (base/altura),
depois calcular e escrever a área do retângulo

*/

int main(){
	
	float base, altura, area;
	
	cout<<"Digite um número para a base do retângulo: \n";
	cin>>base;
	cout<<"Digite um número para a altura do retângulo: \n";
	cin>>altura;
	
	area = base * altura;
	
	cout<<"\nValor da área do retânfgulo é: " <<area;
	 
	//getchar cria uma pausa no sistema esperando o usuário
	//digitar alguma coisa
	
	getchar();	
	return 0;
	
}
