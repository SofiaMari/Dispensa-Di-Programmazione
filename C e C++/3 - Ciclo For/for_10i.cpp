#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci il numero di righe: ";
	cin>>n;
	
	if(n%2==0){
		return 0; //assumo che il while non sia conosciuto.
				  //si può fare un controllo con while.
	}
	cout<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0 || i==n-1 || j==0 || i==(n/2)){
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
