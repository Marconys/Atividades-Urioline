#include <iostream>
using namespace std;

int main(){

double raio;
    double area;

    cout.precision(4);
    
    cin >> raio;
    
    area = 3.14159 * raio * raio;
    
    cout << std::fixed<< "A=" << area << endl;


    return 0;
}