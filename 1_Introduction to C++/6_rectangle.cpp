#include <iostream> 
using namespace std;

int main() {
    int length, breadth, Area, Perimeter;

    cin >> length >> breadth;

    if((1 <= length && length <= 1000) && (1 <= breadth && breadth <= 1000)){
        cout << "Area = " << (length * breadth) << endl;
        cout << "Perimeter = " << 2 * (length + breadth);
    } else {
        cout << "Invalid Input";
    }

    return 0;
}