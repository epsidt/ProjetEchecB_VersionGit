#include "Case.h"

Case::Case(Piece *unePiece, Position *unePosition, bool couleur)
{
	_unePiece = unePiece;
	_unePosition = unePosition;
	_couleur = couleur;
	_vide = false;
}

Case::Case(Position *unePosition, bool couleur)
{
	_unePosition = unePosition;
	_couleur = couleur;
	_vide = true;
}

void Case::ajouterPiece(Piece *unePiece)
{
	_unePiece = unePiece;
}

void Case::setCouleur(int couleur)
{
	_couleur = couleur;
}

void Case::setVide(bool vide)
{
	_vide = vide;
}

bool Case::getVide()
{
	return _vide;
}