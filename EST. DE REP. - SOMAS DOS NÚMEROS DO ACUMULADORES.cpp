#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FAÇA UM PROGRAMA EM QUE O USUÁRIO DEVA DIGITAR 7 NºS INTEIROS
E ENTÃO MOSTRAR O VALOR TOTAL DA SOMA DOS NºS DIGITADOS
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, acumulador=0, num;
	
	for (i=1; i<=7; i++){
		
		cout<<"digite um número: \n";
		cin>>num;
		
		acumulador = acumulador + num;	
	}
		
		//mostrar o resultado final após receber os 7 numeros 
		cout<<"Total: "<< acumulador;	
		
		system("PAUSE");
			
	return (0);
}
