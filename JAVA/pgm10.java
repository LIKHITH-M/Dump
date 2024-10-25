2. Create a class Book which contains four members: name, author, price, num
of pages. Include a constructor to set the values for the members. Include
methods to set and get the details of the objects. Include a toString() method
that could display the complete details of the book. Develop a Java program to
create n book objects.
//Right click-source-Generate getters and setters-select required variables-Generate.
package partB;
class Book1
{
private String name;
private String author;
private double price;
private int numOfPages;
public String getName() {
return name; }
public void setName(String name) {
this.name = name; }
public String getAuthor() {
return author; }
public void setAuthor(String author) {
this.author = author; }
public double getPrice() {
return price; }
public void setPrice(double price) {
this.price = price; }
public int getNumOfPages() {
return numOfPages; }
public void setNumOfPages(int numOfPages) {
this.numOfPages = numOfPages; }
public String toString()
{
return &quot;Book Details \n&quot; +

&quot;Name: &quot; + name + &quot;\n&quot; +
&quot;Author: &quot; + author + &quot;\n&quot; +
&quot;Price: $&quot; + price + &quot;\n&quot; +
&quot;Number of Pages: &quot; + numOfPages;

}
}
public class Program2 {
public static void main(String[] args) {
int n = 2;
Book1[] books = new Book1[n];
books[0] = new Book1();
books[0].setName(&quot;Java Programming&quot;);
books[0].setAuthor(&quot;John Doe&quot;);
books[0].setPrice(29.99);
books[0].setNumOfPages(400);
books[1] = new Book1();
books[1].setName(&quot;Data Structures and Algorithms&quot;);
books[1].setAuthor(&quot;Jane Smith&quot;);
books[1].setPrice(39.95);
books[1].setNumOfPages(550);
System.out.println(&quot;Book Details using getter methods&quot;);
for (int i = 0; i &lt; n; i++)
{
System.out.println(&quot;Book &quot; + (i+1));
System.out.println(books[i].getName());
System.out.println(books[i].getAuthor());
System.out.println(books[i].getPrice());
System.out.println(books[i].getNumOfPages());
}
System.out.println(&quot;\nBook Details using toString()&quot;);
for (int i = 0; i &lt; n; i++)
{
System.out.println(books[i].toString());
}
}
}
