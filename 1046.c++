#include <iostream>

using namespace std;

int main(){

    int a, b, h;

    h= 24;

    cin >> a >> b;

    if(a > b) cout << "O JOGO DUROU " << (h - a)+ b << " HORA(S)" << endl;
    if(a < b) cout << "O JOGO DUROU " << b-a << " HORA(S)" << endl;
    if(a==b) cout << "O JOGO DUROU " << h << " HORA(S)" << endl;




    return 0;
}