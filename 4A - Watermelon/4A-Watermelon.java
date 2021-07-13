import java.util.*; 

public class MyClass {
    public static void main(String args[]) {
      
      Scanner s = new Scanner(System.in);
      int watermelon = s.nextInt();
      
      if((watermelon % 2==1) || watermelon==2)
        System.out.println("NO");
      else
        System.out.println("YES");
    }
}