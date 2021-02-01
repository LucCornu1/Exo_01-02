#pragma once

class CPoint
{
private:
	int m_nX, m_nY;

public:
	// Constructeur
	CPoint(int = 0, int = 0);

	// Destructeur
	~CPoint();


	// Fonctions membres
	CPoint operator+(CPoint);


	// Fonctions amies
	friend int operator==(CPoint, CPoint);
};