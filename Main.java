import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int t = sc.nextInt();
            while (t-- > 0) {
                int n = sc.nextInt();
                int[] a = new int[n];
                for (int i = 0; i < n; i++) {
                    a[i] = sc.nextInt();
                }

                // Option 1: Remove smallest. Range: last - second
                int diff1 = a[n - 1] - a[1];

                // Option 2: Remove largest. Range: second_last - first
                int diff2 = a[n - 2] - a[0];

                System.out.println(Math.min(diff1, diff2));
            }
        }
        sc.close();
    }
}