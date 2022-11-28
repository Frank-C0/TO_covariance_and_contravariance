#include "Interface_inherance.h"
#include "Clases_implements_intefaces.h"
#include <iostream>

namespace Contravariance_in_parameter
{
    class X
    {
    public:
        virtual B *foo(B *b)
        {
            std::cout << "X -> B foo(B)\t(Contravariance_in_parameter)\n";
            return new B_impl();
        }
    };

    class Y : public X
    {
    public:
        B *foo(A *b) override; // error: '' marked ‘override’, but does not override
    };
    B *Y::foo(A *b)
    {
        std::cout << "A -> B foo(A)\t(Contravariance_in_parameter)\n";
        return new C_impl();
    }
}