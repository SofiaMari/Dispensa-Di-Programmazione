#include <iostream>
using namespace std;

int main(){
	int n, m, somma= 0;
	cout<<"Quanti numeri vuoi inserire? ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Inserisci un numero: ";
		cin>>m;
		somma += m;
	}
	
	cout<<"La somma dei numeri inseriti e': "<<somma<<endl;
	cout<<"La media e': "<<(float)somma/n<<endl;
	
}
