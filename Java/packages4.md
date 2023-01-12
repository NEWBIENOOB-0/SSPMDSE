**Aim: Write a java program on pacakges**
```java 
class StringBufferExample7{
public static void main(String args[]){
StringBuffer sb=new StringBuffer();
System.out.println(sb.capacity());//default 16
sb.append("Hello");
System.out.println(sb.capacity());//now 16
sb.append("java is my favourite language");
System.out.println(sb.capacity());//now (16*2)+2=34 i.e (oldcapacity*2)+2
sb.ensureCapacity(10);//now no change
System.out.println(sb.capacity());//now 34
sb.ensureCapacity(50);//now (34*2)+2
System.out.println(sb.capacity());//now 70
}
} 
```
**OUTPUT**
```
16
16
34
34
70
```
---
**part 2**

**Aim: Write a java program on pacakges**
```java 
import java.util.Vector;
class Main {
 public static void main(String[] args) {
 Vector<String> mammals= new Vector<>();
 mammals.add("Dog");
 mammals.add("Horse");
 mammals.add(2, "Cat");
 System.out.println("Vector: " + mammals);
 Vector<String> animals = new Vector<>();
 animals.add("Crocodile");
 animals.addAll(mammals);
 System.out.println("New Vector: " + animals);
 }
}
```
**OUTPUT**
```
Vector: [Dog, Horse, Cat]
New Vector: [Crocodile, Dog, Horse, Cat]
```
