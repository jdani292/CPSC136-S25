// Write your code here
#include <string>
using namespace std;

class studentType
{
public:
    
    //constructors
    studentType();
    studentType(string, string , char, int, int, double);

    /*
    the following mutator functions set input values to the cooresponding
    member components.
    */
    void setFirstName(string);
    void setLastName(string);
    void setTestScore(int);
    void setProgScore(int);
    void setGPA(double);

    /*
    Note this function does not take an input parameter
    it computes the average of testScore and programmingScore
    and uses the average score to set courseGrade 
     >= 90 A, 80-89 B, 70-79 C, 60-69 D, <60 D
    */
    void setGrade();


    /*
    the following accessor functions return the corresponding values
    */
    string getFirstName() const;
    string getLastName() const;
    int getTestScore() const;
    int getProgScore() const;
    double getGPA() const;
    char getGrade() const;

    /*
    prints an output like the following:

    Name: Sara Spilner
    Grade: A
    Test score: 89
    Programming score: 92
    GPA: 3.57

    */
    void print() const;

private:
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;

};
