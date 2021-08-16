#ifndef RANOBE_H
#define RANOBE_H

#include <literatura.h>


class ranobe : public literatura
{
    public:
        ranobe();
        ~ranobe();

    void outputTheData();
	void setCount(int val);

    protected:

    private:
    int sumbols;
};

#endif // RANOBE_H
