#pragma once
#include "Piece.h"

class Roi : public Piece {
public:
	Roi(bool couleur);
private:
	void deplacement();
};