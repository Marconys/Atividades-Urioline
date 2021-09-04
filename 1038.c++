#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

     
int qtd = 0, i = 0;
double cod[6];
double tot;

cod[0] = 0.00;
cod[1] = 4.00;
cod[2] = 4.50;
cod[3] = 5.00;
cod[4] = 2.00;
cod[5] = 1.50;

cout.precision(2);

cin >> i >> qtd;

tot = qtd * cod[i];

cout << std::fixed << "Total: R$ " << tot << endl;

return 0;

}