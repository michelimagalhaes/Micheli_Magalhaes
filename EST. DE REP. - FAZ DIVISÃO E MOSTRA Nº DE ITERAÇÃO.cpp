#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FA�A UM PROGRAMA QUE RECEBA DOIS N�MEROS REAIS E MOSTRE A DIVIS�O
DO PRIMEIRO N�MERO PELO SEGUNDO.
*SE O 2� FOR = A ZERO, MOSTRAR "DIVIS�O IMPOSS�VEL";
*REPETIR 5 VEZES;
*MOSTRAR O RESULTADO A CADA ITERA��O (N� DE VEZES QUE SE PASSA NO LA�O).
*/


int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i;
	float n1, n2;
	
	for (i=1; i<=5; i++){
		cout<<"Informe um n�mero: ";
		cin>>n1;
		
		cout<<"Informe outro n�mero: ";
		cin>>n2;
		
		if (n2 == 0){
			cout<<"Divis�o imposs�vel.\n";
			
		} else {
			cout<<"O resultado da divis�o �: "<<n1/n2<<".\n";
		}
		
		system("PAUSE");
	}

	return (0);

}
