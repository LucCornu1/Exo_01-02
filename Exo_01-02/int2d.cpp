#pragma once
#include "int2d.h"
#include <iostream>

using namespace std;

// Constructeur
int2d::int2d(int maxX, int maxY)
{
	this->m_nMinX = 0;
	this->m_nMinY = 0;
	this->m_nMaxX = maxX;
	this->m_nMaxY = maxY;
	this->m_nAdr = new int[this->m_nMaxX * this->m_nMaxY];

	for (int i = m_nMinX; i < this->m_nMaxX; i++)
	{
		this->m_nAdr[i] = 0;
	}
}

// Destructeur
int2d::~int2d()
{
	delete this->m_nAdr;
}


// Fonctions membres
 int& int2d::operator()(int X, int Y)
{
	if (X < m_nMinX || X > this->m_nMaxX)
	{
		X = m_nMinX;
	}

	if (Y < m_nMinY || Y > this->m_nMaxY)
	{
		Y = m_nMinY;
	}

	int* p;

	return *(this->m_nAdr + X * this->m_nMaxY + Y);
}