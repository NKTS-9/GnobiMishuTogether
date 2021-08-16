#include "manga.h"
#include <iostream>

manga::manga()
{
   pages = 45;
}

manga::~manga()
{
}

void manga::outputTheData() {
	if (isAvailable) {
		std::cout << "Manga (id: " << id << ") suschestvuet, year: " << year << std::endl;
	}
	else {
		std::cout << "Manga (id: " << id << ") ne suschestvuet, year: " << year << std::endl;
	}
}

void manga::setCount(int val) {
	pages = val;
}
