// Write your code here
// Write your code here
#include <iostream> 
#include <string>
#include <iomanip>
#include "studentType.h"

using namespace std;

studentType::studentType()
{
    firstName = "";
    lastName = "";
    testScore = 0;
    programmingScore = 0;
    courseGrade = ' ';
    GPA = 0;

}

studentType::studentType(string fn, string ln, char grade, 
                         int tScore, int prgScore, double gp)
{
    firstName = fn;
    lastName = ln;
    testScore = tScore;
    programmingScore = prgScore;
    courseGrade = grade;
    GPA = gp;
}


void studentType::setFirstName(string fn)
{
    firstName = fn;
}

string studentType::getFirstName() const
{
    return firstName;
}

//TO DO, finish the rest of the functions

