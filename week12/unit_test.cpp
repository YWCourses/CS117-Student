#include <iostream>
#include <string>
using namespace std;

/* TODO: Generate the grade in letter 
 * Function call: finalGrade = GenerateFinalGrade(finalPoint);
 */
char GenerateFinalGrade(double finalPoint) {
   char finalGrade = '-';

   return finalGrade;
}


int main() {
   double point = 40.4;

   /* TODO: Generate the grade in letter */
   char finalGrade = '-';
   finalGrade = GenerateFinalGrade(point);
   cout << "Final grade is " << point << " / " << finalGrade << endl;

   return 0;
}

