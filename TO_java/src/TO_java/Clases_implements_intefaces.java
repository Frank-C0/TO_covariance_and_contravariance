package TO_java;
import TO_java.Interface_inherance.*;

public class Clases_implements_intefaces {
    static public class A_impl implements A {
        @Override
        public void a() {
            System.out.println("A_implementation a()");
        }
    }

    static public class B_impl implements B {
        @Override
        public void a() {
            System.out.println("B_implementation a()");
        }
        @Override
        public void b() {
            System.out.println("B_implementation b()");
        }
    }
    static public class C_impl implements C {
        @Override
        public void a() {
            System.out.println("C_implementation a()");
        }

        @Override
        public void b() {
            System.out.println("C_implementation b()");
        }

        @Override
        public void c() {
            System.out.println("C_implementation c()");
        }
    }
}
