#include <iostream>
using namespace std;

int main(){

int linhadaoperacao;

cin >> linhadaoperacao;

char operacao;

cin >> operacao;

double matriz[12][12];

cout.precision(1);

for (int i = 0; i<12; i++){
   for (int j = 0; j<12; j++){
   cin >> matriz[i][j];
   }
   }
double resultado = 0.0;

for (int i = 0; i<12; i++)
if (operacao == 'S') {
    resultado += matriz[linhadaoperacao][i];
} else if (operacao == 'M') {
    resultado += matriz[linhadaoperacao][i] / 12;
}

cout << std::fixed << resultado << endl;
    return 0;
}