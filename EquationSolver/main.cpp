// EquationSolver.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
using namespace std;

float solveur(const float& a, const float &b, const float &c);

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

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
