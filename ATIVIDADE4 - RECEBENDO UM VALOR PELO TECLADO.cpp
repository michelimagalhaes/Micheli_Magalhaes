#include <iostream>

using namespace std;

/*

Fa�a um c�digo que receba as dimens�es de um ret�ngulo (base/altura),
depois calcular e escrever a �rea do ret�ngulo

*/

int main(){
	
	float base, altura, area;
	
	cout<<"Digite um n�mero para a base do ret�ngulo: \n";
	cin>>base;
	cout<<"Digite um n�mero para a altura do ret�ngulo: \n";
	cin>>altura;
	
	area = base * altura;
	
	cout<<"\nValor da �rea do ret�nfgulo �: " <<area;
	 
	//getchar cria uma pausa no sistema esperando o usu�rio
	//digitar alguma coisa
	
	getchar();	
	return 0;
	
}
