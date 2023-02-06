#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

map<string, int> subjects;
int total_subjects = 10;
int total_semesters;

struct Student
{
    string name;
    string id;
    string college;
    string branch;
    int semester;
    map<int, double> grades;
};

void inputStudentDetails(Student &s)
{
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student ID: ";
    cin >> s.id;
    cout << "Enter student college: ";
    cin >> s.college;
    cout << "Enter student branch: ";
    cin >> s.branch;
    cout << "Enter current semester: ";
    cin >> s.semester;
}

void inputSubjectMarks(int semester, Student &s)
{
    double grade = 0;
    for (int i = 1; i <= total_subjects; i++)
    {
        int marks;
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        double subject_grade = (marks / 10.0) * 2;
        grade += subject_grade;
        subjects[to_string(semester) + "_" + to_string(i)] = marks;
    }
    s.grades[semester] = grade / total_subjects;
}

void inputSemesterGrades(Student &s)
{
    cout << "Enter total number of semesters completed: ";
    cin >> total_semesters;
    for (int i = 1; i <= total_semesters; i++)
    {
        cout << "Enter marks for semester " << i << ": " << endl;
        inputSubjectMarks(i, s);
    }
}

void writeDataToFile(Student s)
{
    ofstream file;
    file.open("student_grades.csv", ios::out | ios::app);
    file << s.name << "," << s.id << "," << s.college << "," << s.branch << "," << s.semester << ",";
    for (int i = 1; i <= total_subjects; i++)
    {
        file << subjects[to_string(s.semester) + "_" + to_string(i)] << ",";
    }
    file << s.grades[s.semester] << endl;
    file.close();
}

int main()
{
    Student s;
    inputStudentDetails(s);
    inputSemesterGrades(s);
    writeDataToFile(s);
    return 0;
}
