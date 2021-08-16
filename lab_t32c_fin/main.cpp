#include <iostream>
#include "literatura.h"
#include "anime.h"
#include "manga.h"
#include "ranobe.h"

using namespace std;

void Calculation(literatura* lit[6]) {
	int max = 0, num = 0;
	for (int i = 0; i < 5; ++i) {
		if (lit[i]->year > max) {
			max = lit[i]->year;
			num = i;
		}
	}
	std::cout << "Samaya molodaya literatura: ";
	lit[num]->outputTheData();
	std::cout << std::endl;
}

void ChangeTheArray(literatura* lit[6]) {
	std::cout << "Nu i kakuyu poziciyu menyat' budem? \n>";
	int p;
	std::cin >> p;
	--p;
	std::cout << "Enter ID, availability(1 or 0) and year\n>";
	int _id, _av, _year;
	std::cin >> _id >> _av >> _year;
	lit[p]->setData(_id, _av, _year);
}

void OutputTheArray(literatura* lit[6]) {
	std::cout << "------------------------------------\n";
	for (int i = 0; i < 5; i++)
	{
		lit[i]->outputTheData();
	}
	std::cout << "------------------------------------\n";
}

void Menu(literatura* lit[6]) {
	std::cout << "Chto nado? \n1.Output The Array. \n2.Change The Array. \n3.Parameter calculation. \n4.Exit the menu. \n>";
	int c;
	std::cin >> c;

	switch (c)
	{
	case 1:
		OutputTheArray(lit);
		Menu(lit);
		return;

	case 2:
		ChangeTheArray(lit);
		Menu(lit);
		return;

	case 3:
		Calculation(lit);
		Menu(lit);
		return;

	case 4:
		return;

	default:
		std::cout << "Achivement unlocked: Ti durachok ili da? \n";
		Menu(lit);
		return;
	}
}

int main()
{
    anime a1;
    anime a2;
    manga m1;
    manga m2;
    ranobe r1;
    ranobe r2;

    literatura* lit[6];

    lit[0] = &a1;
    lit[1] = &a2;
    lit[2] = &m1;
    lit[3] = &m2;
    lit[4] = &r1;
    lit[5] = &r2;

    Menu(lit);
    return 0;
}
