#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int DATA_SIZE = 20;
const int TABLE_SIZE = 17;

int marks[DATA_SIZE] = {
    29, 42, 55, 68, 81,
    94, 7, 20, 33, 46,
    59, 72, 85, 98, 11,
    24, 37, 50, 63, 76
};

vector<int> hashTable[TABLE_SIZE];
int collisionCount = 0;

// Mid-Square Hash Function
int midSquareHash(int key) {
    int square = key * key;
    string s = to_string(square);

    while (s.length() < 4) {
        s = "0" + s;
    }

    int middle = stoi(s.substr(1, 2));

    return middle % TABLE_SIZE;
}

// Insert using Separate Chaining
void insertKey(int key) {
    int index = midSquareHash(key);

    if (!hashTable[index].empty()) {
        collisionCount++;

        cout << "Collision detected: "
             << key << " at index "
             << index << endl;
    }

    hashTable[index].push_back(key);
}

// Display Hash Table
void displayTable() {
    cout << "\nFinal Hash Table:\n";

    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << " : ";

        for (int j = 0; j < hashTable[i].size(); j++) {
            cout << hashTable[i][j];

            if (j != hashTable[i].size() - 1) {
                cout << " -> ";
            }
        }

        cout << endl;
    }
}

int main() {

    cout << "STUDENT MARKS HASH TABLE\n";
    cout << "PRN: 202501100029\n";

    cout << "\nInserting values:\n";

    for (int i = 0; i < DATA_SIZE; i++) {
        insertKey(marks[i]);
        cout << "Inserted: " << marks[i] << endl;
    }

    displayTable();
    cout << "\nTotal Collisions: "
     << collisionCount << endl;

    return 0;
}