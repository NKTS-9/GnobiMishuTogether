#ifndef ANIME_H
#define ANIME_H

#include <literatura.h>


class anime : public literatura
{
    public:
        anime();
        ~anime();

    void outputTheData();
	void setCount(int val);

    protected:

    private:
int time;
};

#endif // ANIME_H
