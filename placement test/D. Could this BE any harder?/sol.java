import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

            int T = sc.nextInt();
            while (T-- > 0) {
                int N = sc.nextInt();
                long K = sc.nextLong();
                long[] a = new long[N];
                for (int i = 0; i < N; i++) a[i] = sc.nextLong();

                int maxLen = 0;
                for (int i = 0; i < N; i++) {
                    long minVal = a[i];
                    long maxVal = a[i];
                    for (int j = i; j < N; j++) {
                        minVal = Math.min(minVal, a[j]);
                        maxVal = Math.max(maxVal, a[j]);

                        if (maxVal - minVal <= K) {
                            maxLen = Math.max(maxLen, j - i + 1);
                        } else {
                            break;
                        }
                    }
                }
                System.out.println(maxLen);
            }
        }
    }
}
