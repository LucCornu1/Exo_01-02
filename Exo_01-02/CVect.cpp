#pragma once
#include <iostream>
#include "CVect.h"

using namespace std;

// Constructeur
CVect::CVect(int nMax)
{
	this->m_nMin = 0;
	this->m_nV = new int[this->m_nMax = nMax];

	// cout << "Creation objet de type vect" << endl;
}

// Destructeur
CVect::~CVect()
{
	delete this->m_nV;
	// cout << "Destruction objet de type vect" << endl;
}


// Fonctions membres
int& CVect::operator[](int nI)
{
	if ((nI >= m_nMin) && (nI < this->m_nMax))
	{
		return this->m_nV[nI];
	}
	else {
		cout << "Vous etes hors du tableau" << endl;
		return this->m_nV[this->m_nMin];
	}
}


// Get (assesseurs)
int CVect::getMin()
{
	return m_nMin;
}

// Set (mutateurs)
void CVect::setMin(int nMin)
{
	this->m_nMin = nMin;
}