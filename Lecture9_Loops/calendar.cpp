#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_calendar(int n_year, int f_day);

int main(){

    // Ask user for a year
    unsigned int year {};
    cout << "Enter a year: ";
    cin >> year;

    if (year < 0){
        cout << "Year not valid";
        return 1;
    }

    // Ask user for the first day of the year
    unsigned int first_day {};
    cout << "Enter the first day of the year [1: Monday, ... 7: Sunday]: ";
    cin >> first_day;

    if (first_day < 1 || first_day > 7){
        cout << "Day not valid";
        return 1;
    }

    print_calendar(year, first_day);
    return 0;
}

int print_month(string month, int days, int first_day){
    cout << "Mon  Tue  Wed  Thu  Fri  Sat  Sun" << endl;
    for (int i {0}; i < first_day - 1; i++){
        cout << "     ";
    }
    for (int j{1}; j <= days; j++){
        if (j < 10){
            cout << j << "    ";
        }
        else{
            cout << j << "   ";
        }
        
        if ((j + first_day - 1) % 7 == 0){
            cout << "" << endl;
        } 

    }
    cout << "\n\n" << endl;
    int last_day = (first_day + days) % 7;
    return last_day;
}

bool is_leapyear(int n_year){
    if (n_year % 4 == 0 && n_year % 100 != 0){
        return true;
    }
    return false;
}

void print_calendar(int n_year, int f_day){
    cout << "Calendar for 2020" << endl;

    vector<string> months_names {"January", "February", "March", "April", "May", "June", "July", 
                                 "August", "September", "October", "November", "December"};

    vector<int> months_len {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
    if (is_leapyear(n_year)){
        months_len[2] += 1;
    }

    for (int i {0}; i < 12; i++){
        cout << "--" << months_names[i] << " " << n_year << "--" << endl;
        int last_day = print_month(months_names[i], months_len[i], f_day);

        f_day = last_day;
    }
}