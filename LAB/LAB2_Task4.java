public class question4 {
	public static void main(String[] args) {
		
		int num1=0,num2=1,num3,count=14;
		
		for(int i=2;i<=14;i++)
		{
			num3 = num1 + num2;
			System.out.print("	  "+num3);
			num1=num2;
			num2=num3;
		}
	}
}