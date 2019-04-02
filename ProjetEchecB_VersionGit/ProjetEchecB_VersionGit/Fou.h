#pragma once
#include "Piece.h"

class Fou : public Piece {
public:
	Fou(bool couleur, int positionX, int positionY);
private:
	
	void deplacement();
};