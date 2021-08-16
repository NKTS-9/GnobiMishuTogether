#include "anime.h"

anime::anime()
{
   time = 30;
}

anime::~anime() {}

void anime::outputTheData() {
	if (isAvailable) {
		std::cout << "Anime (id: " << id << ") suschestvuet, year: " << year << std::endl;
	}
	else {
		std::cout << "Anime (id: " << id << ") ne suschestvuet, year: " << year << std::endl;
	}
}

void anime::setCount(int val) {
	time = val;
}
