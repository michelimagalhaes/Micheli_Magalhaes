#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
CRIAR UM PROGRAMA COM LA�O DE REPETI��O DE 7X.
EM CADA VEZ PEDIR PARA DIGITAR UM N� INTEIRO E MOSTRAR O N�
DIGITADO EM SEGUIDA.
*/


int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i, num;
	
	for (i=1; i<=7; i++){
		cout<<"Informe um n�mero: ";
		cin>>num;
		
		cout<<"O n�mero digitado foi: "<<num<<".\n";
		
	}

	system("PAUSE");
	return (0);

}
