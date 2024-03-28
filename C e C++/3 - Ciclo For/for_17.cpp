#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout<<"I quadrati perfetti da 1 a 100 sono:"<<endl;

    for(int numero=1;numero*numero<=100; numero++) {
        cout<<numero * numero<<" ";
    }
}
