import java.util.Scanner;
class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();
        String rev = new StringBuilder(str).reverse().toString();
        if (str.equals(rev)) System.out.println("Palindrome");
        else System.out.println("Not Palindrome");
    }
}
