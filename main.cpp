#include <iostream>
#include "input.hpp"
#include "addGrades.hpp"
#include "removeGrades.hpp"
#include "viewGrades.hpp"
#include "search.hpp"
#include "advancedFunctions.hpp"
#include "filefunctions.hpp"
#include "ADTs.hpp"

using namespace std;

// This is the main function! 
int main()
{
	/* Feel free to delete this when you're testing your own functions. This is just for reference.
	 * You can also comment it out if you'd like to keep it.
	 */

	// Created an arbitrary student object named Jacquavius.
	Student Jacquavius {.studentID = "1"};

	// testing readFromFile function
	readFromFile(Jacquavius);
	// For loop that prints out everything... this is a hint for one of the other functions.
	for (long long unsigned int i = 0; i < Jacquavius.records.size(); i++)
	{
		cout << "Assignment name: " << Jacquavius.records.at(i).name << endl
		     << "Description: " << Jacquavius.records.at(i).description << endl
		     << "Grade: " << Jacquavius.records.at(i).grade << endl
		     << "Max grade: " << Jacquavius.records.at(i).maxGrade << endl
		     << "Weight: " << Jacquavius.records.at(i).weight << endl << endl;
	}	
	Remove(Jacquavius, "math", description);
	Remove(Jacquavius, "math", grade);
	Remove(Jacquavius, "math", maxGrade);
	Remove(Jacquavius, "math", weight);
	
	Remove(Jacquavius, "english", description);
	Remove(Jacquavius, "english", grade);
	Remove(Jacquavius, "english", maxGrade);
	Remove(Jacquavius, "english", weight);

	// RemoveAssignment(Jacquavius, "math");
	// RemoveAssignment(Jacquavius, "english");

	for (long long unsigned int i = 0; i < Jacquavius.records.size(); i++)
	{
		cout << "Assignment name: " << Jacquavius.records.at(i).name << endl
		     << "Description: " << Jacquavius.records.at(i).description << endl
		     << "Grade: " << Jacquavius.records.at(i).grade << endl
		     << "Max grade: " << Jacquavius.records.at(i).maxGrade << endl
		     << "Weight: " << Jacquavius.records.at(i).weight << endl << endl;
	}	
  // terminate
  return 0;
}
