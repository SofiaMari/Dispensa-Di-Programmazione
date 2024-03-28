#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	cout<<"I primi "<<n<<" numeri naturali sono: "<<endl;
	for(int i=0; i<=n; i++){
		cout<<i<<" ";
	}
}
