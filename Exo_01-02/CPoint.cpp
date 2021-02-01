#pragma once
#include "CPoint.h"

// Constructeur
CPoint::CPoint(int nX, int nY)
{
	this->m_nX = nX;
	this->m_nY = nY;
}

// Destructeur
CPoint::~CPoint()
{
	// Destructeur
}


// Fonctions membres
CPoint CPoint::operator+(CPoint pt)
{
	return CPoint(this->m_nX + pt.m_nX, this->m_nY + pt.m_nY);
}

// Fonctions amies
int operator==(CPoint a, CPoint b)
{
	return a.m_nX == b.m_nX && a.m_nY == b.m_nY;
}