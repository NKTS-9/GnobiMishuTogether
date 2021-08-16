#include <iostream>
#ifndef LITERATURA_H
#define LITERATURA_H

using namespace std;

class literatura
{
    public:
        literatura();
        ~literatura();

    virtual void outputTheData();
	void setData(int _id, bool _ava, int _year);
	int year;


    protected:
        int id;
        bool isAvailable;

    private:
};

#endif // LITERATURA_H
