/*
 *        File: temps.cc
 *      Author: Alex Vano
 *        Date: 2/16/2024
 * Description: While loop for recording high and low temperatures
 */

#include<iostream> 
#include<cstdlib>

using namespace std;

int main()
{
    //variables
    int temp;
    int high;
    int low;

    //Ask the first 2 times for the baseline highs and lows
    cout << "Enter the highest of the day: " << endl;
        cin >> temp;
        high = temp;
    cout << "Enter the lowest of the day: " << endl;
        cin >> temp;
        low = temp;

    //Start the loop with -100 breaking the loop
    while (temp != -100) {
        cout << "Enter the highest of the day: " << endl;
        cin >> temp;
        if (temp > high)
            high = temp;
        if (temp == -100)
            break;

        cout << "Enter the lowest of the day: " << endl;
        cin >> temp;
        if (temp > high)
            high = temp;
        if (temp == -100)
            break;
    }

    //Display the highest and lowest temperatures
    cout << "Highest Temperature: " << high << endl;
    cout << "Lowest Temperature: " << low << endl;
}