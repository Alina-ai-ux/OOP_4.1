//Geometricprogression.h
#include "Progression.h"
#include <cmath>
#pragma once
class Geometricprogression : public Progression {
	double a = 4;
	double q = 3;
public:
	double sumoftheprogression(int n) override {
		return (a*(pow(q, n)- 1)) / (q - 1);

	}
};