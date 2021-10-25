#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	float homeworkScore, testScore, quizScore, attendanceScore, finalGrade;

	cout << "Please enter the student's name: ";
	cin >> name;
	cout << "\nPlease enter the homework score: ";
	cin >> homeworkScore;
	cout << "\nPlease enter the test score: ";
	cin >> testScore;
	cout << "\nPlease enter the quiz score: ";
	cin >> quizScore;
	cout << "\nPlease enter the attendance score: ";
	cin >> attendanceScore;

	finalGrade = (homeworkScore * 0.2) + (testScore * 0.5) + (quizScore * 0.2) + (attendanceScore * 0.1);

	cout << "\nGrades for " << name << endl;
	cout << "   Homework   : " << homeworkScore << endl;
	cout << "   Test       : " << testScore << endl;
	cout << "   Quiz       : " << quizScore << endl;
	cout << "   Attendance : " << attendanceScore << endl;
	cout << "==============================" << endl;
	cout << "Total Score   : " << finalGrade << endl;

	return 0;
}