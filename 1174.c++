#include<iostream>
using namespace std;
int main(){

int i;
double x[100];

cout.precision(1);

for(i=0 ; i<100 ; i++ ){
       cin >> x[i];
 
}
for(i=0 ; i<100 ; i++ ){ 
 
       if(x[i] <= 10)
       
    cout << std::fixed << "A[" << i << "] = " << x[i] << endl;
       }
 
return 0;
}