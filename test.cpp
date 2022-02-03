#include "test.h"
#include "RandomPick.h"

Test::Test(int dol)
	:stack(0),
	dol(dol),
	cycle(0),
	hogu(0),
	porb(0.007)
{}

void Test::gatcha(int times) {
	hogu = 0;
	cycle = 0;
	for (int i = 0;i < times;i++) {
		if (stack == 0 && dol < 160) {
			cycle = i;
			return;
		}
		else if(dol < 160)
			truck();

		this->stack++;
		this->dol -= 160;

		if (RandomPick(this->porb)||stack>=65) {
			stack = 0;
		}
	}
	cycle = times;
}

void Test::truck() {
	this->dol += 8080;
	hogu++;
}

int Test::get_cycle() {
	return this->cycle;
}

int Test::get_truck() {
	return this->hogu;
}
void Test::set_dol(int dol) {
	this->dol = dol;
}