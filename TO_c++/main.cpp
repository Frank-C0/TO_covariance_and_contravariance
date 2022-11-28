#include "Normal_implementation.h"
#include "Covariance_in_return.h"
#include "Covariance_in_parameter.h"
#include "Contravariance_in_return.h"
#include "Contravariance_in_parameter.h"

#include "Interface_inherance.h"
#include "Clases_implements_intefaces.h"

void test_Normal_implementation()
{
    Normal_implementation::X *x = new Normal_implementation::X();
    Normal_implementation::X *y = new Normal_implementation::Y();

    B *b_temp = new B_impl();

    x->foo(b_temp);
    y->foo(b_temp);

}
void test_Covariance_in_return()
{
    Covariance_in_return::X *x = new Covariance_in_return::X();
    Covariance_in_return::X *y = new Covariance_in_return::Y();

    B *b_temp = new B_impl();

    x->foo(b_temp);
    y->foo(b_temp);
}
void test_Covariance_in_parameter()
{
    Covariance_in_parameter::X *x = new Covariance_in_parameter::X();
    Covariance_in_parameter::X *y = new Covariance_in_parameter::Y();

    B *b_temp = new B_impl();
    C *c_temp = new C_impl();

    x->foo(b_temp);
    y->foo(c_temp);
}
void test_Contravariance_in_return()
{
    Contravariance_in_return::X *x = new Contravariance_in_return::X();
    Contravariance_in_return::X *y = new Contravariance_in_return::Y();

    B *b_temp = new B_impl();

    x->foo(b_temp);
    y->foo(b_temp);
}
void test_Contravariance_in_parameter()
{
    Contravariance_in_parameter::X *x = new Contravariance_in_parameter::X();
    Contravariance_in_parameter::X *y = new Contravariance_in_parameter::Y();

    A *a_temp = new A_impl();
    B *b_temp = new B_impl();

    x->foo(b_temp);
    y->foo(a_temp);   
}



int main()
{
    test_Normal_implementation();
    test_Covariance_in_return();
    test_Covariance_in_parameter();
    test_Contravariance_in_return();
    test_Contravariance_in_parameter();
    
}