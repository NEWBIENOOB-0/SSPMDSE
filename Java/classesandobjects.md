**Aim: Write a java program on class and objects.**
```java
class Lamp {
 boolean isOn;
 void turnOn() {
 isOn = true;
 System.out.println("Light on? " + isOn);
 }
 void turnOff() {
 isOn = false;
 System.out.println("Light on? " + isOn);
 }
}
class Main {
 public static void main(String[] args) {
 Lamp led = new Lamp();
 Lamp halogen = new Lamp();
 led.turnOn();
 halogen.turnOff();
 }
}
```
**OUTPUT**
```
Light on? true
Light on? false
```
