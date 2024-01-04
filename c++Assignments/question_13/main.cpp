#include <iostream>

using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Overloading '>>' to accept time from the user
    friend istream& operator>>(istream& input, Time& t) {
        cout << "Enter time (hours minutes seconds): ";
        input >> t.hours >> t.minutes >> t.seconds;
        return input;
    }

    // Overloading '+' to add two different times
    Time operator+(const Time& other) const {
        Time result;
        int totalSeconds = (hours + other.hours) * 3600 + (minutes + other.minutes) * 60 + seconds + other.seconds;
        result.hours = totalSeconds / 3600;
        result.minutes = (totalSeconds % 3600) / 60;
        result.seconds = totalSeconds % 60;
        return result;
    }

    // Overloading '<<' to display the time in hours: mins: sec format
    friend ostream& operator<<(ostream& output, const Time& t) {
        output << t.hours << " hours " << t.minutes << " minutes " << t.seconds << " seconds";
        return output;
    }

    // Overloading '==' to check whether two times are equal or not
    bool operator==(const Time& other) const {
        return (hours == other.hours) && (minutes == other.minutes) && (seconds == other.seconds);
    }
};

int main() {
    Time time1, time2, result;

    // Overloading '>>' to accept time from the user
    cout << "Enter Time 1:\n";
    cin >> time1;

    cout << "Enter Time 2:\n";
    cin >> time2;

    // Overloading '+' to add two different times
    result = time1 + time2;
    cout << "Time 1 + Time 2 = " << result << endl;

    // Overloading '==' to check whether two times are equal or not
    if (time1 == time2) {
        cout << "Time 1 is equal to Time 2.\n";
    } else {
        cout << "Time 1 is not equal to Time 2.\n";
    }

    return 0;
}
