#include <iostream>
#include <string>
using namespace std;

/* TODO: Generate the grade in letter 
 */


int main() {
   double finalPoint = 40.4;

   /* Generate the grade in letter */
   char finalGrade = '-';
   finalGrade = GenerateFinalGrade(finalPoint);
   cout << "Final grade is " << finalPoint << " / " << finalGrade << endl;

   return 0;
}