import java.util.Scanner;

public class question2 {
	public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        float time;
        System.out.println("Please Enter Time Taken By Worker : ");
        time=sc.nextInt();
        if (time!=0 && time>2){
            
            if (time>=2 && time<=3){
                System.out.println(" Worker is Highly Efficient ");
            }else if (time>3 && time<=4){
                System.out.println(" Worker is Ordered to Improve Speed ");
            }else if (time>4 && time<=5){
                System.out.println(" Worker is given Training to Improve Speed ");
            }else{
                System.out.println(" Worker is dismissed from Company ");
            }
            }else{
                System.out.println("You Entered Wrong Input");
            }
}
}
