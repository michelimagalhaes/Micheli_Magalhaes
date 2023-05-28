#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float ang;
    cout << "Informe a medida do ângulo em graus - 1 a 360: ";
    cin >> ang;
    
    if (ang>0 && ang <= 90) {
        cout <<"O ângulo está no 1º quadrante.\n";
    	}else if (ang > 90 && ang <= 180) {
        	cout <<"O ângulo está no 2º quadrante.\n";
    		}else if (ang > 180 && ang <= 270) {
        		cout <<"O ângulo está no 3º quadrante.\n";
    			}else if (ang > 270 && ang <= 360) {
       				cout <<"O ângulo está no 4º quadrante.\n";
    				}else {
        				cout << "ERRO, informe um valor para o ângulo entre 1 e 360º.\n";
   						}


	system("PAUSE");
	return (0);
}
