import java.util.Random;

public class DiceRoller {
    public static void main(String[] args) {
        Random rand = new Random();
        int dice = rand.nextInt(6) + 1; // 1 to 6
        System.out.println("You rolled: " + dice);
    }
}
