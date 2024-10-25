4. Write a program which creates two threads, one thread displaying
“Vidyavardhaka College of Engineering” once every ten seconds and another
displaying “CSE” once every two seconds.
package partB;
class CollegeNameThread extends Thread
{
public void run()
{
while (true)
{
System.out.println(&quot;Vidyavardhaka College of Engineering&quot;);
try
{
Thread.sleep(10000); // Sleep for 10 seconds
}
catch (InterruptedException e)
{
System.out.println(e);
}
}
}
}
class DepartmentThread extends Thread
{
public void run()
{
while (true)
{
System.out.println(&quot;CSE&quot;);
try
{
Thread.sleep(2000); // Sleep for 2 seconds
}
catch (InterruptedException e)
{
System.out.println(e);
}
}
}
}
public class Program4 {
public static void main(String[] args) {

CollegeNameThread ClgThread = new CollegeNameThread();
DepartmentThread DeptThread = new DepartmentThread();
ClgThread.start();
DeptThread.start();
}
}
