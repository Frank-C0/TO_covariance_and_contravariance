package TO_java;

import TO_java.Clases_implements_intefaces.*;
import TO_java.Interface_inherance.*;

public class Normal_implementation {
    static public class X{
        B foo(B b){
            System.out.println("X -> B foo(B)\t(Normal_implementation)");
            return new B_impl();
        }
    }
    static public class Y extends X{
        @Override
        B foo(B b){
            System.out.println("Y -> B foo(B)\t(Normal_implementation)");
            return new B_impl();
        }
    }
}
