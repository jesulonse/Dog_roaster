// Online C++ compiler to run C++ program online
#include<iostream>


using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    Dog();
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

Dog::Dog()
{
     name="Unknown";
     licenseNumber=0;
}
void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    cout<<name<<" "<<licenseNumber;
}


void printRoster(Dog roster[], int size);

void printRoster(Dog roster[], int size)
{
    for(int i=0;i<size;i++)
    {
        roster[i].printInfo();
        cout<<"\n\n";
    }
}
/*Goal: practice using the Dogs class. 
**Create an array called roster whose elements are of the type Dogs.
*/

// #include "main.hpp"


int main()
{
    const int SIZE=3;
    Dog roster[SIZE];

    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");
    roster[0].setLicenseNumber(1563);
    roster[1].setLicenseNumber(1523);
    roster[2].setLicenseNumber(4852);

    printRoster(roster,SIZE);
    return 0;
}
