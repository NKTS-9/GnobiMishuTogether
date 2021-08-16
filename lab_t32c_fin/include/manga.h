#ifndef MANGA_H
#define MANGA_H

#include <literatura.h>


class manga : public literatura
{
    public:
        manga();
        ~manga();

    void outputTheData();
	void setCount(int val);

    protected:

    private:
     int pages;

};

#endif // MANGA_H
