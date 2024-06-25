import java.util.Scanner;

public class question3 {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] numbers = new int[10];
        System.out.println("Please Enter 10 Numbers");
        for (int i=0;i<10;i++){
            numbers[i]=sc.nextInt();
        }
        int max=numbers[0], min=numbers[0];
        for (int i=0;i<10;i++){
            if(numbers[i]>max){
                max=numbers[i];
            }
            min=numbers[0];
            if(numbers[i]<min){
                min=numbers[i];
            }
        }
        System.out.println("Largest Number is "+max);
        System.out.println("Smallest Number is "+min);
}
}