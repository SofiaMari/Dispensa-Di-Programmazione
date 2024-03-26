#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	cout<<"Inserisci il secondo numero: ";
	cin>>b;
	
	if(a>0 && b>0 || a<0 && b<0){
		cout<<"Il prodotto di A*B e' POSITIVO"<<endl;
	}else{
		cout<<"Il prodotto di A*B e' NEGATIVO"<<endl;
	}
}
