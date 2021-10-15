#include <iostream>
using namespace std;
void kubiki() {
    srand(time(0));
    int a = (rand() % 6) + 1;
    int b = (rand() % 6) + 1;
    cout << "Выпало " << a << " и " << b << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    kubiki();
    return(0);
}