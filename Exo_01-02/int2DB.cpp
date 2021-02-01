#pragma once
#include "int2DB.h"

// Constructeur
int2DB::int2DB(int nMinX, int nMaxX, int nMinY, int nMaxY) : int2d(nMaxX, nMaxY)
{
	this->m_nMinX = nMinX;
	this->m_nMinY = nMinY;

	for (int i = m_nMinX; i < this->m_nMaxX; i++)
	{
		this->m_nAdr[i] = 0;
	}
}

// Destructeur
int2DB::~int2DB()
{
	// Destructeur
}