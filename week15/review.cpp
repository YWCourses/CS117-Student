/* Design of a review: 
 * Review on a dish as an object -- decribe it using a classs data type
 *    data / variables: string revName, int revRating, string revComment
 *    operations / functions: 
         modification: SetName, SetRating, SetComment (combined as SetReview)
         access: GetName, GetRating, GetComment, PrintReview

 * FIXME: add a function for SetPrice
 */

#include <iostream>
#include <string>
using namespace std;

/* Implement review as a class */
class Review {
   public: // functions or operations are defined as public
      Review(); // for constructor
      // Mutator functions: modify the data (setter)
      void SetReview(string dishName, int dishRating, string dishComment); // declaration
      // accessor functions: access data only, no modification (getter)
      void PrintReview();

   private: // private data are not accessible outside of the class
      string revName;
      int revRating;
      string revComment;
};
/* Constructor: initialize the private data in class
 *    - the constuctor's name is the same as the class
 *    - add class in public as well
 *    - no return datatype
 */
Review::Review() {
   revName = "no name";
   revRating = -1;
   revComment = "no comment";
}

// define the functions for class Review
void Review::SetReview(string dishName, int dishRating, string dishComment) {
   revName = dishName;
   revRating = dishRating;
   revComment = dishComment;
}
void Review::PrintReview() {
   cout << revName << ": rating " << revRating << "; comment: " << revComment << endl;
}

// END Review Class

int main() {
   Review dishReview; // declare a variable of Reivew data type
   dishReview.PrintReview(); // What is the output?

   string dishName;
   int dishRating;
   string dishComment;

   /* Get user's input for one review */
   cout << "Enter dish name: ";
   getline(cin >> ws, dishName);
   cout << "Enter rating: ";
   cin >> dishRating;
   cout << "Enter your comment: ";
   getline(cin >> ws, dishComment);
   dishReview.SetReview(dishName, dishRating, dishComment);

   /* Print out review */
   dishReview.PrintReview();

   return 0;
}
