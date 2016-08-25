#include "zoo.h"

namespace p {

	zoo::zoo(void)
	{
	}


	zoo::~zoo()
	{
	}
	void zoo::setZiv(char* a) {
		Ziv = a;
	}
	char* zoo::getZiv() {
		return Ziv;
	}
	void zoo::setPol(char* b) {
		Pol = b;
	}
	char* zoo::getPol() {
		return Pol;
	}
	void zoo::setname(char* c) {
		name = c;
	}
	char* zoo::getname() {
		return name;
	}
	ui zoo::setmoney(ui d) {
		money = d;
		return money;
	}
	ui zoo::getmoney() {
		return money;
	}
	ui zoo::setscore(ui e) {
		score = e;
		return score;
	}
	ui zoo::getscore() {
		return score;
	}
}