#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FA�A UM PROG QUE MOSTRE TDS OS N�S DIVISIVEIS
POR 5, NO INTERVALO DE 1 A 100;
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador=1;
	
	while(contador <= 100){
		if(contador %5==0){
			cout<<"\n"<<contador;
		}
		contador++;
	}
	
	system("PAUSE");
	return (0);
}
