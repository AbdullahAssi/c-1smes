#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize the multi-dimensional array
    string vehicles[10][4] = {
        {"Defender", "Land Rover", "2010", "5824862"},
        {"Land Cruiser", "Toyota", "2018", "843000"},
        {"Civic X", "Honda", "2020", "550570"},
        {"Swift", "Suzuki", "2015", "590437"},
        // Add more entries for the remaining vehicles
    };

    // Display the data for all vehicles
    cout << "Car Name" << "\t" << "Manufacturer" << "\t" << "Model" << "\t" << "Mileage" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            cout << vehicles[i][j] << "\t\t";
        }
        cout << endl;
    }

    // Find the car with the maximum mileage
    int maxMileage = 0;
    string maxCar = "";
    for (int i = 0; i < 10; i++) {
        int mileage = stoi(vehicles[i][3]);
        if (mileage > maxMileage) {
            maxMileage = mileage;
            maxCar = vehicles[i][0];
        }
    }
    cout << "Car with Maximum Mileage : " << maxCar << " , " << maxMileage << " miles " << endl;
    // Find the car with the minimum mileage
    int minMileage = INT_MAX;
    string minCar = "";
    for (int i = 0; i < 10; i++) {
        int mileage = stoi(vehicles[i][3]);
        if (mileage < minMileage) {
            minMileage = mileage;
            minCar = vehicles[i][0];
        }
    }
    cout << "Car with Minimum Mileage : " << minCar << " , " << minMileage << " miles " << endl;
    return 0;
}

