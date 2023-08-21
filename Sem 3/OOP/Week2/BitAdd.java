package Week2;

import java.util.Scanner;

public class BitAdd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

        Scanner sc = new Scanner (System.in);
        int n1, n2, and;
		System.out.println("Enter 1st no");
		n1=sc.nextInt();
		System.out.println("Enter 2nd no");
		n2=sc.nextInt();
		while(n2!=0)
		{
			and=n1&n2;
			n1=n1^n2;
			n2=and<<1;
		}
		
		System.out.println("Bitwise Sum = " + n1);
		if(n1%2==0)
			System.out.print("Sum is even");
		else
			System.out.print("Sum is odd");
	}

}
