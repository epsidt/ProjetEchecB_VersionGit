#include "Piece.h"

Piece::Piece(bool couleur, int positionX, int positionY )
{
	_couleur = couleur;
	_pieceDeplace = false;
}

void Piece::setPositionX(int positionX)
{
}

void Piece::setPositionY(int positionY)
{
}

bool Piece::getCouleur()
{
	return _couleur;
}

bool Piece::getPieceDeplace()
{
	return _pieceDeplace;
}

int Piece::getPositionX()
{
	return 0;
}

int Piece::getPositionY()
{
	return 0;
}

void Piece::setPieceDeplace()
{
	_pieceDeplace = true;
}

void Piece::deplacement()
{

}