#include <iostream>
using namespace std;

int main(){
	int n, m, max, min;
	
	cout<<"Quanti numeri vuoi inserire? ";
	cin>>n;
	cout<<endl;
	
	cout<<"Inserisci un numero: ";
	cin>>m;
	max = m;
	min = m;
	
	for(int i=1; i<n; i++){
		cout<<"Inserisci un numero: ";
		cin>>m;
		
		if(m>max){
			max = m;
		}
		if(m<min){
			min = m;
		}
		
	}
	
	cout<<endl;
	cout<<"Il massimo dei numeri inseriti e': "<<max<<endl;
	cout<<"Il minimo dei numeri inseriti e': "<<min<<endl;
}
