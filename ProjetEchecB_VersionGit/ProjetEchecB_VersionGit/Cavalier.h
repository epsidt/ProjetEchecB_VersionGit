#pragma once
#include "Piece.h"

class Cavalier : public Piece {
public:
	Cavalier(bool couleur);
private:
	void deplacement();
};