#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

double a, b, c, p, ar;

std::cin >> a >> b >> c;

ar= ((a+b)*c)/2;

p= a+b+c;

 if ((b-c<a && b+c>a) && (a-c<b && a+c>b) && (a-b<c && a+b>c)){
    printf ("Perimetro = %.1f\n", p);
 }
        else { printf("Area = %.1f\n", ar);

        }

    return 0;

}