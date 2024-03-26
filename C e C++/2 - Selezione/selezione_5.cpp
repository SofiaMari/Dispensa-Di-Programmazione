#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	
	cout<<"Inserisci il secondo numero: ";
	cin>>b;
	
	if(b<0){
		cout<<"B ("<<b<<") e' NEGATIVO"<<endl;
	}else{
		cout<<"B ("<<b<<") e' POSITIVO"<<endl;
	}
	
	if(a%2==0){
		cout<<"A ("<<a<<") e' PARI"<<endl;
	}else{
		cout<<"A ("<<a<<") e' DISPARI"<<endl;
	}
	
	cout<<"La somma di A+B e': "<<a+b;
	
}
