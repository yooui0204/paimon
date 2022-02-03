#pragma once 

class Test {
private:
	double stack;
	int dol;
	int cycle;
	int hogu;
	const double porb = 0.007;
public:
	Test(int dol);
	void gatcha(int times);
	int get_cycle();
	void truck();
	int get_truck();
	void set_dol(int dol);
};