#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FA�A UM PROGRAMA EM QUE O USU�RIO DEVA DIGITAR 7 N�S INTEIROS
E ENT�O MOSTRAR O VALOR TOTAL DA SOMA DOS N�S DIGITADOS
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, acumulador=0, num;
	
	for (i=1; i<=7; i++){
		
		cout<<"digite um n�mero: \n";
		cin>>num;
		
		acumulador = acumulador + num;	
	}
		
		//mostrar o resultado final ap�s receber os 7 numeros 
		cout<<"Total: "<< acumulador;	
		
		system("PAUSE");
			
	return (0);
}
