#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FA�A UM PROGRAMA QUE PASSE POR UM LA�O 100X
E MOSTRE APENAS OS N�S �MPARES

num%2!=0 ---> �mpar
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	for (i=1; i<=100; i++){
		//mostrar �mpares
		if (i%2!=0){
			
		cout<<"\n �mpares : "<<i;}
		
		system("PAUSE");
	}
	
	return (0);
}
