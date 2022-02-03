#include "RandomPick.h"

bool RandomPick(double percent) {
	std::random_device rd;
	std::mt19937_64 mt(rd());

	std::bernoulli_distribution d(percent);

	return d(mt);
}