#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FA�A UM PROG QUE MOSTRE NA TELA O N�S �MPARES DE 0 AT� 80;
E A M�DIA DOS N�S PARES.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 0, soma=0, media, contaPar=0;
	
	while(contador <= 80){
		if(contador%2==0){
			soma = soma + contador;
			contaPar++;
		}else{
			cout<<contador<<"\n";
		}
		contador++;
	}
	media = soma/contaPar;
	cout<<"M�dia dos pares: "<<media<<"\n";
	
	return (0);
}
