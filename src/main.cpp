#include "calendar.hpp"

void calendar(int,int,int);
int main()
{
			char aw;

    		do{
    int day;
    int month;
    int year;
    
    cout << "---------- Input Date ----------" << endl;

    cout << "DAY: MONTH: YEAR: " << endl;//Input Date

    cin >> day >> month >> year ;

    assert(day<=31 && day >0 && month > 0 && month <= 12 && year >= 1900);//Assertion for date
    if(year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)){
	    if(month == 2){
		    assert(day >= 1 && day <= 29);
            }
    }
    	    else{
		    if(month == 2){
			    assert(day >= 1 && day <= 28);
		    }
            }
    calendar(day,month,year);//Function calendar() in calendar.cpp

 		cout << "Continue? (y or n) " << endl;//Asking for using again
    		cin >> aw;//Input answer
    		} 
		while (aw == 'y');
		return 0;


}

