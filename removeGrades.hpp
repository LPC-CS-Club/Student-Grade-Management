#include "ADTs.hpp"
#include <functional>
// Header file for remove grades function.
enum studentInfoStrings
{
	description
};
enum studentInforDoubles
{
	grade,
	maxGrade,
	weight    
};
void Remove(Student&, string, studentInfoStrings studentInfo);
void Remove(Student&, string, studentInforDoubles studentInfo);
void RemoveAssignment(Student&, string);