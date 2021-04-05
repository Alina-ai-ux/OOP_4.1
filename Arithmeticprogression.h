//Arithmeticprogression.h
#include "Progression.h"
#pragma once
class Arithmeticprogression : public Progression {
	double a = 4;
	double d = 2;
public:
	double sumoftheprogression(int n) override {
		return n * (a + a + d*(n-1))/ 2;
	
	}
};