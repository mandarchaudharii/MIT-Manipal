package Week1;

import java.util.Scanner;

public class RegistrationNo {

    public static void main(String[] args) {
        
        int yr,reg,x,y;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter registration number : ");
        reg=scn.nextInt();
        
        if (reg>=240000000 || reg<=100000000)
        {
        	System.out.println("Invalid Input");
        	System.exit(0);
        }
        
        yr=reg/10000000;
        
        if (yr<24)
        {
            x=yr+2000;
            System.out.println("The year of joining is " + x);
        }
        else
        {
            y=yr+1900;
            System.out.println("The year of joining is " + y);
        }
    }
}