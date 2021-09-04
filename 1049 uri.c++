#include <iostream>
#include <iomanip>

using namespace std;

int main(){


string caract1, caract2, caract3;


cin >> caract1;
cin >> caract2;
cin >> caract3;

string animal = caract1 + caract2 + caract3;

if (caract1 == "vertebrado" && caract2 == "ave" && caract3 == "carnivoro"){
    cout << "aguia" << endl;
} else if (caract1 == "vertebrado" && caract2 == "ave" && caract3 == "onivoro")
    cout << "pomba" << endl;

if (caract1 == "vertebrado" && caract2 == "mamifero" && caract3 == "herbivoro"){
    cout << "vaca" << endl;
} else if (caract1 == "vertebrado" && caract2 == "mamifero" && caract3 == "onivoro")
    cout << "homem" << endl;

if (caract1 == "invertebrado" && caract2 == "inseto" && caract3 == "hematofago"){
    cout << "pulga" << endl;
} else if (caract1 == "invertebrado" && caract2 == "inseto" && caract3 == "herbivoro")
    cout << "lagarta" << endl;

if (caract1 == "invertebrado" && caract2 == "anelideo" && caract3 == "hematofago"){
    cout << "sanguessuga" << endl;
} else if (caract1 == "invertebrado" && caract2 == "anelideo" && caract3 == "onivoro")
    cout << "minhoca" << endl;

    if (caract1 == "invertebrado" && caract2 == "anelideo" && caract3 == "hematofago"){
    cout << "sanguessuga" << endl;
} else if (caract1 == "vertebrado" && caract2 == "mamador" && caract3 == "gay")
    cout << "caracteristicas do  Carlos, marido do gayvenildo!" << endl;
    return 0;
}