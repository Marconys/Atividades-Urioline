#include <iostream>

using namespace std;

int main() {

int horas, velocidade;
double combustivel;

cout.precision(3);

cin >> horas >> velocidade;

combustivel = (horas * velocidade);


cout << std::fixed << combustivel / 12 << endl;

    return 0;
}