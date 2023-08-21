package Week2;

import java.util.Scanner;

public class SwapString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
        Scanner sc = new Scanner (System.in);
        
        System.out.print("Enter string");
        String s = sc.nextLine();
        System.out.print("Enter number");
        int n = sc.nextInt();
        
        System.out.println("Before swap, String= '"+ s +"' , Int= '"+ n + "'");
        
        int x = n;
        n = Integer.parseInt(s); 
        s = String.valueOf(x);
        
        System.out.println("After swap, String= '"+ s +"' , Int= '"+ n + "'");
	}
}
