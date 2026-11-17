#include <iostream>
using namespace std;

// PRN: 202501100029
// Scenario: Student Marks
// Hash Function: Mid-Square
// Collision Handling: Separate Chaining

const int DATA_SIZE = 20;
const int TABLE_SIZE = 17;

int marks[DATA_SIZE] = {
    29, 42, 55, 68, 81,
    94, 7, 20, 33, 46,
    59, 72, 85, 98, 11,
    24, 37, 50, 63, 76
};

int main() {

    cout << "STUDENT MARKS HASH TABLE PROJECT\n";
    cout << "PRN: 202501100029\n";

    cout << "\nPersonalized Dataset:\n";

    for (int i = 0; i < DATA_SIZE; i++) {
        cout << marks[i] << " ";
    }

    cout << "\n\nTotal values: " << DATA_SIZE << endl;
    cout << "Hash Table Size: " << TABLE_SIZE << endl;

    return 0;
}