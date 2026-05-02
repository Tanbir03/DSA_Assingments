#include <iostream>
using namespace std;

void find_miss(int n) {
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++) {
        int cnt = 0;

        for(int j = 0 ; j < n ; j++) {
            if(arr[i] == arr[j]) {
                cnt++;
            }
        }

        if(cnt != 2) {
            cout << arr[i];
            break;
        } else {
            continue;
        }
    }
}

int main() {

    int x;
    cin >> x;
    for(int i = 0 ; i < x ; i++) {
        int n;
        cin >> n;
        find_miss(n);
        cout << endl;
    }

    return 0;
}