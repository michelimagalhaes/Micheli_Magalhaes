#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
UM PROFESSOR PRECISA CALCULAR A M�DIA ARITM�TICA DE QUATRO NOTAS, 
AS NOTAS VARIAM DE 0 � 10.
FA�A UM PROGRAMA UTILIZANDO O LA�O DE REPETI��O QUE RECEBA AS 4
NOTAS E MOSTRE AS M�DIAS
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float n, m=0;
	
	for (i=1; i<=4; i++){
		
		cout<<"nota da "<<i<<"� prova:";
		cin>>n;
		
		m = m + n;
	}
		
		cout<<"A m�dia aritm�tica �: "<< m/4 <<" \n";	
		
		system("PAUSE");
			
	return (0);
}
