/* NAME: Henry Nguyen
	COURSE: COMP 155
	EXERCISE NUMBER: 3.17 */

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

		void setGender(string);
		
		string getGender() const;
		
		void setAge(int currentDay, int currentMonth, int currentYear, int day, int month, int year );
		
		int getAge() const;
		
		
		int getMaximumHeartRate();
		
		int getTargetHeartRate();
		
		void setBMI(double heightInput, double weightInput);
		
		double getBMI() const;
		
		void setHeight(double heightInput);
		
		double getHeight() const;
		
		void setWeight(double weightInput);
		
		double getWeight() const;
		
	private:		//private access specifier
		
		string firstName;		//declaring all variables
		string lastName;
		string gender;
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
		double bmi;
		double height;
		double weight;
		
};

