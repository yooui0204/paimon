#include "test.h"
#include "real.h"
#include <iostream>
#include <string>

int main() {
	int redundancy_dol = 3000, repeat = 500;
	Test t(redundancy_dol);
	Real r(redundancy_dol);

	int max_t = -1, min_t = INT_MAX;
	int max_r = -1, min_r = INT_MAX;
	double sum_t = 0, sum_r = 0;

	for (int i = 0;i < repeat;i++) {
		t.gatcha(10000);
		r.gatcha(10000);

		std::cout << std::to_string(t.get_cycle())<<":"<< std::to_string(t.get_truck())<<std::endl;
		std::cout << std::to_string(r.get_cycle())<<":" << std::to_string(r.get_truck())<< std::endl;

		sum_t += t.get_cycle();
		sum_r += r.get_cycle();

		t.set_dol(redundancy_dol);
		r.set_dol(redundancy_dol);
	}

	std::cout << std::to_string(sum_t / repeat) << std::endl;
	std::cout << std::to_string(sum_r / repeat) << std::endl;
	return 0;
}