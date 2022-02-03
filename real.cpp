#include "real.h"
#include "RandomPick.h"

Real::Real(int dol)
	:stack(0),
	dol(dol),
	cycle(0),
	hogu(0),
	porb(0.007)
{}

void Real::gatcha(int times) {
	hogu = 0;
	cycle = 0;
	this->porb = 0.007;
	for (int i = 0;i < times;i++) {
		if (stack == 0 && dol < 160) {
			cycle = i;
			this->porb = 0.007;
			return;
		}
		else if (dol < 160)
			truck();

		if (stack == 64)
			this->porb = 0.15;
		if (stack > 64)
			this->porb += 0.07;

		this->stack++;
		this->dol -= 160;

		if (RandomPick(this->porb)||stack>=80) {
			stack = 0;
		}
	}
	cycle = times;
	this->porb = 0.007;
}

void Real::truck() {
	this->dol += 8080;
	hogu++;
}

int Real::get_cycle() {
	return this->cycle;
}

int Real::get_truck() {
	return this->hogu;
}

void Real::set_dol(int dol) {
	this->dol = dol;
}