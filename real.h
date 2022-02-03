#pragma once 

class Real {
private:
	double stack;
	int dol;
	int cycle;
	int hogu;
	double porb = 0.007;
public:
	Real(int dol);
	void gatcha(int times);
	int get_cycle();
	void truck();
	int get_truck();
	void set_dol(int dol);
};