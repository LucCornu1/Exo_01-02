#pragma once
#include <iostream>
#include "CPointCol.h"
#include "CVectB.h"
#include "int2DB.h"
#include "CVectOK.h"

using namespace std;


int main()
{
	// Exercice 105
	cout << "Exercice 105" << endl;

	CPointCol a(10, 10, 5), b(10, 10, 8);
	CPoint p(5, 5);

	// Question a
	if (a == b)
	{
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}

	if (a == p)
	{
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}

	if (p == a)
	{
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}

	if (a == 5) // Vérifie le x de a
	{
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}

	if (5 == a) // Vérifie le x de a
	{
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}


	// Question b
	CPoint x;

	x = a + b;
	x = a + p;
	x = p + a;
	x = a + 5;
	// x = 5 + a;

	cout << endl << endl;


	// Exercice 106
	cout << "Exercice 106" << endl;
	CVectB Vect(1, 6);
	Vect[0] = 1;
	Vect[2] = 11;
	Vect[3] = 33;

	cout << Vect[1] << endl;
	cout << Vect[2] << endl;
	cout << Vect[3] << endl;

	cout << endl << endl;


	// Exercice 107
	cout << "Exercice 107" << endl;
	int2DB n2D(2, 10, 2, 10);

	n2D(0, 0) = 1;
	n2D(2, 3) = 2;
	n2D(2, 4) = 3;

	cout << n2D(2, 2) << endl;
	cout << n2D(2, 3) << endl;
	cout << n2D(2, 4) << endl;

	cout << endl << endl;


	// Exercice 108
	cout << "Exercice 108" << endl;
	CVectOK VectO;
	CVectOK VectK(5);

	CVectOK VectIS(VectK);
	VectO = VectK;

	VectO[4] = 31;

	cout << VectO[4] << endl;

	return 0;
}