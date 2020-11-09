/*  Question-2
                                                STUDENTS      //base class
                                   
                           UndergraduateStudent            GraduateStudent
                           -Freshman                        -DoctoralStudent
                           -Sophomore                       -MasterStudent
                           -Junior
                           -Senior
                           
   The hierarchy contains many "is-a" (inheritance) relationships.
   An UndergraduateStudent is a Student.
   A GraduateStudent is a Student too.
   Each of the classes Freshman, Sophomore, Junior, Senior is an undergraduateStudent and is a Student.
   Each of class DoctoralStudent and MasterStudent is a Graduate and is a Student. 
   
*******Code******* */
#include<iostream>
using namespace std;
class Students
{
public:
    Students()
    {
        cout<<" **hierarchy of Students** "<<endl;
    }
};
class UndergraduateStudents : public Students
{
public:
    UndergraduateStudents()
    {
        cout<<"-undergraduate Students\n-graduate students\n"<<endl;
    }
    char Freshman()
    {
        cout<<"-Freshman of university"<<endl;
    }
    char Sophomore()
    {
        cout<<"-sophomore of university"<<endl;
    }
    char Junior()
    {
        cout<<"-Juniors"<<endl;
    }
    char Senior()
    {
        cout<<"-Senior"<<endl;
    }
};
class GraduateStudent : public Students
{
public:
    GraduateStudents()
    {
        cout<<"graduate students"<<endl;
    }
    char DoctoralStudent()
    {
        cout<<"-Doctoral Students"<<endl;
    }
    char MasterStudent()
    {
        cout<<"-Masters students"<<endl;
    }
};
int main()
{
    UndergraduateStudents st;
    GraduateStudent st1;
    cout<<"\n***first category of students in university***"<<endl;
    char f=st.Freshman();
    char s=st.Sophomore();
    char j=st.Junior();
    char n=st.Senior();
    cout<<"\n***Second category of students in university***"<<endl;
    char d=st1.DoctoralStudent();
    char m=st1.MasterStudent();
    return 0;
}
