#include <iostream>
using namespace std;

int main(){
	int n, c=1;
	cout<<"Inserisci numero di righe per il triang. di Floyd: ";
	cin>>n;
	cout<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			cout<<c<<" ";
			c++;
		}
		cout<<endl;
	}
}
