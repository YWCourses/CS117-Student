#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* Generate the grade in letter */
char GenerateFinalGrade(int finalPoint) {
   char finalGrade = '-';
   if (finalPoint >= 90) {
      finalGrade = 'A';
   }
   else if (finalPoint >= 80) {
      finalGrade = 'B';
   }
   else if (finalPoint >= 70) {
      finalGrade = 'C';
   }
   else if (finalPoint >= 60) {
      finalGrade = 'D';
   }
   else {
      finalGrade = 'F';
   }
   return finalGrade;
}

int main() {

   int numStudent = 2;
   string fullname;
   vector<string> studentList;
   int scoreList[numStudent];
   int i;
   int finalScore;
   char finalGrade;

   for (i = 0; i < numStudent; i++) {
      cout << "Enter fullname: ";
      getline(cin >> ws, fullname);
      studentList.push_back(fullname);
   }
   
   for (i = 0; i < numStudent; i++) {
      cout << "Enter final score (integer): ";
      cin >> finalScore;
      scoreList[i] = finalScore;
   }

   for (i = 0; i < numStudent; i++) {
      fullname = studentList.at(i);
      finalScore = scoreList[i];
      finalGrade = GenerateFinalGrade(finalScore);
      cout << fullname << "'s final grade is " << finalScore << " / " << finalGrade << endl;
   }

   return 0;
}