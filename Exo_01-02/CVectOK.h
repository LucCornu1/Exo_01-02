#pragma once
#include "CVect.h"

class CVectOK : public CVect
{
public:
	// Constructeur
	CVectOK(int = 3);

	// Constructeur par copie
	CVectOK(const CVectOK&);


	// Surcharge opérateurs
	CVectOK& operator=(const CVectOK&);
};