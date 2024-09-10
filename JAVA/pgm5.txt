Write a Java program to sort the string elements in a 1-dimensional array.



import java.util.Arrays;
import java.util.Scanner;

public class SortStringArray {
    public static void main(String[] args) {
        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);
        
        // Ask the user for the number of strings
        System.out.print("Enter the number of strings: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character
        
        // Create an array to store the strings
        String[] words = new String[n];
        
        // Read strings from the user
        System.out.println("Enter " + n + " strings:");
        for (int i = 0; i < n; i++) {
            words[i] = scanner.nextLine();
        }
        
        // Sort the array
        Arrays.sort(words);
        
        // Print the sorted array
        System.out.println("Sorted array:");
        for (String word : words) {
            System.out.println(word);
        }
        
        // Close the scanner
        scanner.close();
    }
}
