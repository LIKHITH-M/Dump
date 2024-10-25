7. Write a Java program to implement the SQL commands using JDBC.
package partB;
import java.sql.*;
public class Program7 {
public static void main(String[] args) {
try
{
Class.forName(&quot;com.mysql.cj.jdbc.Driver&quot;);
System.out.println(&quot;Driver loaded successfully&quot;);
Connection con=DriverManager.getConnection(&quot;jdbc:mysql:&quot; +
&quot;//localhost:3306/student&quot;,&quot;root&quot;,&quot;root@123&quot;);
System.out.println(&quot;Connection established sucessfully&quot;+con);
Statement stmt=con.createStatement();
stmt.executeUpdate(&quot;insert into student (Name, USN, Sem) &quot;
+ &quot;values (&#39;Kiran&#39;,&#39;4VV21CS004&#39;,3)&quot;);
ResultSet rs=stmt.executeQuery(&quot;select * from student&quot;);
System.out.println(&quot;Name \tUSN \t\tSem&quot;);
while(rs.next())
System.out.println( rs.getString(1)+&quot;\t&quot;+
rs.getString(2)+&quot;\t&quot;+
rs.getInt(3));

con.close();
}
catch(Exception e)
{
System.out.println(e);
}
}
}



//Java steps for pgm7

1.import package
2.Load and Register the Driver
3.Establish the connection
4.Create the statement
5.Execute the query
6.Process the Result
7.Close the Connection


//steps to install MySQL in windows
1.search MySQL
2.go to downloads
3.select MySQL Community(GPL) Downloads
4.MySQL Installer for Windows
5.Windows (x86, 32-bit), MSI Installer  (2nd one)

//uninstalling
1.Control Panel
2.Right Click on Workspace and Uninstall

//installation
1.exe file
2.yes
3.Choosing a Setup type --> custom
4.Select product : Available Products: MySQL Servers : MySQL Server 8.0.40 -X64 --> click on the green arrow
9. Applications: same step for MySQL Workbench ,Server ,Router
ensure to have 4 packages
10.execute
11.next next
12.In Type and Networking check for Config type to be Development Computer and port to be 3306

13.In Accounts and Roles set the password as root@123
14.In Appy Configuration -->Execute
15.Finish-->Next-->Finish-->next-->Finish
16.In MySQL workbench select Localhost and there type the password i.e. root@123

//In Workbench
1.Select Schema looks like a database symbol and give the name to be student and apply then apply and finish

2.In Schemas select the student schema which should be bold
3.Select table and name it as student
4.enter column name as Name,USN,Sem -->apply apply finish
5.Double click on the table i.e. expand that and select on the last icon that is present there
6.Enter the values there and apply



//1.search MySQL
2.go to downloads
3.select MySQL Community(GPL) Downloads
4.Select Connector/J
5.Select OS-->Platform Independent-->download ZIP file
6.Right Click -->Extract all
7.jarfile
