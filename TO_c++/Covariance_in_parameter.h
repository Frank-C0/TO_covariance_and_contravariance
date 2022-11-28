#include "Interface_inherance.h"
#include "Clases_implements_intefaces.h"
#include <iostream>

namespace Covariance_in_parameter
{
    class X
    {
    public:
        virtual B *foo(B *b)
        {
            std::cout << "X -> B foo(B)\t(Covariance_in_parameter)\n";
            return new B_impl();
        }
    };

    class Y : public X
    {
    public:
        B *foo(C *b) override; // error: marked ‘override’, but does not override
    };
    B *Y::foo(C *b)
    {
        std::cout << "Y -> B foo(C)\t(Covariance_in_parameter)\n";
        return new C_impl();
    }
}