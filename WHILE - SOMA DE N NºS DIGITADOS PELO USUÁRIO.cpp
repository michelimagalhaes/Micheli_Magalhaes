#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FA�A UM PROG QUE APRESENTE O TOTAL DA SOMA OBTIDA DE N N�MEROS
INTEIROS , ONDE N � UM N� DIGITADO PELO USU�RIO.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1, soma=0, n, valor;
	
	cout<<"Informe a quantidade de valores que deseja somar: \n";
	cin>>n;
	
	while(contador <= n){
		cout<<"Informe o "<<contador<<"� valor: \n";
		cin>>valor;		
		soma = soma + valor;
		contador++;
	}
	
	cout<<"A soma dos "<<n<<" valores � "<<soma<<".\n";
	
	return (0);
}
