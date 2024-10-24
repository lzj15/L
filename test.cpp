#include <iostream>  
using namespace std;

int main() {
    int n;
    long long t = 0, t1 = 1, t2;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    
    for (int i = 1; i <= n; ++i) {
        cout << t << " ";
        t2 = t + t1;
        t = t1;
        t1 = t2;
    }
    cout << endl;

    return 0;
}




