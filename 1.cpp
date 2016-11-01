#include <iostream>
#include <string>

using namespace std;

class Date{
	private:
    	int day;
    	int month;
    	int year;

	public:
		Date (int day, int month, int year) {
			this -> day = day;
			this -> month = month;
			this -> year = year;
		}
		
		void setDay(int day) {
			this -> day = day;
		}
		
		int getDay(int day) {
			return day;
		}
		
		void setMonth(int month) {
			this -> month = month;
		}
		
		int getMonth(int month) {
			return month;
		}
		
		void setYear(int year) {
			this -> year = year;
		}
		
		int getYear(int year) {
			return year;
		}
		
		int ifDay(int) {
			if (day > 31 || day <= 0) {
				string error = "error";
				throw error;
				
				cout << error;
			}	
			return day;
		}
		
		int ifMonth(int) {
			if (month < 0 || month > 12) {
				string error = " Error ";
				throw error;
				
				cout << error;
			}	
			return month;
		}
};

int main() {
    int Day;
	int Month;
	int Year;
    string monthly[12]= {"January", "February" , "March", "April",
                         "May", "June", "July", "August", "September",
                         "October", "November", "December"};

    Date date(Day, Month, Year);
    
	cout << "Enter Date : ";
    cin >> Day;
		
	try {
		date.ifDay(date.getDay(Day)); 
	}
	catch(string error) {
		cout << error;
		cout << endl;
		exit (0);
	}
    
    cout << "Enter Month : ";
    cin >> Month;
		
	try {
		date.ifMonth(date.getMonth(Month)); 
	}
	catch(string error) {
		cout << error;
		cout << endl;
		exit (0);
	}
    
    cout << "Enter Year : ";
    cin >> Year;
	
	cout << endl;

   	cout << date.getDay(Day) << "/" << date.getMonth(Month) << "/" << date.getYear(Year) << endl;
   	cout << monthly[Month-1] << " " << date.getDay(Day) << "," << date.getYear(Year) << endl;
   	cout << date.getDay(Day) << " " << monthly[Month-1] << " " << date.getYear(Year) << endl;
}
