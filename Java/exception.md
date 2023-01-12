**Aim:Write a java program on Java exceptions.**
```java 
class Main {
 public static void main(String[] args) {
 try {
 // code that generate exception
 int divideByZero = 5 / 0;
 System.out.println("Rest of code in try block");
 }
 catch (ArithmeticException e) {
 System.out.println("ArithmeticException => " + e.getMessage());
 }
 }
}
```
**OUTPUT**
```
ArithmeticException => / by zero
```

**Example: Java Exception Handling using finally block**
```java 
class Main {
 public static void main(String[] args) {
 try {
 // code that generates exception
 int divideByZero = 5 / 0;
 }
 catch (ArithmeticException e) {
 System.out.println("ArithmeticException => " + e.getMessage());
 }

 finally {
 System.out.println("This is the finally block");
 }
 }
}
```
**OUTPUT**
```
ArithmeticException => / by zero
```

** Exception handling using Java throw**
```java 
class Main {
 public static void divideByZero() {
 throw new ArithmeticException("Trying to divide by 0");
 }
 public static void main(String[] args) {
 divideByZero();
 }
}
Run Code
Output
Exception in thread "main" java.lang.ArithmeticException: Trying to divide by 0
 at Main.divideByZero(Main.java:5)
 at Main.main(Main.java:9)
```
**OUTPUT**
```

```
