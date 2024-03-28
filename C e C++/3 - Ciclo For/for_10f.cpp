#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Inserisci il lato del quadrato: ";
	cin>>n;
	
	if(n%2==0){
		return 0; //al momento assumo che non si conosca il while
	}
	cout<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0 || j==0 || j==n-1 || i==n-1 || j==i || j==n-1-i){
				cout<<"X ";
			}else{
				if(j>i && i<(n/2) && i<(n-j)){
					cout<<". ";
				}else if(i>j && j<(n/2) && j<(n-i)){
					cout<<"' ";
				}else if(j>i && j>(n/2)){
					cout<<"- ";
				}else{
					cout<<"+ ";
				}
				
			}
		}
		cout<<endl;
	}
}
