#pragma once
#include "Piece.h"

class Reine : public Piece {
public:
	Reine(bool couleur, int positionX, int positionY);
private:
	
	void deplacement();
};