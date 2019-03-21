#include "Joueur.h"

Joueur::Joueur()
{
	_joueur = true;
}

void Joueur::setJoueur(bool joueur)
{
	_joueur = joueur;
}

bool Joueur::getJoueur()
{
	return _joueur;
}
