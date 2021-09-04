#include <iostream>

using namespace std;

int main(){

double a, b, c;
double temp;

cin >> a >> b >> c;

if(a<b){
    temp = a;
    a=b;
    b=temp;
} if(a<c){
    temp=a;
    a=c;
    c=temp;
} if(b<c){
    temp=b;
    b=c;
    c=temp;
}


if (a>=b+c){ cout << "NAO FORMA TRIANGULO " << "\n";

}else if (a*a == b*b + c*c){ cout << "TRIANGULO RETANGULO " << "\n";
    
} else if (a*a>b*b + c*c){ cout << "TRIANGULO OBTUSANGULO " << "\n";
     
 } else if (a*a<b*b + c*c){ cout << "TRIANGULO ACUTANGULO " << "\n";
     
  } if (a==b && a==c && b==c){ cout << "TRIANGULO EQUILATERO " << "\n";
     
 } if ((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){ cout << "TRIANGULO ISOSCELES " << "\n";  
    
    }


    return 0;
}