package Week1;

import java.util.Scanner;

public class TaxiKms {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        int fare;
        float dist=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter amount paid : ");
        fare=sc.nextInt();
        
        if (fare<=0)
        {
        	System.out.println("Invalid Input");
        	System.exit(0);
        }
        
        if (fare<=50)
        {
            dist=(fare/10);
            System.out.println(dist);
        }
        else if (fare<=170)
        {
        	dist=15 + ((fare-50)/8);
        	System.out.println(dist);
        }
        else
        {
            dist=20 + ((fare-170)/5);
            System.out.println(dist);  	
        }
        System.out.println("The total dist travelled is " + dist);
        }
	}
