package Week2;

import java.util.Scanner;

public class Multiplication {

 public static void main(String[] args) {
     Scanner scanner = new Scanner(System.in);
     
     System.out.print("Enter integer ");
     int num = scanner.nextInt();
     
     System.out.print("Enter the value of n: ");
     int n = scanner.nextInt();
     
     int multiply = num << n;
     
     System.out.println("Original number: " + num);
     System.out.println(multiply);
 }
}