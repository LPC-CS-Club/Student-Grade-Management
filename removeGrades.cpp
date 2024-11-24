#include "removeGrades.hpp"
#include "ADTs.hpp"
#include <algorithm>
#include <fstream>
#include <functional>
#include <string>
#include <map>
#include "filefunctions.hpp"
// This is the remove grades function!
// initial records
//math exam 90 100 0.5
//english essay 50 50 0.3

map<studentInfoStrings, function<string&(Assignment&)>> stringFunctions =
{
    {description, [](Assignment& a) -> string& {return a.description;}}
};

map<studentInforDoubles, function<double&(Assignment&)>> doubleFunctions =
{
    {grade, [](Assignment& a) -> double& {return a.grade;}},
	{maxGrade, [](Assignment& a) -> double& {return a.maxGrade;}},
	{weight, [](Assignment& a) -> double& {return a.weight;}}
};

// Removes name from an assignment
void Remove(Student& student, string assignmentName, studentInfoStrings studentInfo)
{
    // Finding the assignment and removing the grade by changing it to -1
    stringFunctions[studentInfo](student.records.at(student.GetAssignmentIndex(assignmentName))) = "NA";
    // .name = "NA";    
    cout << "Removed name from " << assignmentName << endl;

    // Update the file
    UpdateFile(student);
}

void Remove(Student& student, string assignmentName, studentInforDoubles studentInfo)
{
    // Finding the assignment and removing the grade by changing it to -1
    doubleFunctions[studentInfo](student.records.at(student.GetAssignmentIndex(assignmentName))) = -1;
    // .name = "NA";    
    cout << "Removed name from " << assignmentName << endl;

    // Update the file
    UpdateFile(student);
}
// Removes an assignment from a student 
void RemoveAssignment(Student& student, string assignmentName)
{
    // Remove assignment from the records vector
    student.records.erase(student.records.begin() + student.GetAssignmentIndex(assignmentName));
    cout << assignmentName << " removed"<< endl;

    // Update the file
    UpdateFile(student);
}
