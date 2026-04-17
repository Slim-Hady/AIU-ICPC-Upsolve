import java.util.*;

public class Main {
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
      
            int n = sc.nextInt();
            
            ArrayList<Long> odd = new ArrayList<>();
            ArrayList<Long> even = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                long a = sc.nextLong();
                // Check if odd using bitwise AND (same as a % 2 != 0)
                if ((a & 1) == 1) {
                    odd.add(a);
                } else {
                    even.add(a);
                }
            }

            if (odd.isEmpty() || even.isEmpty()) {
                System.out.println(-1);
            } else {
                // Find max in both lists
                long maxOdd = Collections.max(odd);
                long maxEven = Collections.max(even);
                
                System.out.println(maxOdd + maxEven);
            }
        }
    }
}
