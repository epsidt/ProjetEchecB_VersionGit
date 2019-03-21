#include "Piece.h"

Piece::Piece(bool couleur)
{
	_couleur = couleur;
	_pieceDeplace = false;
}

bool Piece::getCouleur()
{
	return _couleur;
}

bool Piece::getPieceDeplace()
{
	return _pieceDeplace;
}

void Piece::setPieceDeplace()
{
	_pieceDeplace = true;
}