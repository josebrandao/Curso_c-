#include<iostream>
#include "Pessoa.h"
using namespace std;
int main(){
	Pessoa myObj;
	myObj.nome = "José Carlos";
	myObj.idade = 37;
	cout << myObj.idade << "\n"; 
    cout << myObj.nome; 
  return 0;
}

