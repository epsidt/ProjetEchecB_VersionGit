#include "Position.h"

Position::Position(int positionX, int positionY)
{
	_positionX = positionX;
	_positionY = positionY;
}

void Position::setPositionX(int positionX)
{
	_positionX = positionX;
}

void Position::setPositionY(int positionY)
{
	_positionY = positionY;
}

int Position::getPositionX()
{
	return _positionX;
}

int Position::getPositionY()
{
	return _positionY;
}