7. Create a Java class Customer with the following details as variables within
it: CustID, Name, Age, Phone, Place. Write a Java program to create n
Customers objects and print the CustID, Name, Age, Phone and Place of these
objects with suitable headings using “this” keyword.
package partA;
class Customer
{
int custID;
String name;
int age;
String phone;
String place;
Customer(int custID, String name, int age, String phone, String place)
{
this.custID = custID;
this.name = name;
this.age = age;
this.phone = phone;
this.place = place;
}
void displayDetails()
{
System.out.println("Customer ID: " + this.custID);
System.out.println("Name: " + this.name);
System.out.println("Age: " + this.age);
System.out.println("Phone: " + this.phone);
System.out.println("Place: " + this.place);
System.out.println("------------------------------");
}
}
public class Program7 {
public static void main(String[] args) {
Customer[] customers = new Customer[3];
customers[0] = new Customer(1, "Alice", 25, "9234567890", "New
York");
customers[1] = new Customer(2, "Bob", 30, "9876543210", "London");
customers[2] = new Customer(3, "Charlie", 28, "6551234567",
"Sydney");
for (Customer customer : customers)
{
customer.displayDetails();
}
}
}
