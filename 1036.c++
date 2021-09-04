#include <iostream>
#include <cmath>


using namespace std;

int main(){


double a, b, c;
double res1, res2;

cin >> a >> b >> c;


cout.precision(5);

if (b * b - 4 * a * c <=0 || 2*a==0){
cout <<std::fixed << "Impossivel calcular" << endl;

}
else { 
    res1 = (-b + (sqrt(b * b - 4 * a * c))) /(2*a);
    cout << std::fixed << "R1 = " << res1 << endl;

    res2 = (-b - (sqrt(b * b - 4 * a * c))) /(2*a);
    cout << std::fixed << "R2 = " << res2 << endl;

}



    return 0;
}