1. Write a Java program that prompts the user for an integer N and generates
all
the prime numbers up to N.
package partA;
import java.util.Scanner;
public class Program1
{
public static void main(String[] args)
{
Scanner obj = new Scanner(System.in);
System.out.print(&quot;Enter an integer N: &quot;);
int N = obj.nextInt();
System.out.print(&quot;Prime numbers up to &quot; + N + &quot; is:&quot;);
for(int i = 2; i &lt;= N; i++)
{
boolean Prime = true;
for(int j = 2; j&lt;i; j++)
{
if (i % j == 0)
{
Prime = false;
break;
}
}
if (Prime)
{
System.out.print(i + &quot; &quot;);
}
}

obj.close();
}
}
