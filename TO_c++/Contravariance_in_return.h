#include "Interface_inherance.h"
#include "Clases_implements_intefaces.h"
#include <iostream>

namespace Contravariance_in_return
{
    class X
    {
    public:
        virtual B *foo(B *b)
        {
            std::cout << "X -> B foo(B)\t(Contravariance_in_return)\n";
            return new B_impl();
        }
    };

    class Y : public X
    {
    public:
        A *foo(B *b) override; // return type is not identical to nor covariant with return type "B *"
                               // of overridden virtual function "Contravariance_in_return::X::foo"
    };

    A *Y::foo(B *b) // error: invalid covariant return type for ‘virtual A* Contravariance_in_return::Y::foo(B*)’
    {               // note: overridden function is ‘virtual B* Contravariance_in_return::X::foo(B*)’
        std::cout << "Y -> A foo(B)\t(Contravariance_in_return)\n";
        return new C_impl();
    }
}