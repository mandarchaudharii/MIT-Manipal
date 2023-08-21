package Week1;

import java.util.Scanner;

public class Retirement {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int date, month, year, ret;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter date of birth : ");
        date=scn.nextInt();
        
        if (date<=0 || date>=32)
        {
        	System.out.println("Invalid Input");
        	System.exit(0);
        }
        
        System.out.println("Enter month of birth : ");
        month=scn.nextInt();
        
        if (month<=0 || month>=13)
        {
        	System.out.println("Invalid Input");
        	System.exit(0);
        }
        
        System.out.println("Enter year of birth : ");
        year=scn.nextInt();
        
        if (year>=2023 || year<=1923)
        {
        	System.out.println("Invalid Input");
        	System.exit(0);
        }
        
        ret=year+60;
        
        System.out.println("The year of retirement is "+ ret);
    }
}
