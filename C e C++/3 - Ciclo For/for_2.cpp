#include <iostream>
using namespace std;

int main(){
	int n, m;
	cout<<"Inserisci un numero: ";
	cin>>m;
	cout<<"Quanti multipli di "<<m<<" vuoi stampare? ";
	cin>>n;
	
	cout<<"I primi "<<n<<" multipli di "<<m<<" sono: "<<endl;
	for(int i=m+1; i<=n*m; i++){
		if(i%m==0){
			cout<<i<<" ";
		}
	}
}
