#include <iostream>
using namespace std;

int main(){
	int n, m, spari = 0, sdispari = 0;
	cout<<"Quanti numeri vuoi inserire? ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Inserisci un numero: ";
		cin>>m;
		if(m%2==0){
			spari = spari + m;
		}else{
			sdispari = sdispari + m;
		}
	}
	
	cout<<"Somma numeri pari inseriti: "<<spari<<endl;
	cout<<"Somma numeri dispari inseriti: "<<sdispari<<endl;
	
}
