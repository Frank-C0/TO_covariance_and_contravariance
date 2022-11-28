#ifndef Clases_implements_intefaces_h
#define Clases_implements_intefaces_h

#include "Interface_inherance.h"
#include <iostream>
class A_impl: public A{
    void a(){
        std::cout<<"A_implementation a()"<<'\n';
    }
};
class B_impl: public B{
    void a(){
        std::cout<<"B_implementation a()"<<'\n';
    }
    void b(){
        std::cout<<"B_implementation b()"<<'\n';
    }
};
class C_impl: public C{
    void a(){
        std::cout<<"C_implementation a()"<<'\n';
    }
    void b(){
        std::cout<<"C_implementation b()"<<'\n';
    }
    void c(){
        std::cout<<"C_implementation c()"<<'\n';
    }
};
#endif