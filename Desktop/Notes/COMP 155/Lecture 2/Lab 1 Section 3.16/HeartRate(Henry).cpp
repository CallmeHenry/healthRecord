/* NAME: Henry Nguyen
	COURSE: COMP 155
	EXERCISE NUMBER: 3.16 */



#include <iostream>
#include <string>
#include <cstdlib>	//will be used for clearing console
#include "HeartRate(Henry).h"




using namespace std;




		void HeartRates :: setFirstName(string fName) {		//member function - mutator
			
			firstName = fName;
			
		}
		
		string HeartRates :: getFirstName() const {		//member function - accessor
			
			return firstName;
			
		}
	
		void HeartRates :: setLastName(string lName) {
			
			lastName = lName;
		}
		
		string HeartRates :: getLastName() const {
		
			return lastName;
		}


		void HeartRates :: setAge(int currentDay, int currentMonth, int currentYear, int day, int month, int year ) {
			
			if (currentDay >= day && currentMonth >= month) {		// if it's past your birthday
				age = (currentYear - year);							//then current year - birth year
			} 													
			else {
				
				age = (currentYear - year) - 1;			//if it isn't past your birthday, -1
			}
		}	
		
		int HeartRates :: getAge() const {		//accessor
			
			return age;
		}
		
		
		int HeartRates :: getMaximumHeartRate () {		//return type integar. return the value of maxheartrate
			
			maxHeartRate = 220 - age;
			
			cout << "Your maximum heart rate is " << maxHeartRate << endl;
		}
		
		int HeartRates :: getTargetHeartRate() {		//return type integar. min and max of target heart rate
			
			 targetMin = 0.5*maxHeartRate;
			 targetMax = 0.85*maxHeartRate;
			 
			 cout << "Your target heart rate is between " << targetMin << " and " << targetMax << endl;
		}
		


int main() {
	

	HeartRates myHeartRate;	//HeartRates object myHeartRate
	string fName;		//variables for input
	string lName;
	int currentDay;
	int currentMonth;
	int currentYear;
	int day;
	int month;
	int year;
	int maxHeartRate;

	cout << "Enter your first name: ";
	getline(cin, fName);
	cout << endl;
	myHeartRate.setFirstName(fName);		//passing parameter to member function setFirstName
	system("CLS");
	cout << "Enter your last name: ";
	getline(cin, lName);
	cout << endl;
	myHeartRate.setLastName(lName);	
	system("CLS");	//clear console
	
	cout << "Please enter the current date (numerals only)" << endl;
	cout << "Day: ";
	cin >> currentDay;	
	cout << endl;
	cout << "Month: ";
	cin >> currentMonth;
	cout << endl;
	cout << "Year: ";
	cin >> currentYear;
	cout << endl;
	system("CLS");
	
	cout << "Please enter your date of birth (numerals only)" << endl;
	cout << "Day: ";
	cin >> 	day;
	cout << endl;
	cout << "Month: ";
	cin >> month;
	cout << endl;
	cout << "Year: ";
	cin >> year;
	cout << endl;
	myHeartRate.setAge(currentDay, currentMonth, currentYear, day, month, year);
	system("CLS");	
	
	cout << "Your first name: " << myHeartRate.getFirstName() << endl;	//calling functions
	cout << "Your last name: " <<	myHeartRate.getLastName() << endl;
	cout << "Your age is: " <<	myHeartRate.getAge()<< endl; 
	myHeartRate.getMaximumHeartRate();
	myHeartRate.getTargetHeartRate();
	
	
} // end

