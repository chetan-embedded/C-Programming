#include <iostream>
#include <string>
using namespace std;

class teacher
{
public:
    string name;
    string dep;
    double salary;
};

int main()
{
    teacher t1;
    t1.name = "Chetan";
    t1.dep = " Electronics";
    t1.salary = 25000;
    cout << t1.name << t1.dep << endl;
}