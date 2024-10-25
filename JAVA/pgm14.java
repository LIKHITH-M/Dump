6. Develop a java program to create an enum as session and demonstrate the
usage of value(), valueOf() and ordinal() methods.
package partB;
enum Session
{
MORNING, AFTERNOON, EVENING, NIGHT
}
public class Program6 {
public static void main(String[] args) {
Session[] sessions = Session.values();
System.out.println(&quot;All Enum Constants:&quot;);
for (Session session : sessions)
{
System.out.println(session);
}
String sessionName = &quot;MORNING&quot;;
Session session = Session.valueOf(sessionName);
System.out.println(&quot;\nEnum Constant for Name &#39;&quot; + sessionName + &quot;&#39;: &quot; +session);

int ordinal = session.ordinal();
System.out.println(&quot;\nPosition of Enum Constant &quot; + session + &quot;: &quot; + ordinal);
}
}
