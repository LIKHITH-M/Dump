8. Design a super class called Employee with details as EmpID, Name, Phone,
Salary, extend this class by writing two subclasses namely Tester (ProjectID,
ProjectName), Developer (ProjectName). Write a Java Program to read and
display at least 2 Employee objects of all two categories using Inheritance.
package partA;
class Employee
{
int empID;
String name;
String phone;
double salary;
Employee(int empID, String name, String phone, double salary)
{
this.empID = empID;
this.name = name;
this.phone = phone;
this.salary = salary;
}
void displayDetails()
{
System.out.println("Employee ID: " + empID);
System.out.println("Name: " + name);
System.out.println("Phone: " + phone);
System.out.println("Salary: $" + salary);
}
}
class Tester extends Employee
{
int projectID;
String projectName;
Tester(int empID, String name, String phone, double salary,
int projectID, String projectName)
{
super(empID, name, phone, salary);
this.projectID = projectID;
this.projectName = projectName;
}
public void displayDetails()
{
super.displayDetails();
System.out.println("Project ID: " + projectID);
System.out.println("Project Name: " + projectName);
System.out.println("------------------------------");
}
}
class Developer extends Employee
{
String projectName;
Developer(int empID, String name, String phone, double salary, String
projectName)
{
super(empID, name, phone, salary);
this.projectName = projectName;
}
void displayDetails()
{
super.displayDetails();
System.out.println("Project Name: " + projectName);
System.out.println("------------------------------");
}
}
public class Program8 {
public static void main(String[] args) {
Tester tester1 = new Tester(1, "Alice", "1234567890", 60000, 101,
"ProjectA");
Tester tester2 = new Tester(2, "Bob", "9876543210", 65000, 102,
"ProjectB");
Developer developer1 = new Developer(3, "Charlie", "5551234567",
70000, "ProjectC");
Developer developer2 = new Developer(4, "David", "9998887776",
75000, "ProjectD");
System.out.println("Tester 1 Details:");
tester1.displayDetails();
System.out.println("Tester 2 Details:");
tester2.displayDetails();
System.out.println("Developer 1 Details:");
developer1.displayDetails();
System.out.println("Developer 2 Details:");
developer2.displayDetails();
}}
