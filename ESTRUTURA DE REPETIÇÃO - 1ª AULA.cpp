#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese"); //mostra as letras em português, acentos e caracteres especiais 
	
	
	int i;
	for (i=1; i<10; i++){
		cout<<"\ni : "<<i;
	}
	
	system("PAUSE");
	return (0);
}
