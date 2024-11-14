// EquationSolver.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
using namespace std;

vector<float> solveur(const float& a, const float &b, const float &c);

int main()
{
    float a, b, c;
    vector<float> solutions;

    cout << "Entrez les paramètres a, b et c de l'équation" << endl;
    cout << "Valeur de a : ";
    cin >> a;
    cout << "\nValeur de b : ";
    cin >> b;
    cout << "\nValeur de c : ";
    cin >> c;

    solutions = solveur(a, b, c);

    int number_of_solutions = solutions.size();
    switch (number_of_solutions) {
    case 0:
        cout << "Pas de solutions" << endl;
        break;
    case 1:
        cout << "L'équation a une solution unique: X = " << solutions[0] << endl;
        break;
    case 2:
        cout << "L'équation a deux solutions: X1 = " << solutions[0] << "; X2 = " << solutions[1] << endl;
        break;
    }
    return 0;

}


vector<float> solveur(const float& a, const float &b, const float &c){
    vector<float> result;
    float discriminant = b*b-4*a*c;
    if(abs(discriminant)<0.00001){
        result.push_back(-b/(2*a));
    } else if(discriminant > 0){
        result.push_back(-b-sqrt(discriminant)/(2*a));
        result.push_back(-b+sqrt(discriminant)/(2*a));
    }
    return result;
}