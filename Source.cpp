//Source.cpp
#include "Progression.h"
#include "Geometricprogression.h"
#include "Arithmeticprogression.h"
#include <iostream>
using namespace std;

int main() {
	Progression *pr[2];
	pr[0] = new Geometricprogression();
	pr[1] = new Arithmeticprogression();
	cout << pr[0]->sumoftheprogression(8)<< endl;
	cout << pr[1]->sumoftheprogression(2);
};