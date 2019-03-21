#pragma once
#include "Position.h"

class Piece {
protected:
	string _nom; // Utile pour la biblio graphique
	bool _couleur; // True = blanc, false = noir
	bool _pieceDeplace; // True = déplacée, false = non déplacée
public:
	Piece(bool couleur);

	void setPieceDeplace(); // Met la valeur pieceDeplace à true

	
	bool getCouleur();
	bool getPieceDeplace();

	void cliquer(); // Permet de détecter qu'une pièce est cliquée

	bool verificationCouleur(); // Vérifie si la pièce ciblée est mangeable
};