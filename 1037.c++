#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

double x;
double a, b, c, d;

cout.precision(2);
cin >> x;

if (x < 0 || x >100.00){
    cout << "Fora de intervalo" << endl;
}
else if(x>=0.00 && x<=25.00){
cout << std::fixed << "Intervalo [0,25]" << endl;

} else if(x>=25.00 && x<=50.00){
    cout << std::fixed << "Intervalo (25,50]" << endl;

}   else if (x>=50.00 && x<=75.00){
    cout << std::fixed << "Intervalo (50,75]" << endl;

} else if(x>=75.00 && x<=100.00){
    cout << std::fixed << "Intervalo (75,100]" << endl;
}

    return 0;
}