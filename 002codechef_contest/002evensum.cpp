#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        int sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        bool hasEven = false, hasOdd = false;
        for (int x : A) {
            if (x % 2 == 0) hasEven = true;
            else hasOdd = true;
        }

        bool possible = false;
        if (sum % 2 == 0) {
            // need to remove an even element
            if (hasEven) possible = true;
        } else {
            // sum is odd: need to remove an odd element
            if (hasOdd) possible = true;
        }

        if (possible) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}