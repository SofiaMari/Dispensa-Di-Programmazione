#include <iostream>
using namespace std;

int main(){
	int n;
	int cifra_ms;
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	cifra_ms = n%10;
	
	if(cifra_ms%2==0){
		cout<<"Il numero e' PARI"<<endl;
	}else{
		cout<<"Il numero e' DISPARI"<<endl;
	}
}
