**Aim:Write a java program using super and final keyword. **
```java 
class employee {
int wt = 8;
}
class clerk extends employee {
int wt = 10; //work time
void display() {
 System.out.println(super.wt); //will print work time of clerk
}
public static void main(String args[]) {
 clerk c = new clerk();
 c.display();
}
}
```
**OUTPUT**
```
8
```
---
**part 2**
```java 
final class stud {
// Methods cannot be extended to its sub class
}
class books extends stud {
void show() {
 System.out.println("Book-Class method");
}
public static void main(String args[]) {
 books B1 = new books();
 B1.show();
}
}
```
**OUTPUT**
```
This will show an error that:
error: cannot inherit from final stud
class books extends stud{
```
