#include <iostream>
using namespace std;
int sumDel(int n) {
    int sum = 1;
    int i;
     for (i = 2; i <= n/2; i++) {
        if (n % i == 0)
            sum = sum + i;
    }
    return(sum);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    int p = 1;
    for (i = 1; i < 10000; i++) {
        int two = sumDel(i);
        if (two == sumDel(i) && two  != 1 && two != i && i == sumDel(two))
            if (i != p) {
                cout << i << " и " << two << endl;
                p = two;
            }
    }
    return(0);
}
