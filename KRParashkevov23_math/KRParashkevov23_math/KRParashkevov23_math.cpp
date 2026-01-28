#include <iostream>
#include "../math/math.h"
using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    cout << add(x, y) << ' ' << subtract(x, y) << ' ' << multiply(x, y) << ' ' << divide(x, y);
}