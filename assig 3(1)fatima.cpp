// fatima abdalla allageb
// the second band
//the department : computer



#include<iostream>
using namespace std;
int main(){
int grade, id_number;                                      // definition the input(grade,id_number,name,department)                                            
string name, department;

for(int i=1 ;i<=5 ;i=i+1)
{
cout <<"inter your name"<<endl;                          //input the student information
cin >>name;
cout <<"inter your id_number"<<endl;
cin >>id_number;
cout <<"inter your department"<<endl;
cin >>department;
cout <<"inter your grade"<<endl;
cin >>grade;

cout <<"inter your name"<< name << endl;
cout <<"inter your id_number"<< id_number <<endl;
cout <<"inter your grade"<< grade <<endl;


if ("department == A")                            //if for selection the department
{
    cout <<"you are in control department"<<endl;
} 
if ("department == T")
{
    cout <<"you are in communication department"<<endl;
}
if ("departmant == C")
{
    cout <<"you are in computer department"<<endl;
}


switch (grade)                                  //switch for selection the grade
{
case 50 ... 59:
cout <<"your grade = f"<<endl;
case 60 ... 69:
cout <<"your grade = d"<<endl;
case 70 ... 79:
cout <<"your grade = c"<<endl;
case 80 ... 89:
cout <<"your grade = b"<<endl;
case 90 ... 100:
cout <<"your grade = a"<<endl;
default :
cout <<"you are falid"<<endl;
}
}
return 0;

}

