#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float ang;
    cout << "Informe a medida do �ngulo em graus - 1 a 360: ";
    cin >> ang;
    
    if (ang>0 && ang <= 90) {
        cout <<"O �ngulo est� no 1� quadrante.\n";
    	}else if (ang > 90 && ang <= 180) {
        	cout <<"O �ngulo est� no 2� quadrante.\n";
    		}else if (ang > 180 && ang <= 270) {
        		cout <<"O �ngulo est� no 3� quadrante.\n";
    			}else if (ang > 270 && ang <= 360) {
       				cout <<"O �ngulo est� no 4� quadrante.\n";
    				}else {
        				cout << "ERRO, informe um valor para o �ngulo entre 1 e 360�.\n";
   						}


	system("PAUSE");
	return (0);
}
