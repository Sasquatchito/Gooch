#include "MathFunctions.h"

int add(int num1, int num2) {
	return num1 + num2;
}

int exponent(int base, int exp) {
	int result = base;
	for (int i = 1; i < exp; i++) {
		result = result * base;
	}
	return result;
}

