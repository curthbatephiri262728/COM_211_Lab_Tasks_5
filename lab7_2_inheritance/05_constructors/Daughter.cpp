#include "Daughter.h"
#include <iostream>
using namespace std;

// Nothing is specified after the colon, so Mother() (the default constructor) runs first.
Daughter::Daughter(int a)
{
    (void)a;
    cout << "Daughter: int parameter\n\n";
}
