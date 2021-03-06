#pragma once

#include "stdafx.h"


struct StudentGrade
{
	std::string name;
	char grade;
};
// 1c) Write an overloaded operator[] for this class. This function should take a std::string parameter,
// and return a reference to a char. In the body of the function, first iterate through the vector to see if the student�s name already exists
// (you can use a for-each loop for this). If the student exists, return a reference to the grade and you�re done. Otherwise
// , use the std::vector::push_back() function to add a StudentGrade for this new student. When you do this, std::vector will add a copy of your StudentGrade 
// to itself (resizing if needed). Finally, we need to return a reference to the grade for the student we just added to the std::vector. 
// We can access the student we just added using the std::vector::back() function.
class GradeMap
{
private:
	std::vector<StudentGrade> m_map;
public:
	GradeMap() {};

	char& operator[](const std::string &name);

};
