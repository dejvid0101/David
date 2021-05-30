#ifndef _GAME_OF_LIFE_H_
#define _GAME_OF_LIFE_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class game_of_life {
private:
	bool polje[10][10];
	bool gen_rnd(int min,int max);
	bool gaga(int i,int j, bool polje[10][10]);
	int provjera(int i,int j,bool polje[10][10]);
	bool blabla(int o,bool k);


public:
	game_of_life();
	void sljedeca_generacija();
	void stvaranje();
	void iscrtaj();
	void iteracija();

};

#endif
