package TO_java;

import TO_java.Clases_implements_intefaces.*;
import TO_java.Interface_inherance.*;

public class Contravariance_in_return {
    static public class X{
        B foo(B b){
            System.out.println("X -> B foo(B)\t(Contravariance_in_return)");
            return new B_impl();
        }
    }
    static public class Y extends X{
        @Override       // error: method does not override or implement a method from a supertype
        A foo(B b){     // error: foo(B) in Y cannot override foo(B) in X
            System.out.println("Y -> A foo(B)\t(Contravariance_in_return)");
            return new B_impl();
        }
    }
}
