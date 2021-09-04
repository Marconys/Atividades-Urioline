#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, B, C, D;
    int x, y;
       
    cin >> A >> B >> C >> D;

    x = A+B;
    y = C+D;

    if (B>C&&D>A&&y>x&&C>=0&&D>=0&&A%2==0){
        cout << "Valores aceitos"<< endl;
    }
         else{
        cout << "Valores nao aceitos" << endl;
          }

          return 0;
}