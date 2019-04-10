package com.sf.test;

public class Test {

    public  native  void displayHelloWorld();

    static {
        System.loadLibrary("MyTest");
    }
}
