package TO_java;

import TO_java.Clases_implements_intefaces.*;
import TO_java.Interface_inherance.*;

public class Contravariance_in_parameter {
    static public class X{
        B foo(B b){
            System.out.println("X -> B foo(B)\t(Contravariance_in_parameter)");
            return new B_impl();
        }
    }
    static public class Y extends X{
        @Override       // error: method does not override or implement a method from a supertype 
        B foo(A b){     // (es un metodo diferente a X.foo(B))
            System.out.println("Y -> B foo(A)\t(Contravariance_in_parameter)");
            return new B_impl();
        }
    }
}
