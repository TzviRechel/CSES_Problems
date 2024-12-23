import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();

        if (n == 1) {
            System.out.println(1);
        } else if (n == 2 || n == 3) {
            System.out.println("NO SOLUTION");
        } else {
            StringBuilder result = new StringBuilder();
            
            // Append even numbers
            for (int i = 2; i <= n; i += 2) {
                result.append(i).append(" ");
            }
            
            // Append odd numbers
            for (int i = 1; i <= n; i += 2) {
                result.append(i).append(" ");
            }
            
            System.out.println(result.toString().trim());
        }
    }
}