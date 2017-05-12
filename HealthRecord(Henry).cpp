/* NAME: Henry Nguyen
	COURSE: COMP 155
	EXERCISE NUMBER: 3.17 */



#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>	//will be used for clearing console
#include "HealthRecord(Henry).h"




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
		
		void HeartRates :: setGender(string genderInput) {
			
			gender = genderInput;
		}

		string HeartRates :: getGender() const {
		
			return gender;
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
		
		void HeartRates :: setBMI(double heightInput, double weightInput ) {
			
			bmi = (weightInput * 703)/(heightInput * heightInput);
		}
		
		double HeartRates :: getBMI() const{
			
			return bmi;
		}
		
		void HeartRates :: setHeight(double heightInput) {
			
			height = heightInput;
		}

		double HeartRates :: getHeight() const{
			
			return height;
		}
		
		void HeartRates :: setWeight(double weightInput) {
			
			weight = weightInput;
		}

		double HeartRates :: getWeight() const{
			
			return weight;
		}
int main() {
	

	HeartRates myHeartRate;	//HeartRates object myHeartRate
	string fName;		//variables for input
	string lName;
	string genderInput;
	int currentDay;
	int currentMonth;
	int currentYear;
	int day;
	int month;
	int year;
	int maxHeartRate;
	double heightInput;
	double weightInput;

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
	
	
	cout << "Enter your gender: ";
	getline(cin, genderInput);
	myHeartRate.setGender(genderInput);
	system("CLS");
	
	cout << "Enter your height (in inches): ";
	cin >> heightInput;
	system("CLS");
	
	cout << "Enter your weight (in pounds): ";
	cin >> weightInput;
	system("CLS");
	
	myHeartRate.setBMI(heightInput, weightInput);
	myHeartRate.setHeight(heightInput);
	myHeartRate.setWeight(weightInput);
	
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
	cout << "Your gender is: " << myHeartRate.getGender() << endl;
	cout << "Your height is: " << myHeartRate.getHeight() << endl;
	cout << "Your weight is: " << myHeartRate.getWeight() << endl;
	cout << "Your BMI index is: " << myHeartRate.getBMI() << endl;
	cout << "BMI VALUES" << endl << "Underweight: " << setw(10) << "less than 18.5" << endl
		<< "Normal: " << setw(20) << "between 18.5 and 24.9" << endl
		<< "Overweight: " << setw(10) << "between 25 and 29.9" << endl
		<< "Obese: " << setw(20) << "between 30 or greater" << endl;
	
	
} // end

