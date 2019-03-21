#pragma once

class Joueur {
private:
	bool _joueur; // True = joueur 1, false = joueur 2

public:
	Joueur();

	void setJoueur(bool joueur);

	bool getJoueur();
};