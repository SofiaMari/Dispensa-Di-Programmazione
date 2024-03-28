#include <iostream>
using namespace std;

int main(){
	int n, a, b, c1, c2, somma, cont=0;
	
	cout<<"Quante coppie vuoi inserire? ";
	cin>>n;
	cout<<"Inserisce l'estremo inferiore dell'intervallo: ";
	cin>>a;
	cout<<"Inserisce l'estremo superiore dell'intervallo: ";
	cin>>b;
	
	if(a>b){
		int t;
		t=a;
		a=b;
		b=t;
	}
	cout<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Inserisci il primo elemento della coppia: ";
		cin>>c1;
		cout<<"Inserisci il secondo elemento della coppia: ";
		cin>>c2;
		cout<<"Coppia ("<<c1<<", "<<c2<<")"<<endl;
		cout<<endl;
		
		somma = c1+c2;
		if(somma>=a && somma<=b){
			cont++;
		}
	}
	
	cout<<endl;
	cout<<"Le coppie all'interno dell'intervallo sono: "<<cont<<endl;
}
