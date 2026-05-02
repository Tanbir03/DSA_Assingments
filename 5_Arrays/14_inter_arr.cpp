#include <bits/stdc++.h>
using namespace std;

void find_inter() {
    int n, m;
    vector<int> iter;

    cin >> n;
    int arr1[n];
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;
    int arr2[m];
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j]) {
                iter.push_back(arr1[i]);
                arr2[j] = -1;
                break;
            }
        }
    }

    for(int i = 0; i < iter.size(); i++) {
        cout << iter[i] << " ";
    }
    cout << endl;
}

int main() {
    int x;
    cin >> x;

    for(int i = 0; i < x; i++) {
        find_inter();
    }

    return 0;
}