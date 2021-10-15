#include <iostream>
using namespace std;
int fib(int n) {
    int f, i;
    if (n == 1 || n == 2)
        f = 1;
    else {
        int a = 1;
        int b = 1;
        for (i = 3; i <= n; i++) {
            f = a + b;
            a = b;
            b = f;
        }
    }

    return(f);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    cout << fib(n);
    return(0);
}