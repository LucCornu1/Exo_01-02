#pragma once
#include "CPoint.h"

class CPointCol : public CPoint
{
private:
	int m_nColor;

public:
	// Constructeur
	CPointCol(int = 0, int = 0, int = 0);

	// Destructeur
	~CPointCol();


	// Fonctions membres
};