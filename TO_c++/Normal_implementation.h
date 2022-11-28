#include "Interface_inherance.h"
#include "Clases_implements_intefaces.h"
#include <iostream>

namespace Normal_implementation
{
    class X
    {
    public:
        virtual B *foo(B *b)
        {
            std::cout << "X -> B foo(B)\t(Normal_implementation)\n";
            return new B_impl();
        }
    };

    class Y : public X
    {
    public:
        B *foo(B *b) override;
    };

    B *Y::foo(B *b)
    {
        std::cout << "Y -> B foo(B)\t(Normal_implementation)\n";
        return new B_impl();
    }

}