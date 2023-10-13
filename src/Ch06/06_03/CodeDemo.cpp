// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

StudentRecords SR;

void initialize();

int main(){
	int id;
	
	initialize();

	std::cout << "Enter a student ID: ";
	std::cin >> id;

	SR.report_card(id);
	
	return (0);
}

void initialize(){
	SR.add_student(1, "George P. Burdell");
	SR.add_student(2, "Nancy Rhodes");

	SR.add_course(1, "Algebra", 5);
	SR.add_course(2, "Physics", 4);
	SR.add_course(3, "English", 3);
	SR.add_course(4, "Economics",4);

	SR.add_grade(1, 1, 'B');
	SR.add_grade(1, 2, 'A');
	SR.add_grade(1, 3, 'C');
	SR.add_grade(2, 1, 'A');
	SR.add_grade(2, 2, 'A'); 
	SR.add_grade(2, 4, 'B');
}