#pragma once
#include <iostream>

using namespace std;

class Position {
private:
	int _positionX;
	int _positionY;

public:
	Position(int positionX, int positionY);

	void setPositionX(int positionX);
	void setPositionY(int positionY);

	int getPositionX();
	int getPositionY();
};