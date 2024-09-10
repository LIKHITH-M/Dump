
Write a Java program to sum all the elements of an array using for-each version of for loop.


import java.util.Scanner;

public class SumArrayElements {
    public static void main(String[] args) {
        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);

        // Ask the user for the number of elements in the array
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        // Create an array to store the elements
        int[] numbers = new int[size];

        // Read array elements from the user
        System.out.println("Enter " + size + " elements:");
        for (int i = 0; i < size; i++) {
            numbers[i] = scanner.nextInt();
        }

        // Calculate the sum of all elements using the for-each loop
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }

        // Display the sum
        System.out.println("The sum of the array elements is: " + sum);

        // Close the scanner
        scanner.close();
    }
}
