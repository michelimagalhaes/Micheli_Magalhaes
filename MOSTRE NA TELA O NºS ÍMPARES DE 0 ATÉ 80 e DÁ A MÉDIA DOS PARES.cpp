#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FAÇA UM PROG QUE MOSTRE NA TELA O NºS ÍMPARES DE 0 ATÉ 80;
E A MÉDIA DOS NºS PARES.
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
	cout<<"Média dos pares: "<<media<<"\n";
	
	return (0);
}
