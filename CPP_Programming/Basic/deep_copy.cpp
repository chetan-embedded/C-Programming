#include <iostream>
using namespace std;

class Student {
private:
    int *marks;

public:
    Student(int m) {
        marks = new int(m);
    }

    // Copy constructor for deep copy
    Student(const Student &obj) {
        marks = new int(*obj.marks);
    }

    void display() {
        cout << "Marks: " << *marks << endl;
    }

    void setMarks(int m) {
        *marks = m;
    }
    
// Distructor
    ~Student() {
        delete marks;
    }
};

int main() {
    Student s1(10);
    Student s2 = s1; // Deep copy

    s2.setMarks(20);

    cout << "After deep copy:" << endl;
    s1.display();
    s2.display();

    return 0;
}
