#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
Anthony Diaz / adiaz6040@sdsu.edu
CS 210 / Scovil
Assignment 2 - Simple C++ Class
*/

class collegeCourse {
private:
    string title;
    string department;
    int courseNumber;
    int capacity;
public :
    // Creates a course using default values
    collegeCourse () {
        title = "TBD";
        department = "TBD";
        courseNumber = 0;
        capacity = -1;
    }

    // A constructor for when a college course is created and passes
    // information of the class like title, department, etc.
    collegeCourse(const string& newTitle, const string& newDepartment, int newCourseNumber, int newCapacity) {
        title = newTitle;
        department = newDepartment;
        courseNumber = newCourseNumber;
        capacity = newCapacity;
}
    // The getter/accessor to retrieve and sends it to
    // cout, which displays the private information
    string getTitle() const {
    return title;
}
    string getDepartment() const {
        return department;
    }
    int getCourseNumber() const {
        return courseNumber;
    }
    int getCapacity() const {
    return capacity;
}

// The mutator methods
   void setTitle(const string& newTitle) {
    title = newTitle;
}
    void setDepartment(const string& newDepartment) {
    department = newDepartment;
}
    void setCourseNumber(int newCourseNumber) {
    courseNumber = newCourseNumber;
}
    void setCapacity(int newCapacity) {
    capacity = newCapacity;
    }

    void print( ostream& out = cout) const
    {
        out << "Anthony Diaz" << endl;
        out << getTitle() << endl;
    out << getDepartment() << " " << getCourseNumber() << endl;
    out << "Capacity: " << getCapacity() << endl;
}

};
// The print method
ostream& operator<<(ostream& out, const collegeCourse& rhs) {
    rhs.print(out);
    return out;
}

int main() {
    // This creates a course that is then given temp values
    collegeCourse course1;
    // this creates a course and passes data to the class
    // letting it know what details of that course are.
    collegeCourse course2(
    "Data Structures",
    "Computer Science",
    210,
    32);
    collegeCourse course3(
        "Linear Algebra",
        "Mathematics",
        254,
        130);
    collegeCourse course4(
        "Technical Writing",
        "Language Arts (RWS)",
        305,40);
    collegeCourse course5(
        "The Holocaust and Western Civilization",
        "History",
        440,25);
    vector<collegeCourse> courses = {
        course1,
        course2,
        course3,
        course4,
        course5
    };

for (int i = 0; i < courses.size(); i++) {
    cout << courses[i] << endl;
}

    return 0;
}