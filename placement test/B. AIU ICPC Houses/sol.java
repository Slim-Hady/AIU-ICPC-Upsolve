/*
there is 2 another solution 
1- Math formula for celling just print ( (n + 4) / 5 )
2- See if the input % 5 ==0 -> print input / 5
else print input/5 + 1
*/
import java.util.*;

public class Main {
    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println((int)(Math.ceil((n*1.0/5))));
    }
}
