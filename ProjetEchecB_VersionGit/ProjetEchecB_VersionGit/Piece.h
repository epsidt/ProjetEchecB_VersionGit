#pragma once

class Piece {
protected:
	bool _couleur; // True = blanc, false = noir
	bool _pieceDeplace; // True = déplacée, false = non déplacée
	int _positionX;
	int _positionY;

public:

	Piece(bool couleur, int positionX, int positionY);

	void setPositionX(int positionX);
	void setPositionY(int positionY);

	int getPositionX();
	int getPositionY();

	void setPieceDeplace(); // Met la valeur pieceDeplace à true

	bool getCouleur();
	bool getPieceDeplace();

	void afficher(); // Affiche les pièces existentes
	virtual void deplacement(); // Classe virtuelle
	void cliquer(); // Permet de détecter qu'une pièce est cliquée

	bool verificationCouleur(); // Vérifie si la pièce ciblée est mangeable
};