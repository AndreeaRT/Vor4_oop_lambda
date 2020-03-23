#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main()

{
    std::vector<int> Arr = { 3, 2, 7, 8, 9 };

    int Anfangswert = 5;

    int s = Anfangswert; //we declare the initial value of the sum as the value of the Anfangswert

    std::for_each(Arr.begin(), Arr.end(), [&s](int x) {s += x; });

    std::cout << s << std::endl;
}