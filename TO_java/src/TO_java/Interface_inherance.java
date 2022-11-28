package TO_java;


public class Interface_inherance {
    static public interface A {
        void a();
    }
    static public interface B extends A {
        void b();
    }
    static public interface C extends B {
        void c();
    }
}
