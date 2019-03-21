#pragma once
#include "Position.h"

class Piece {
protected:
	string _nom; // Utile pour la biblio graphique
	bool _couleur; // True = blanc, false = noir
	bool _pieceDeplace; // True = d�plac�e, false = non d�plac�e
public:
	Piece(bool couleur);

	void setPieceDeplace(); // Met la valeur pieceDeplace � true

	
	bool getCouleur();
	bool getPieceDeplace();

	void cliquer(); // Permet de d�tecter qu'une pi�ce est cliqu�e

	bool verificationCouleur(); // V�rifie si la pi�ce cibl�e est mangeable
};