1. Develop a Java program to create an interface named Shape that contains a
method named printArea(). Provide three classes named Rectangle,
Triangle and Circle such that each one of the classes extends the interface
Shape. Each one of the classes contains only the method printArea() that
prints the area of the given shape.
package partB;
interface Shape
{
void printArea();
}
class Rectangle implements Shape
{
private double length; private double width;
public Rectangle(double length, double width)
{
this.length = length;
this.width = width;
}
public void printArea()
{
double area = length * width;
System.out.println(&quot;Area of Rectangle: &quot; + area);
}
}
class Triangle implements Shape
{
private double base; private double height;
public Triangle(double base, double height)
{
this.base = base;
this.height = height;
}
public void printArea()
{
double area = 0.5 * base * height;
System.out.println(&quot;Area of Triangle: &quot; + area);
}
}

class Circle implements Shape
{

private double radius;
public Circle(double radius)
{
this.radius = radius;
}
public void printArea()
{
double area = Math.PI * radius * radius;
System.out.println(&quot;Area of Circle: &quot; + area);
}
}
public class Program1 {
public static void main(String[] args) {
Rectangle rectangle = new Rectangle(5, 10);
Triangle triangle = new Triangle(6, 8);
Circle circle = new Circle(4);
rectangle.printArea();
triangle.printArea();
circle.printArea();
}
}
