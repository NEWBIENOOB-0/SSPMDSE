**Aim: Write a java program on strings and arrays**
```java 
public class StringsAndArrays {
    public static void main(String[] args) {
        // Create a String array with 3 elements
        String[] myArray = new String[3];
        myArray[0] = "Hello";
        myArray[1] = "World";
        myArray[2] = "!";

        // Print out the elements of the array
        for (int i=0; i<myArray.length; i++) {
            System.out.print(myArray[i]);
        }

        // Create a String from the array elements 
        String myString = String.join(" ", myArray);

        // Print out the string 
        System.out.println("\n" + myString);

    } 
}

```
**OUTPUT**
```
HelloWorld!
Hello World!
```
---
**part 2**
```java 
class Testarray{
public static void main(String args[]){
int a[]=new int[5];//declaration and instantiation
a[0]=10;//initialization
a[1]=20;
a[2]=70;
a[3]=40;
a[4]=50;
//traversing array
for(int i=0;i<a.length;i++)//length is the property of array
System.out.println(a[i]);
}}
```
**OUTPUT**
```
10
20
70
40
50
```
