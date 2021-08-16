#include "ranobe.h"

ranobe::ranobe()
{
   sumbols = 1000;
}

ranobe::~ranobe() {}

void ranobe::outputTheData() {
	if (isAvailable) {
		std::cout << "Ranobe (id: " << id << ") suschestvuet, year: " << year << std::endl;
	}
	else {
		std::cout << "Ranobe (id: " << id << ") ne suschestvuet, year: " << year << std::endl;
	}
}

void ranobe::setCount(int val)
{
	sumbols = val;
}
