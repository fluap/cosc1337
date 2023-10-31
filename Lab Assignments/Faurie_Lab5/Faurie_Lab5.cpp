#include<iostream>
#include<iomanip>
#include<string>


using namespace std;


class waterConsumption {
    private:
        int monthly_consumption_amount[12];

    public:
        string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};;
        //constructor

        void input_data() {
            int input;
            for (int i = 0; i < 12; i++) {
                cout << "Enter consumption for " << months[i] << ": ";
                cin >> input;
                //input validation
                if (cin.fail() || input < 0) {
                    cout << "That's not a valid number. \n";
                    cin.clear();
                    cin.ignore();
                    i--; 
                }
                else {
                    monthly_consumption_amount[i] = input;
                }
            }
        }

        void print_headers() {
            int year;
            cout << "Enter report year: ";
            cin >> year;
            if (cin.fail() || year < 2005 || year > 2020) {
                cout << "Invalid year. Must be between 2005 and 2020. \n";
                print_headers();
            }
            else {
                cout << year << " Consumption Report for Paris, Texas \n\n";
                cout << setw(22) << left << "Month";
                cout << "Consumption in CCF \n";
                cout << "****************************************\n";
            }

        }

        void display_consumption() {
            for (int i = 0; i < 12; i++) {
                cout << setw(22) << left << months[i];
                cout << monthly_consumption_amount[i] << "\n";
            }
        }

        void get_lowest_consumption() {
            int lowest = monthly_consumption_amount[0];
            int lowest_index = 0;
            for (int i = 0; i < 12; i++) {
                if (monthly_consumption_amount[i] < lowest) {
                    lowest = monthly_consumption_amount[i];
                    lowest_index = i;
                }
            }
            cout << "The lowest consumption was in " << months[lowest_index] << " with " << lowest << " CCF \n";
        }

        void get_highest_consumption() {
            int highest = monthly_consumption_amount[0];
            int highest_index;
            for (int i = 0; i < 12; i++) {
                if (monthly_consumption_amount[i] > highest) {
                    highest = monthly_consumption_amount[i];
                    highest_index = i;
                }
            }
            cout << "The highest consumption was in " << months[highest_index] << " with " << highest << " CCF \n";
        }

        void get_average_consumption() { 
            int average;
            int total;
            for (int i = 0; i < 12; i++) {
                total += monthly_consumption_amount[i];
            }

            average = static_cast<float>(total) / 12; //Keeping as int due to sample output.
            cout << "The total consumption for the year: " << total << " CCF \n";
            cout << "The average consumption for the year: "<< fixed << setprecision(2) << average << " CCF \n";
        }
};


int main(){
    waterConsumption first_report; //Im using an object to store the arrays since c++ functions cant return arrays.
    first_report.input_data();              //1
    first_report.print_headers();           //2
    first_report.display_consumption();     //3
    first_report.get_lowest_consumption();  //4
    first_report.get_highest_consumption(); //5
    first_report.get_average_consumption(); //6
}
