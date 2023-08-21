package Week2;

import java.util.Scanner;

public class LeapYear {

	public static void main(String[] args){
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter year");
		int yr=sc.nextInt();
		
		if (yr<0)
		{
			System.out.println("Invalid Input");
			System.exit(0);
		}
		
		boolean leap= false;
		
		if (yr%4 !=0)
		{
			leap = false;
		}
		else if (yr%100 !=0)
		{
			leap = true;
		}
		else if (yr%400 !=0) 
		{
			leap =false;
		}
		else
		{
			leap = true;
		}
		
		if (leap)
			System.out.println(yr + " is a leap year");
		else
			System.out.println(yr + " is not a leap year");
	}
}
