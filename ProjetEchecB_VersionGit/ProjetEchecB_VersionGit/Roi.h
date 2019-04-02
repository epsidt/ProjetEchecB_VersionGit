#pragma once
#include "Piece.h"

class Roi : public Piece {
public:
	Roi(bool couleur, int positionX, int positionY);
private:
	
	void deplacement();
};