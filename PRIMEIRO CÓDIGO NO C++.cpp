//COMENTÁRIOS
/*
ESTE SERÁ NOSSO PRIMEIRO PROGRAMA NO C++
A PRINCÍPIO VAMOS IMPORTAR A BIBLIOTECA PARA AS 
INSTRUÇÕES DE CADA SAÍDA DE DADOS
ABROBA
CARAMÃO
*/

//C++ É CASE SENSITIVE (PRESTAR ATENÇÃO)

#include <iostream>
//para a importação de uma biblioteca

using namespace std;

//função é tudo que abre e fecha parenteses, o que em oo é método.
//vamos criar a função principal - também conhecido como main()
int main() {
	
	//vamos dar as boas-vindas
	//o código cout<< --> coloca um texto
	//o código endl --> é utilizado para quebrar linha, o cursor vai para a de baixo.
	
	cout<<"abobra" <<endl;
	cout<<"caramão";
	
	cout<<"Olá mundo!" <<endl <<"Meu nome é Micheli" 
	<<"\nE moro na cidade de Votuporanga.\n"; //esse << esta servindo para fazer a concatenação das frases
	// - \n - gera uma nova linha
	//ponto e vírgula sempre indica o final de uma instrução.
	
	//essa linha indica o final dos códigos
	return 0;
	
} //fecha MAIN

