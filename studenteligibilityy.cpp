#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
   
    string fullName;
    double overallScore = 0.0;
    double cumulativeGpa = 0.0;
    int creditHours = 0;

    cout << "STUDENT ACADEMIC ADVISORY EVALUATION" << endl;

  
    cout << "Enter Student Full Name    : ";
    getline(cin, fullName);

    cout << "Enter Overall Score (0-100): ";
    cin >> overallScore;
    if (cin.fail() || overallScore < 0.0 || overallScore > 100.0) {
        cout << fixed << setprecision(2);
        cout << "[INPUT ERROR] Invalid score: " << overallScore 
             << "Score must be between 0.0 and 100.0. Evaluation aborted." << endl;
        return 1; 
    }

    cout << "Enter Cumulative GPA (0-4) : ";
    cin >> cumulativeGpa;
    if (cin.fail() || cumulativeGpa < 0.00 || cumulativeGpa > 4.00) {
        cout << fixed << setprecision(2);
        cout << "[INPUT ERROR] Invalid GPA: " << cumulativeGpa 
             << "GPA must be between 0.00 and 4.00. Evaluation aborted." << endl;
        return 1;
    }

    cout << "Enter Credit Hours (0-180) : ";
    cin >> creditHours;
    if (cin.fail() || creditHours < 0 || creditHours > 180) {
        cout << "[INPUT ERROR] Invalid credit hours: " << creditHours 
             << ". Credit hours must be between 0 and 180. Evaluation aborted." << endl;
        return 1;
    }

   
    string letterGrade;
    if (overallScore >= 90.0) {
        letterGrade = "A (Excellent)";
    } else if (overallScore >= 80.0) {
        letterGrade = "B (Above Average)";
    } else if (overallScore >= 70.0) {
        letterGrade = "C (Satisfactory)";
    } else if (overallScore >= 60.0) {
        letterGrade = "D (Below Average)";
    } else {
        letterGrade = "F (Failing)";
    }

   
    string academicStanding;
    if (cumulativeGpa >= 2.00) {
        academicStanding = "Good Standing";
    } else {
        academicStanding = "Academic Probation";
    }

   
    string honorsRecognition;
    if (creditHours < 60) {
        honorsRecognition = "Ineligible (Requires at least 60 earned credits)";
    } else {
       
        if (cumulativeGpa >= 3.90 && cumulativeGpa <= 4.00) {
            honorsRecognition = "Summa Cum Laude (Highest Honors)";
        } else if (cumulativeGpa >= 3.70) {
            honorsRecognition = "Magna Cum Laude (High Honors)";
        } else if (cumulativeGpa >= 3.50) {
            honorsRecognition = "Cum Laude (Honors)";
        } else {
            honorsRecognition = "No Honors Awarded (GPA below 3.50 threshold)";
        }
    }

  
    cout << "EVALUATION REPORT" << endl;
    cout << left << setw(20) << "Student Name"       << ": " << fullName << endl;
    
   
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Course Score"       << ": " << overallScore << "% -> Grade: " << letterGrade << endl;
    cout << left << setw(20) << "Cumulative GPA"     << ": " << cumulativeGpa << endl;
    cout << left << setw(20) << "Academic Standing"  << ": " << academicStanding << endl;
    cout << left << setw(20) << "Completed Credits"  << ": " << creditHours << endl;
    cout << left << setw(20) << "Honors Recognition" << ": " << honorsRecognition << endl;

    return 0;
}
