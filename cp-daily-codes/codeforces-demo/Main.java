import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String username = scanner.next();
        Set<Character> set = new HashSet<>();
        for (char ch : username.toCharArray()) {
            set.add(ch);
        }
        int len = set.size();
        if (len % 2 != 0) {
            System.out.println("IGNORE HIM!");
        } else {
            System.out.println("CHAT WITH HER!");
        }
        scanner.close();

    }
}
