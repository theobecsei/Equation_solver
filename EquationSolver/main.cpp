// EquationSolver.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
using namespace std;

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
