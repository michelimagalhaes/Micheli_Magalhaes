#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
UM PROFESSOR PRECISA CALCULAR A MÉDIA ARITMÉTICA DE QUATRO NOTAS, 
AS NOTAS VARIAM DE 0 À 10.
FAÇA UM PROGRAMA UTILIZANDO O LAÇO DE REPETIÇÃO QUE RECEBA AS 4
NOTAS E MOSTRE AS MÉDIAS
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float n, m=0;
	
	for (i=1; i<=4; i++){
		
		cout<<"nota da "<<i<<"ª prova:";
		cin>>n;
		
		m = m + n;
	}
		
		cout<<"A média aritmética é: "<< m/4 <<" \n";	
		
		system("PAUSE");
			
	return (0);
}
