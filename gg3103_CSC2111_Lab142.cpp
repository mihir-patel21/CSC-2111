#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class invalidHr : public exception {
        const char * what () const throw () {
                return "Invalid Hours";
        }
};

class invalidMin : public exception {
        const char * what () const throw () {
                return "Invalid Minutes";
        }
};

class invalidSec : public exception {
        const char * what () const throw () {
                return "Invalid Seconds";
        }
};

int convertMinutes(int min){
        if (min < 60 && min > 0)
                        return min;
        throw invalidMin();
}

int convertSeconds(int sec){
        if (sec < 60 && sec > 0)
                return sec;
        throw invalidSec();
}

int convertHours(int hour, string meridian){
        if (hour > 0 && hour < 13 && meridian =="PM")
                return (hour + 12)%24;
        if (hour > 0 && hour < 13 && meridian =="AM")
                return hour;
        
        throw invalidHr();
}

int main(){     
        
        try {
                int hours, minutes, seconds;
                string meridian;
                cout << "Enter Hours    :" ;
                cin >> hours;
                cout << "Enter Minutes  :" ;
                cin >> minutes;
                cout << "Enter Seconds  :" ;
                cin >> seconds;
                cout << "Enter (AM/PM)  :" ;
                cin >> meridian;
                hours = convertHours(hours, meridian);
                minutes = convertMinutes(minutes);
                seconds = convertSeconds(seconds);
                cout << hours <<":"<< minutes <<":"<< seconds << endl;
                
        } catch (const char* msg) {
        cerr << msg << endl;
        }
        return 1;
}
