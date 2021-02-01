#pragma once
#include "CPointCol.h"

// Constructeur
CPointCol::CPointCol(int nX, int nY, int nColor) : CPoint(nX, nY)
{
	this->m_nColor = nColor;
}

// Destructeur
CPointCol::~CPointCol()
{
	// Destructeur
}