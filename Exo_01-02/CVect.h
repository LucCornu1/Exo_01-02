#pragma once

class CVect
{
private:
	int* m_nV;
	int m_nMin;
	int m_nMax;

public:
	//Constructeur
	CVect(int max = 3);

	//Destructeur
	~CVect();


	//Fonctions membres
	int& operator[](int);


	// Get (assesseurs)
	int getMin();

	// Set (mutateurs)
	void setMin(int);
};