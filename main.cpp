// Using an expression for a vector index
// A powerful aspect of vectors is that the index is an expression. Ex: userNums.at(i) uses the value held in the int variable i as the index. As such, a vector is useful to easily lookup the Nth item in a list.

// A vector's index must be an unsigned integer type. The vector index cannot be a floating-point type, even if the value is 0.0, 1.0, etc.

// The program below allows a user to print the age of the Nth oldest known person to have ever lived. The program quickly accesses the Nth oldest person's age using oldestPeople.at(nthPerson - 1). Note that the index is nthPerson - 1 rather than just nthPerson because a vector's indices start at 0, so the 1st age is at index 0, the 2nd at index 1, etc.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> oldestPeople(5);  
    int nthPerson;               // User input, Nth oldest person

    oldestPeople.at(0) = 122; // Died 1997 in France
    oldestPeople.at(1) = 119; // Died 1999 in U.S.
    oldestPeople.at(2) = 117; // Died 1993 in U.S. 
    oldestPeople.at(3) = 117; // Died 1998 in Canada
    oldestPeople.at(4) = 116; // Died 2006 in Ecuador

    cout << "Enter N (1..5): ";
    cin  >> nthPerson;

    if ((nthPerson >= 1) && (nthPerson <= 5)) {
        cout << "The #" << nthPerson << " oldest person lived ";
        cout << oldestPeople.at(nthPerson - 1) << " years." << endl;
    }

    return 0;
}