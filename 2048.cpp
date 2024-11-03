#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> grille;

vector<int> deplacer(vector<int> ligne)
{

    // Obtenir uniquement les éléments non nuls
    vector<int> nonNuls;
    for (int i = 0; i < 4; i++)
    {
        if (ligne[i] != 0)
        {
            nonNuls.push_back(ligne[i]);
        }
    }

    // Ajouter 0 à la fin pour éviter les doubles sur le dernier élément
    nonNuls.push_back(0);

    // Fusionner les éléments, la gauche est fusionnée, la droite est zéro
    for (int i = 0; i < nonNuls.size(); i++)
    {
        if (nonNuls[i] == nonNuls[i + 1])
        {
            nonNuls[i] *= 2;
            nonNuls[i + 1] = 0;
        }
    }

    // Glisser vers la gauche
    vector<int> resultat;
    for (int i = 0; i < nonNuls.size(); i++)
    {
        if (nonNuls[i] != 0)
        {
            resultat.push_back(nonNuls[i]);
        }
    }

    // Remplir avec des zéros
    int casesVides = 4 - resultat.size();
    for (int i = 0; i < casesVides; i++)
    {
        resultat.push_back(0);
    }

    return resultat;
}

int main()
{
    // Initialiser la grille
    grille.resize(4);
    grille[0].resize(4);
    grille[1].resize(4);
    grille[2].resize(4);
    grille[3].resize(4);

    // Saisie de la grille
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> grille[i][j];
        }
    }

    int direction;
    cin >> direction;

    // Déplacer chaque ligne/colonne
    if (direction == 0)
    {
        // Gauche
        for (int i = 0; i < 4; i++)
        {
            grille[i] = deplacer(grille[i]);
        }
    }
    if (direction == 1)
    {
        // Haut
        for (int i = 0; i < 4; i++)
        {
            vector<int> colonne;
            colonne.resize(4);
            colonne[0] = grille[0][i];
            colonne[1] = grille[1][i];
            colonne[2] = grille[2][i];
            colonne[3] = grille[3][i];
            colonne = deplacer(colonne);
            grille[0][i] = colonne[0];
            grille[1][i] = colonne[1];
            grille[2][i] = colonne[2];
            grille[3][i] = colonne[3];
        }
    }
    if (direction == 2)
    {
        // Droite
        for (int i = 0; i < 4; i++)
        {
            reverse(grille[i].begin(), grille[i].end());
            grille[i] = deplacer(grille[i]);
            reverse(grille[i].begin(), grille[i].end());
        }
    }
    if (direction == 3)
    {
        // Bas
        for (int i = 0; i < 4; i++)
        {
            vector<int> colonne;
            colonne.resize(4);
            colonne[3] = grille[0][i];
            colonne[2] = grille[1][i];
            colonne[1] = grille[2][i];
            colonne[0] = grille[3][i];
            colonne = deplacer(colonne);
            grille[0][i] = colonne[3];
            grille[1][i] = colonne[2];
            grille[2][i] = colonne[1];
            grille[3][i] = colonne[0];
        }
    }

    // Afficher la grille
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << grille[i][j] << " ";
        }
        cout << endl;
    }
}
