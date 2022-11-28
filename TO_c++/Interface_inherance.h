#ifndef Interface_inherance_h
#define Interface_inherance_h
class A{
    virtual void a() = 0;
};
class B: public A{
    virtual void b() = 0;
};
class C: public B{
    virtual void c() = 0;
};
#endif