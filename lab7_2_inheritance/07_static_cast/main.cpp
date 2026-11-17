#include <iostream>
#include "Derived.h"

using namespace std;

int main()
{
    Base* pBase = new Base();

    // static_cast does NO run-time check. This downcast compiles and runs, but
    // pBase really points at a plain Base, so using pDerived to reach Derived's
    // members would be undefined behaviour. We only convert it, never use it.
    Derived* pDerived = static_cast<Derived*>(pBase);
    (void)pDerived;

    cout << "static_cast compiled and ran (no check was made).\n";

    delete pBase;
    pBase = nullptr;

    return 0;
}
