#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
    string surname;
public:
    string name;
    string dep;
    double salary;

// Constructor
    teacher(string name, string dep , double salary)
    {
        // same arguments names and variable names are valid
        // this -> used to tell compiler this is belongs to object
        this-> name = name;
        this-> dep = dep;
        this-> salary = salary; 
    }

   void getinfo()
    {
        cout << name << endl;

    }
};
    
int main()
{
    teacher t1( "chetan",  "Electronics" , 25000);
    t1.getinfo();
    teacher t2( "Riya",  "Electronics" , 25000);
    t2.getinfo();

}