package Week2;

import java.util.Scanner;

public class Conversion {
	
	public static void main (String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter integer");
		int a=sc.nextInt();
		System.out.println("Enter double");
		double b=sc.nextDouble();
		System.out.println("Enter char");
		char c=sc.next().charAt(0);
		
		byte x1 =(byte)a;
		int x2 = (int)c;
		byte x3 = (byte)b;
		int x4 = (int)b;
		
		System.out.println("Int '" + a + "' to byte = " + x1);
		System.out.println("Char '" + c + "' to int = " + x2);
		System.out.println("Double '" + b + "' to byte = " + x3);
		System.out.println("Double '" + b + "' to int = " + x4);	
	}
}
