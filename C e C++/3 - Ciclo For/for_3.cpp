#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	cout<<"I primi 10 numeri pari successivi a "<<n<<" sono: "<<endl;
	for(int i=n+1; i<=n+20; i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	}
	
	/*soluzione2:
		int c;
		if(n%2==0){
			c = n+2;
		}else{
			c = n+1;
		}
		for(int i=0; i<10; i++){
			cout<<c<<" ";
			c += 2;
		}
	*/
}
