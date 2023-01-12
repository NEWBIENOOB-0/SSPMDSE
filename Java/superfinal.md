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
