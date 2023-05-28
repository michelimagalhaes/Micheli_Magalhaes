#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FAÇA UM PROGRAMA QUE MOSTRE TODOS ON NºS DIVISORES POR 3,
NO INTERVALO DE 50 A 200;
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
		
	for (i=50; i<=200; i++){
		if(i%3==0){
			cout<<"Divisor de 3: "<<i<<"\n";
		}
	}
			
		system("PAUSE");
			
	return (0);
}
