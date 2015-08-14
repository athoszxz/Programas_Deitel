
#include <iostream>

#include <iostream>


class Date
{
public:
//	Date(int, int, int);
	void setMesDate(int);
	void setDiaDate(int);
	void setAnoDate(int);
	void displayDate();

	int getMesDate();
	int getDiaDate();
	int getAnoDate();


private:
	int mesDate;
	int diaDate;
	int anoDate;
};
