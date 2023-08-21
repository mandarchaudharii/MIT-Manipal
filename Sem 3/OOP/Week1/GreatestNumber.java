package Week1;

import java.util.Scanner;

public class GreatestNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        int a,b,c;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter first value");
        a=scn.nextInt();
        System.out.println("Enter second value");
        b=scn.nextInt();
        System.out.println("Enter third value");
        c=scn.nextInt();
        
        if (a>c && a>b)
        {
        	System.out.println(a + " is the greatest number");
        }
        else if (a>c && a>b)
        {
        	System.out.println(b + " is the greatest number");
        }
        else
        {
        	System.out.println(c + " is the greatest number");
        }
    }
}