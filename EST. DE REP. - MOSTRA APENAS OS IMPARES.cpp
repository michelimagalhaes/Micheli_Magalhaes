#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FAÇA UM PROGRAMA QUE PASSE POR UM LAÇO 100X
E MOSTRE APENAS OS NºS ÍMPARES

num%2!=0 ---> ímpar
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	for (i=1; i<=100; i++){
		//mostrar ímpares
		if (i%2!=0){
			
		cout<<"\n ímpares : "<<i;}
		
		system("PAUSE");
	}
	
	return (0);
}
