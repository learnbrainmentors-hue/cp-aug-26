import java.util.Scanner;

public class IfElse {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the age");
        int age = scanner.nextInt();
        if (true || true) {
            // if (true) {
            // if (age >= 18) {
            System.out.println("U can vote");
        } else {
            System.out.println("U can't vote");
        }

        scanner.close();

    }
}
