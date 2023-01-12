**Aim:Write a java program on Graphics class.**
```java 
//Rectangle.java
import java.awt.*;
import java.applet.*;
public class Rectangle extends Applet
{
public void paint(Graphics g)
{
g.drawRect(10,10,60,50);
g.fillRect(100,100,100,0);
g.drawRoundRect(190,10,60,50,15,15);
g.fillRoundRect(70,90,140,100,30,40);
}
}
//Rectangle.html
<html>
<head>
<applet code=Rectangle.class
width=300 Height=250>
</applet>
</head>
</html>
```
**OUTPUT**

![image](https://user-images.githubusercontent.com/54370549/212139703-948a98fd-e5ed-4632-b214-778fd12afaf4.png)

