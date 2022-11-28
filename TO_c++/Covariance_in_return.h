#include "Interface_inherance.h"
#include "Clases_implements_intefaces.h"
#include <iostream>

namespace Covariance_in_return
{
    class X
    {
    public:
        virtual B *foo(B *b)
        {
            std::cout << "X -> B foo(B)\t(Covariance_in_return)\n";
            return new B_impl();
        }
    };

    class Y : public X
    {
    public:
        C *foo(B *b) override;
    };

    C *Y::foo(B *b)
    {
        std::cout << "Y -> C foo(B)\t(Covariance_in_return)\n";
        return new C_impl();
    }
}