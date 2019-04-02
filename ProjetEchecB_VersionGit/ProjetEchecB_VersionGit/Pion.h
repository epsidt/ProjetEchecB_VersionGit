#pragma once
#include "Piece.h"

class Pion : public Piece {
public:
	Pion(bool couleur, int positionX, int positionY);
private:
	
	void deplacement();
};