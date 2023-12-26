#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int N[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> N[i];
    }

    int i, flag;
    for (i = 1; i <= n; i++) {
        int missing = 0;
        if (flag == 1) break;
        for (int j = 0; j < n - 1; j++) {
            if (missing == n - 1) {
                cout << i << endl;
                flag = 1;
                break;
            }
            else if(N[j] != i) missing++;
            else break;
        }
    }
    return 0;
}