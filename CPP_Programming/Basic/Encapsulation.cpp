#include <iostream>
#include <string>
using namespace std;

class teacher
{
// binding the data and members inside the same unit called class
// Hiding the required things using private acess specifier 
private:
    string surname;
public:
    string name;
    string dep;
    double salary;

    void changedept(string newdept)
    {
        dep = newdept;
    }
// setter
    void setname(string s)
    {
        surname = s;
    }
// getter
    string getname()
    {
        return surname;
    }

};

int main()
{
    teacher t1;
    t1.name = "Chetan";
    t1.dep = " Electronics";
    t1.salary = 25000;
    t1.setname (" Naik");
    t1.changedept(" Civil");
    cout << t1.name << t1.getname() << endl;
}