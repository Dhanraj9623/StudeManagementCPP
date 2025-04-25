#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    // Method to input student data
    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore(); // To ignore newline from previous input
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Method to display student data
    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[100]; // max 100 students

    // Input data
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].input();
    }

    // Display data
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    return 0;
}
