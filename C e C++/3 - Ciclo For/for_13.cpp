#include <iostream>
using namespace std;

int main(){
	int n, m, maxPari, maxDispari;
	
	cout<<"Quanti numeri vuoi inserire? ";
	cin>>n;
	cout<<endl;
	
	maxPari = -1;
	maxDispari = -1;
	
	for(int i=0; i<n; i++){
		cout<<"Inserisci un numero: ";
		cin>>m;
		
		if(m%2==0 && m>maxPari){
			maxPari = m;
		}
		if(m%2!=0 && m>maxDispari){
			maxDispari = m;
		}
		
	}
	
	cout<<endl;
	cout<<"Il massimo dei numeri pari e': "<<maxPari<<endl;
	cout<<"Il massimo dei numeri dispari e': "<<maxDispari<<endl;
}
