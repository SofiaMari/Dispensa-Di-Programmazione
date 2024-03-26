#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	cout<<"Inserisci il secondo numero: ";
	cin>>b;
	
	if(a == (b*b)){
		cout<<"A e' il quadrato di B"<<endl;
	}else{
		cout<<"A NON e' il quadrato di B"<<endl;
	}
}
