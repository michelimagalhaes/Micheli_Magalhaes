#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FAÇA UM PROG QUE APRESENTE O TOTAL DA SOMA OBTIDA DE N NÚMEROS
INTEIROS , ONDE N É UM Nº DIGITADO PELO USUÁRIO.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1, soma=0, n, valor;
	
	cout<<"Informe a quantidade de valores que deseja somar: \n";
	cin>>n;
	
	while(contador <= n){
		cout<<"Informe o "<<contador<<"º valor: \n";
		cin>>valor;		
		soma = soma + valor;
		contador++;
	}
	
	cout<<"A soma dos "<<n<<" valores é "<<soma<<".\n";
	
	return (0);
}
