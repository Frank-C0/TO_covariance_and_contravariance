package TO_java;

import TO_java.Interface_inherance.*;
import TO_java.Clases_implements_intefaces.*;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");

        test_covariance_in_parameter();
        test_covariance_in_return();
        test_contravariance_in_parameter();
        test_contravariance_in_return();

    }

    static void test_covariance_in_parameter(){
        TO_java.Covariance_in_parameter.X x = new TO_java.Covariance_in_parameter.X();
        TO_java.Covariance_in_parameter.X y = new TO_java.Covariance_in_parameter.Y();

        x.foo(new B_impl());
        y.foo(new B_impl());
    }
    static void test_covariance_in_return(){
        TO_java.Covariance_in_return.X x = new TO_java.Covariance_in_return.X();
        TO_java.Covariance_in_return.X y = new TO_java.Covariance_in_return.Y();

        x.foo(new B_impl());
        y.foo(new B_impl());
    }
    static void test_contravariance_in_parameter(){
        TO_java.Contravariance_in_parameter.X x = new TO_java.Contravariance_in_parameter.X();
        TO_java.Contravariance_in_parameter.X y = new TO_java.Contravariance_in_parameter.Y();

        x.foo(new B_impl());
        y.foo(new B_impl());
    }
    static void test_contravariance_in_return(){
        TO_java.Contravariance_in_return.X x = new TO_java.Contravariance_in_return.X();
        TO_java.Contravariance_in_return.X y = new TO_java.Contravariance_in_return.Y();

        x.foo(new B_impl());
        y.foo(new B_impl());
    }
    

}
