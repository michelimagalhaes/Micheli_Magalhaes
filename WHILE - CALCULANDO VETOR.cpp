#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

/*
FA�A UM PROG QUE CALCULE O FATORIAL DE UM N� FORNECIDO PELO USU�RIO.
ENTRETANTO O N� DEVE ESTAR NO INTERVALO DE 1 A 10.
DICA: FATORIAL � CALCULADA COMO SEGUE:
4! = 4X3X2X1 = 24
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int contador=1, n, fat=1;
	
	cout<<"Informe um n�mero para calcular seu fatorial: \n";
	cin>>n;
	cout<<n<<" x ";
		
	while(contador <= n){
			fat = fat * contador;
			
			cout<<""<<(n-contador)<<" x ";
			if(contador == 0)
			break;
			else
			contador ++;
	} 
	
	cout<<" = "<<fat;
	return (0);
}
