#include <iostream>
using namespace std;

int main(){
	int n, m, pari = 0, dispari = 0;
	cout<<"Quanti numeri vuoi inserire? ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Inserisci un numero: ";
		cin>>m;
		if(m%2==0){
			pari++;
		}else{
			dispari++;
		}
	}
	
	cout<<"Numeri pari inseriti: "<<pari<<endl;
	cout<<"Numeri dispari inseriti: "<<dispari<<endl;
	
}
