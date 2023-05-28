#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
UM PROF PRECISA CALCULAR A MÉDIA ARITMÉTICA DE 4 NOTAS.
AS NOTAS DE CADA PROVA VARIAM DE 0 A 10;
FAÇA UM PROG UTILIZANDO LAÇO DE REPT. QUE RECEBA 4 NOTAS
E MOSTRE A MÉDIA. FAÇA COM WHILE().
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador=1;
	float nota, media=0, contNota;
	
	while(contador <= 4){
		cout<<"Informe a "<<contador<<"ª nota: ";
		cin>>nota;
		contNota = contNota + nota;
		contador++;
	}
	media = contNota / (contador-1);
	cout<<"A média é: "<<media<<".\n";
	
	system("PAUSE");
	return (0);
}
