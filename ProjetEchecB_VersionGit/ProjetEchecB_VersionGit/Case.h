#pragma once
#include "Piece.h"

class Case {
private:
	Piece _unePiece;
	bool _couleur; // True = blanc, false = noir
	bool _vide; // True = vide, false = pas vide

public:
	Case(bool couleur);

	bool getCouleur();
};