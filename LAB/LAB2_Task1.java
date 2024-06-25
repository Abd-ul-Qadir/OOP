import java.util.Scanner;

public class question1 {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int bsc_salry,alownce,gros_salry;
        System.out.println("Please Enter Basic Salary : ");
        bsc_salry=sc.nextInt();
        alownce=(60*bsc_salry)/100;
        gros_salry=alownce + bsc_salry;
        System.out.println(" Your Gross Salary is " + gros_salry);
    }
}
