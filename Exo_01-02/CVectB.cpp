#pragma once
#include "CVectB.h"

// Constructeur
CVectB::CVectB(int nMin, int nMax) : CVect(nMax)
{
	this->setMin(nMin);
}

// Destructeur
CVectB::~CVectB()
{
	// Destructeur
}