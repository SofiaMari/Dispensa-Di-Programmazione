#include <iostream>
using namespace std;

int main(){
	int a, b, c, n;
	a = 0;
	b = 1;
	
	cout<<"Quanti numeri di fibonacci vuoi stampare? ";
	cin>>n;
	
	if(n==0){
		cout<<"0";
	}else if(n==1){
		cout<<"1";
	}else{
		cout<<"1 ";
		for(int i=1; i<n; i++){
			c = a+b;
			cout<<c<<" ";
			a = b;
			b = c;
		}
	}
}
