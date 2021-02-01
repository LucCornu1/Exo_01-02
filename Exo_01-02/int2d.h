#pragma once

class int2d
{
protected:
	int* m_nAdr;
	int m_nMinX;
	int m_nMinY;
	int m_nMaxX;
	int m_nMaxY;

public:
	// Constructeur
	int2d(int = 3, int = 3);

	// Destructeur
	~int2d();


	// Fonctions membres
	int& operator()(int, int);
};