// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "map.h"
#include <iostream>


int main()
{
	GradeMap grades;
	grades["Joe"] = 'A';
	grades["Frank"] = 'B';
	std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
	std::cout << "Frank has a grade of " << grades["Frank"] << '\n';

	system("pause");

    return 0;
}

