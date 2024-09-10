4. Write a Java program to convert an integer 257 to byte using narrowing type
conversion and widening type conversion.
package partA;
public class Program4
{
public static void main(String[] args)
{
int intValue = 257;
byte narrowedByteValue = (byte) intValue;
double widenedByteValue = intValue;
System.out.println(&quot;Original Int Value: &quot; + intValue);
System.out.println(&quot;Narrowed Byte Value (Explicit Casting): &quot; +

narrowedByteValue);

System.out.println(&quot;Widened Byte Value (Implicit Casting): &quot; +

widenedByteValue);
}
}
