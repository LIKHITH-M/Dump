5. Write a program that sorts an array of strings using compareTo() to
determine bubble sort ordering.
package partB;
public class Program5 {
public static void main(String[] args) {
String[] stringArray = {&quot;Apple&quot;, &quot;Orange&quot;, &quot;Banana&quot;, &quot;Grape&quot;,

&quot;Pineapple&quot;};

int n = stringArray.length;
for (int i = 0; i &lt; n - 1; i++)
{
for (int j = 0; j &lt; n - i - 1; j++)
{
if (stringArray[j].compareTo(stringArray[j + 1]) &gt; 0)
{
String temp = stringArray[j];
stringArray[j] = stringArray[j + 1];
stringArray[j + 1] = temp;
}
}
}
System.out.println(&quot;Sorted String Array:&quot;);
for(String element : stringArray)
{
System.out.println(element);
}
}
}
