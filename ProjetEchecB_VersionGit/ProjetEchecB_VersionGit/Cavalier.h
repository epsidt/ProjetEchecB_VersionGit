#pragma once
#include "Piece.h"

class Cavalier : public Piece {
public:
	Cavalier(bool couleur, int positionX, int positionY);
private:
	
	void deplacement();
};