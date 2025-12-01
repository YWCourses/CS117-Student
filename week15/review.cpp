#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Review {
   public:
      Review();
      void SetReview(string revDish, int revRating, string revComment);
      string GetDish() const;
      int GetRating() const;
      string GetComment() const;
      void PrintReiview();

   private:
      string dish;
      int rating;
      string comment;
};

void Review::SetReview(string revDish, int revRating, string revComment) {
   dish = revDish;
   rating = revRating;
   comment = revComment;
}

string Review::GetDish() const { 
   return dish; 
}
int Review::GetRating() const { 
   return rating; 
}
string Review::GetComment() const { 
   return comment; 
}
void Review::PrintReiview() {
   cout << dish << ": rating " << rating << "; comment: " << comment << endl;
}

Review::Review() {  // Default constructor
   dish = "NoName";         // Default name: NoName indicates name was not set
   rating = -1;             // Default rating: -1 indicates rating was not set
   string comment = "NoComment";
}

// END Review class


class Reviews {
   public: 
      void InputReviews();
      void PrintAllReviews() const;
      // int GetAverageRating() const; // FIXME: implement this function
   private:
      vector<Review> reviewList;
};

void Reviews::InputReviews() {
   string status = "exit";
   Review dishReview; 
   string currDish;
   string currComment;
   int currRating;

   cout << "Enter Status (option: edit, exit): " << endl;
   getline(cin >> ws, status);
   while (status == "edit") {
      cout << "Enter the dish: ";
      getline(cin >> ws, currDish);
      cout << "Enter the rating: ";
      cin >> currRating;
      cout << "Enter the comment: ";
      getline(cin >> ws, currComment);
      dishReview.SetReview(currDish, currRating, currComment);
      reviewList.push_back(dishReview);

      cout << "Enter Status (option: edit, exit): " << endl;
      getline(cin >> ws, status);
   }
}

void Reviews::PrintAllReviews() const {
   Review dishReview;
   cout << endl << "Review Summary: " << endl;
   if (reviewList.size() == 0) {
      cout << "(Empty)" << endl;
   }
   else {
      for (size_t i = 0; i < reviewList.size(); i++) {
         dishReview = reviewList.at(i);
         dishReview.PrintReiview();
      }
   }
}


int main() {
   Reviews reviewList;

   reviewList.InputReviews();

   reviewList.PrintAllReviews();
   
   return 0;
}