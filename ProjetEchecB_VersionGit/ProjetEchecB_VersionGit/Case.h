#pragma once
#include "Pion.h"
#include "Roi.h"
#include "Reine.h"
#include "Tour.h"
#include "Cavalier.h"
#include "Fou.h"

class Case {
private:
	Piece *_unePiece;
	Position *_unePosition;
	int _couleur; // 1 = blanc, 2 = noir, 3 = vert
	bool _vide; // True = vide, false = pas vide

public:
	Case(Piece *unePiece, Position *unePosition, bool couleur);
	Case(Position *unePosition, bool couleur);

	void ajouterPiece(Piece *unePiece);
	void setCouleur(int couleur);
	void setVide(bool vide);

	bool getVide();
};