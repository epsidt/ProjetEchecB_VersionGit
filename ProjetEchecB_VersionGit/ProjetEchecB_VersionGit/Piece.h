#pragma once

class Piece {
protected:
	bool _couleur; // True = blanc, false = noir
	bool _pieceDeplace; // True = d�plac�e, false = non d�plac�e
	int _positionX;
	int _positionY;

public:

	Piece(bool couleur, int positionX, int positionY);

	void setPositionX(int positionX);
	void setPositionY(int positionY);

	int getPositionX();
	int getPositionY();

	void setPieceDeplace(); // Met la valeur pieceDeplace � true

	bool getCouleur();
	bool getPieceDeplace();

	void afficher(); // Affiche les pi�ces existentes
	virtual void deplacement(); // Classe virtuelle
	void cliquer(); // Permet de d�tecter qu'une pi�ce est cliqu�e

	bool verificationCouleur(); // V�rifie si la pi�ce cibl�e est mangeable
};