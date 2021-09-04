#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;


int main(){

double a, b, c, d, e, media;

cout.precision(1);

   cin >> a >> b >> c >> d;

      media = (a*2 + b*3 + c*4 + d*1)/10;
      cout << std::fixed << "Media: " <<  media << endl;

         if (media >= 7.0) cout << "Aluno aprovado. " << endl;

            if (media <5.0) cout << "Aluno reprovado. " << endl;

               if (media >= 5.0 && media < 7.0){ cout << "Aluno em exame. " << endl;
                
                  cin >> e;

                    cout << std::fixed << "Nota do exame: " << e << endl;

                     if ((media + e)/2 >=5.0) cout << "Aluno aprovado. " << endl;

                        else cout << "Aluno reprovado. " << endl;
                        cout << std::fixed << "Media final: " << (media + e)/2 << endl;

               }




    return 0;
}