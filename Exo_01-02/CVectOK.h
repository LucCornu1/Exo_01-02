#pragma once
#include "CVect.h"

class CVectOK : public CVect
{
public:
	// Constructeur
	CVectOK(int = 3);

	// Constructeur par copie
	CVectOK(const CVectOK&);


	// Surcharge op�rateurs
	CVectOK& operator=(const CVectOK&);
};