#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
CRIAR UM PROGRAMA COM LAÇO DE REPETIÇÃO DE 7X.
EM CADA VEZ PEDIR PARA DIGITAR UM Nº INTEIRO E MOSTRAR O Nº
DIGITADO EM SEGUIDA.
*/


int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i, num;
	
	for (i=1; i<=7; i++){
		cout<<"Informe um número: ";
		cin>>num;
		
		cout<<"O número digitado foi: "<<num<<".\n";
		
	}

	system("PAUSE");
	return (0);

}
