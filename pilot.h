#ifndef PILOT_H_
#define PILOT_H_
#include <iostream>
#include <conio.h>
#include <windows.h>

class Pilot
{
public:
	Pilot(unsigned short l = 50) : lvl(l) {}
	void lifting_button();
	void lowering_button();
	~Pilot() {}
private:
	unsigned short lvl;
};


#endif /* PILOT_H_ */
