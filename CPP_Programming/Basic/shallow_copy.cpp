#include <iostream>
using namespace std;

class Student {
private:
    int *marks;

public:
    Student(int m) {
        marks = new int(m);
    }

    // Copy constructor (default shallow copy behavior)
    Student(const Student &obj) {
        marks = obj.marks;
    }

    void display() {
        cout << "Marks: " << *marks << endl;
    }

    void setMarks(int m) {
        *marks = m;
    }

    ~Student() {
        delete marks;
    }
};

int main() {
    Student s1(10);
    Student s2 = s1; // Shallow copy

    s2.setMarks(20);

    cout << "After shallow copy:" << endl;
    s1.display();
    s2.display();

    return 0;
}
