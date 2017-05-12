/* NAME: Henry Nguyen
	COURSE: COMP 155
	EXERCISE NUMBER: 3.16 */



#include <iostream>
#include <string>
#include <cstdlib>	//will be used for clearing console

using namespace std;


class HeartRates {
	

	public:		//public access specifier 

		void setFirstName(string);
		
		string getFirstName() const;
	

		void setLastName(string);
		
		string getLastName() const;


		void setAge(int currentDay, int currentMonth, int currentYear, int day, int month, int year );
		
		int getAge() const;
		
		
		int getMaximumHeartRate();
		
		int getTargetHeartRate();
		
	private:		//private access specifier
		
		string firstName;		//declaring all variables
		string lastName;
		int day;
		int month;
		int year;
		int currentDay;
		int currentMonth;
		int currentYear;
		int age;
		int maxHeartRate;
		int targetMin;
		int targetMax;
		
};

