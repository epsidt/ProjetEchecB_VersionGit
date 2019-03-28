#pragma once
#include "Piece.h"

class Pion : public Piece {
public:
	Pion(bool couleur);
private:
	void deplacement();
};