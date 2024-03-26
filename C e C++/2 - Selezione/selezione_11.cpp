#include <iostream>
using namespace std;

int main(){
	int a, b, n;
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	cout<<"Inserisci l'estremo inferiore dell'intervallo: ";
	cin>>a;
	cout<<"Inserisci l'estremo superiore dell'intervallo: ";
	cin>>b;
	
	if(b<a){ //se l'utente si sbaglia scambio i due estremi
		int t;
		t = a;
		a = b;
		b = t;
	}
	
	if(n>=a && n<=b){
		cout<<n<<" e' compreso in ["<<a<<", "<<b<<"]"<<endl;
	}else{
		cout<<n<<" NON e' compreso in ["<<a<<", "<<b<<"]"<<endl;
	}
}
