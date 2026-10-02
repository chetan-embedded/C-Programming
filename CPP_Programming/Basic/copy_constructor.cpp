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

// Copy Constructor

teacher(teacher &orgobj)
{
    cout <<"I am coustom copy constructor\n";
     this-> name = orgobj.name;
     this-> dep = orgobj.dep;
     this-> salary = orgobj.salary; 

}

   void getinfo()
    {
        cout << name << endl;

    }
};
    
int main()
{
    teacher t1( "chetan",  "Electronics" , 25000);
    //t1.getinfo();
    teacher t2( t1);
    t2.getinfo();

}