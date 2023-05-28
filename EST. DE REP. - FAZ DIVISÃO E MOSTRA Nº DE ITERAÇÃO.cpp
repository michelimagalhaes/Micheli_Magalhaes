#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FAÇA UM PROGRAMA QUE RECEBA DOIS NÚMEROS REAIS E MOSTRE A DIVISÃO
DO PRIMEIRO NÚMERO PELO SEGUNDO.
*SE O 2º FOR = A ZERO, MOSTRAR "DIVISÃO IMPOSSÍVEL";
*REPETIR 5 VEZES;
*MOSTRAR O RESULTADO A CADA ITERAÇÃO (Nº DE VEZES QUE SE PASSA NO LAÇO).
*/


int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i;
	float n1, n2;
	
	for (i=1; i<=5; i++){
		cout<<"Informe um número: ";
		cin>>n1;
		
		cout<<"Informe outro número: ";
		cin>>n2;
		
		if (n2 == 0){
			cout<<"Divisão impossível.\n";
			
		} else {
			cout<<"O resultado da divisão é: "<<n1/n2<<".\n";
		}
		
		system("PAUSE");
	}

	return (0);

}
