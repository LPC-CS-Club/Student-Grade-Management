// This file is for all the structs.
# include <iostream>
# include <vector>
# include <algorithm>
// pgrma once here is needed so that only one instadnce of this file is shared
#pragma once
using namespace std;

struct Assignment
{
	string name;
	string description;
	double grade = 0.0;
	double maxGrade = 0.0;
	double weight = 0.0;
};

struct Student
{
	string studentID;
	vector<Assignment> records;

	// Get assignment index based on name specified
	int GetAssignmentIndex(string assignmentToFind)
	{
    	auto assignmentPointer = find_if(records.begin(), records.end(), 
        	[assignmentToFind](Assignment assignment){return assignment.name == assignmentToFind;});
		if (assignmentPointer == records.end())	
			throw runtime_error(assignmentToFind + " was not found in student records");

		return assignmentPointer - records.begin();
	}
};
