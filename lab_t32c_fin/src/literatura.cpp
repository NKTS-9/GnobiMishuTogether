#include "literatura.h"
#include <iostream>

literatura::literatura()
{
   year = 1999;
}

literatura::~literatura() {}

void literatura::outputTheData() {
	if (isAvailable) {
		std::cout << "Name (id: " << id << ") suschestvuet, year: " << year << std::endl;
	}
	else {
		std::cout << "Name (id: " << id << ") ne suschestvuet, year: " << year << std::endl;
	}
}

void literatura::setData(int _id, bool _ava, int _year) {
	id = _id;
	isAvailable = _ava;
	year = _year;
}
