package Week2;

import java.util.Scanner;

public class SalaryCal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner (System.in);
		
		double sal=0,rate;
		
		System.out.println("Enter hours worked");
		int hours = sc.nextInt();
		
		System.out.println("Enter rate");
		rate = sc.nextDouble();
		
		if (hours<0 || rate<0)
		{
			System.out.println("Invalid Input");
			System.exit(0);
		}
		
		if (hours<=40)
		{
			sal= hours*rate;
		}
		else
		{
			sal = (40*rate) + ((hours-40)*(1.5*rate));
		}

		System.out.println("Total salary=" + sal);
	}
}
