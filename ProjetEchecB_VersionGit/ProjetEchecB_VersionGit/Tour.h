#pragma once
#include "Piece.h"

class Tour : public Piece {
public:
	Tour(bool couleur);
private:
	void deplacement();
};