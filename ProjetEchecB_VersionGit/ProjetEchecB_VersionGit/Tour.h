#pragma once
#include "Piece.h"

class Tour : public Piece {
public:
	Tour(bool couleur);
	Tour(bool couleur, int positionX, int positionY);
	void deplacement();
	
};