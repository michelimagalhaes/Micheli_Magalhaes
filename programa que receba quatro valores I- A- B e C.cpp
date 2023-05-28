#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float a,b,c;
	
	//vamos receber esses valores
	cout<<"Digite o número da condição desejada: \n 1 - Ordem crescente\n 2 - Ordem decrescente\n 3 - O maior fica no meio \n";
	cout<<"Opção: ";
	cin>>i;
 	cout<<"Digite o 1º número: \n";
	cin>>a;
	cout<<"Digite o 2º número: \n";
	cin>>b;
	cout<<"Digite o 3º número: \n";
	cin>>c;
	
	switch(i){
		case 1:
			if(a<b && b<c){
				cout<<"Ordem crescente: "<<a<<", "<<b<<", "<<c<<".\n";
				}else if(b<a && a<c){
					cout<<"Ordem crescente: "<<b<<", "<<a<<", "<<c<<".\n";	
					}else if(c<a && a<b){
						cout<<"Ordem crescente: "<<c<<", "<<a<<", "<<b<<".\n";
						}else if(c<b && b<a){
					cout<<"Ordem crescente: "<<c<<", "<<b<<", "<<a<<".\n";
				}			
		break;	
		
		case 2:
			if(a>b && b>c){
				cout<<"Ordem decrescente: "<<a<<", "<<b<<", "<<c<<".\n";
				}else if(b>a && a>c){
					cout<<"Ordem decrescente: "<<b<<", "<<a<<", "<<c<<".\n";	
					}else if(c>a && a>b){
						cout<<"Ordem decrescente: "<<c<<", "<<a<<", "<<b<<".\n";
						}else if(c>b && b>a){
					cout<<"Ordem decrescente: "<<c<<", "<<b<<", "<<a<<".\n";
				}	
		break;
		
		case 3:
			if(a>b && a>c){
				cout<<b<<", "<<a<<", "<<c<<". \n";
			}else if(b>a && b>c){
				cout<<a<<", "<<b<<", "<<c<<". \n";
			}else{
				cout<<b<<", "<<c<<", "<<a<<". \n";
			}
		
		break;
	}
	
	
	
	system("PAUSE");
	return (0);
}
