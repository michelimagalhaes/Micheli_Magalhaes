#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
UM PROF PRECISA CALCULAR A M�DIA ARITM�TICA DE 4 NOTAS.
AS NOTAS DE CADA PROVA VARIAM DE 0 A 10;
FA�A UM PROG UTILIZANDO LA�O DE REPT. QUE RECEBA 4 NOTAS
E MOSTRE A M�DIA. FA�A COM WHILE().
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador=1;
	float nota, media=0, contNota;
	
	while(contador <= 4){
		cout<<"Informe a "<<contador<<"� nota: ";
		cin>>nota;
		contNota = contNota + nota;
		contador++;
	}
	media = contNota / (contador-1);
	cout<<"A m�dia �: "<<media<<".\n";
	
	system("PAUSE");
	return (0);
}
