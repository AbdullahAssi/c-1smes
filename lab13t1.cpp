#include <iostream>
#include <fstream>
using namespace std;

struct student_Personel_Info {
    string name, fatherName, cnic, address, bloodGroup, contact;
    int age;
};

struct Student_Uni_Info {
    string regNo, dept, section, semester, batch;
    float cgpa;
};

int main() {

    ofstream outFile("studentdata.txt");

    if (!outFile) {
        cerr << "Error: File could not be opened." << endl;
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
        student_Personel_Info spi;
        Student_Uni_Info sui;

        cout << "Enter the personal information for student " << i+1 << endl;
        cout << "Name: ";
        getline(cin, spi.name);
        cout << "Father Name: ";
        getline(cin, spi.fatherName);
        cout << "CNIC: ";
        getline(cin, spi.cnic);
        cout << "Address: ";
        getline(cin, spi.address);
        cout << "Age: ";
        cin >> spi.age;
        cout << "Blood Group: ";
        cin >> spi.bloodGroup;
        cout << "Contact Number: ";
        cin >> spi.contact;

        cout << "Enter the university information for student " << i+1 << endl;
        cout << "Registration Number: ";
        cin >> sui.regNo;
        cout << "Department: ";
        cin >> sui.dept;
        cout << "Section: ";
        cin >> sui.section;
        cout << "Semester: ";
        cin >> sui.semester;
        cout << "Batch: ";
        cin >> sui.batch;
        cout << "CGPA: ";
        cin >> sui.cgpa;

        outFile << "Student " << i+1 << endl;
        outFile << "Name: " << spi.name << endl;
        outFile << "Father Name: " << spi.fatherName << endl;
        outFile << "CNIC: " << spi.cnic << endl;
        outFile << "Address: " << spi.address << endl;
        outFile << "Age: " << spi.age << endl;
        outFile << "Blood Group: " << spi.bloodGroup << endl;
        outFile << "Contact Number: " << spi.contact << endl;
        outFile << "Registration Number: " << sui.regNo << endl;
        outFile << "Department: " << sui.dept << endl;
        outFile << "Section: " << sui.section << endl;
        outFile << "Semester: " << sui.semester << endl;
        outFile << "Batch: " << sui.batch << endl;
        outFile << "CGPA: " << sui.cgpa << endl << endl;
    }

    outFile.close();
    return 0;
}

