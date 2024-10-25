3. Write a program that demonstrates handling of exceptions in inheritance.
Create a base class called “Father” and derived class called “Son” which
extends the base class. In Father class, implement a constructor which takes
the age and throws the exception Wrong Age () i.e when the input age is
equal to father’s age.
package partB;
import java.util.Scanner;
class Father
{
int Fage;
Scanner input = new Scanner(System.in);
Father()
{
System.out.println(&quot;Enter father&#39;s age:&quot;);
Fage=input.nextInt();
}
}
class Son extends Father
{
int Sage;
Scanner input = new Scanner(System.in);
Son()
{
//super();
System.out.println(&quot;Enter son&#39;s age:&quot;);
Sage=input.nextInt();
}
}
class WrongAgeException extends Exception
{
public WrongAgeException(String str)
{
System.out.println(str);
}
}

public class Program3 {
public static void main(String[] args) throws WrongAgeException {

Son s=new Son();
try
{
if(s.Sage&gt;=s.Fage)
throw new WrongAgeException(&quot;Exception:&quot;);
else
System.out.println(&quot;You have entered a Valid Age&quot;);

}
catch(WrongAgeException e)
{
System.out.println(e + &quot; SON&#39;S AGE &gt;= FATHER&#39;S AGE&quot;);
}
}
}
