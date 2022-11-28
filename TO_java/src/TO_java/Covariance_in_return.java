package TO_java;

import TO_java.Clases_implements_intefaces.*;
import TO_java.Interface_inherance.*;

public class Covariance_in_return {
    static public class X{
        B foo(B b){
            System.out.println("X -> B foo(B)\t(Covariance_in_return)");
            return new B_impl();
        }
    }
    static public class Y extends X{
        @Override
        C foo(B b){
            System.out.println("Y -> C foo(B)\t(Covariance_in_return)");
            return new C_impl();
        }
    }
}
