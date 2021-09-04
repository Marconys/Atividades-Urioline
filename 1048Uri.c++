#include <iostream>

using namespace std;

int main(){

    

double salario, reajuste, novosalario;
int percentual;

cin >> salario;

novosalario = salario + reajuste;

if( salario >= 0 && salario <=400.00){
reajuste = 15/100.0 * salario;
novosalario = reajuste + salario;
percentual = 15;
}

else if( salario >= 400.01 && salario <=800.00){
reajuste = 12/100.0 * salario;
novosalario = reajuste + salario;
percentual = 12;
}

else if( salario >= 800.01 && salario <=1200.00){
reajuste = 10/100.0 * salario;
novosalario = reajuste + salario;
percentual = 10;
}

else if( salario >= 1200.01 && salario <=2000.00){
reajuste = 7/100.0 * salario;
novosalario = reajuste + salario;
percentual = 7;
}

else if( salario > 2000.00){
reajuste = 4/100.0 * salario;
novosalario = reajuste + salario;
percentual = 4;
}
cout.precision(2);
cout << std::fixed << "Novo salario: " << novosalario << endl;
cout << std::fixed << "Reajuste ganho: " << reajuste << endl;
cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}