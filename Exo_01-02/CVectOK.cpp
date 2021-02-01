#pragma once
#include "CVectOK.h"

// Constructeur
CVectOK::CVectOK(int nTaille) : CVect(nTaille)
{

}

// Constructeur par copie
CVectOK::CVectOK(const CVectOK& vect)
{
	this->m_nV = new int[this->m_nMax = vect.m_nMax];

	for (int i = 0; i < this->m_nMax; i++)
	{
		this->m_nV[i] = vect.m_nV[i];
	}
}


// Surcharge opérateurs
CVectOK& CVectOK::operator=(const CVectOK& vect)
{
	this->m_nMax = vect.m_nMax;
	this->m_nV = new int[this->m_nMax];

	for (int i = 0; i < this->m_nMax; i++)
	{
		this->m_nV[i] = vect.m_nV[i];
	}

	return *this;
}