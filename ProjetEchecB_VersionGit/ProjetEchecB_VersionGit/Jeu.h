#pragma once

using namespace std; 

class Jeu
{
private: 

public:
	Jeu();

	void initialisation();
	void afficherGagnant();
	void jouer();
	void finPartie();
	void verificationCase();
	void confirmationDeplacement();
	void tourDeJeu(); 
	void pat(); 
};
