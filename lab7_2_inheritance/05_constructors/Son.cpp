#include "Son.h"
#include <iostream>
using namespace std;

// ": Mother(a)" picks Mother's int constructor instead of the default one.
Son::Son(int a) : Mother(a)
{
    cout << "Son: int parameter\n\n";
}
