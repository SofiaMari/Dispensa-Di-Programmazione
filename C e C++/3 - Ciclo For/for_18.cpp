#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, div;
	
    cout<<"Inserisci N: ";
    cin>>n;
    
    cout<<endl;
    cout<<"I numeri primi tra 2 e "<<n<<" sono:"<<endl;
    for(int i=2; i<=n; i++){
    	div = 0;
    	for(int j=1; j<=i; j++){
    		if(i%j==0){
    			div++;
			}
		}
		
		if(div==2){
			cout<<i<<" ";
		}
	}
}
