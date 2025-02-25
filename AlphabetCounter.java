import java.util.Scanner;

public class AlphabetCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a string from the user
        System.out.print("Input: ");
        String input = scanner.nextLine();

        // Convert the string to lowercase to make the count case insensitive
        input = input.toLowerCase();

        // Array to store the count of each alphabet (a-z)
        int[] alphabetCount = new int[26];

        // Iterate through the string and count occurrences of each alphabet
        for (char ch : input.toCharArray()) {
            if (ch >= 'a' && ch <= 'z') { // Check if the character is an alphabet
                alphabetCount[ch - 'a']++; // Increment the count for the corresponding alphabet
            }
        }

        // Display the count of each alphabet
        System.out.println("Output:");
        for (int i = 0; i < 26; i++) {
            if (alphabetCount[i] > 0) {
                System.out.println((char) (i + 'A') + " : " + alphabetCount[i]);
            }
        }

        scanner.close();
    }
}