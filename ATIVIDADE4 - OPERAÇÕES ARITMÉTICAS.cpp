#include <iostream>

using namespace std;

/*

Nesse programa vamos mostrar os resultados das
opera��es b�sicas de matem�tica, utilizando 
6 vari�veis de n�meros reais(float)

*/

int main(){
	
	float n1 = 40, n2 = 3, soma, diferenca, divisao, multiplicacao; //vari�vel do tipo real
	
	soma = n1 + n2;
	diferenca = n1 - n2;
	divisao = n1 / n2;
	multiplicacao = n1 * n2;
	
	cout<<"Soma: " <<soma<< "\nDiferen�a: " <<diferenca
	<<"\nDivis�o: " <<divisao<< "\nMultiplica��o: " <<multiplicacao;
	 
	//getchar cria uma pausa no sistema esperando o usu�rio
	//digitar alguma coisa
	
	getchar();	
	return 0;
	
}
