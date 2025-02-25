import java.util.Scanner;

public class Test {
    // Method to convert decimal to binary using bitwise operations
    public static String toBinary(int num) {
        StringBuilder binary = new StringBuilder();
        while (num > 0) {
            binary.append(num & 1); // Get the last bit using bitwise AND
            num >>= 1; // Right shift the number
        }
        return binary.reverse().toString();
    }

    // Recursive method to convert decimal to octal
    public static String toOctal(int num) {
        if (num == 0) return "";
        return toOctal(num / 8) + (num % 8);
    }

    // Recursive method to convert decimal to hexadecimal
    public static String toHexadecimal(int num) {
        if (num == 0) return "";
        char[] hexChars = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        return toHexadecimal(num / 16) + hexChars[num % 16];
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Number : ");
        int number = scanner.nextInt();
        scanner.close();
        
        System.out.println("Given Number : " + number);
        System.out.println("Binary equivalent : " + (number == 0 ? "0" : toBinary(number)));
        System.out.println("Octal equivalent : " + (number == 0 ? "0" : toOctal(number)));
        System.out.println("Hexadecimal equivalent : " + (number == 0 ? "0" : toHexadecimal(number)));
    }
}
