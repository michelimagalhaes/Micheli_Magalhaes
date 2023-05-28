#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

/*
FAÇA A TABUADA DO 7
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n, result = 0;

	cout<<"Digite o número da tabuada que deseja: ";
	cin>>n;
		
	for (i=0; i<=10; i++){
		
		result = n * i;
		
		cout<<n<<" x "<<i<<" = "<<result<<"\n";
	}
			
		
		system("PAUSE");
			
	return (0);
}
