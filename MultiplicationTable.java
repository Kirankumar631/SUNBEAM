public class MultiplicationTable {
    public static void main(String[] args) {
        // Check if the user has provided an argument
        if (args.length != 1) {
            System.out.println("Usage: java MultiplicationTable <number>");
            return;
        }
        
        try {
            // Parse the argument as an integer
            int number = Integer.parseInt(args[0]);
            
            // Display the multiplication table
            System.out.println("Multiplication Table of " + number + ":");
            for (int i = 1; i <= 10; i++) {
                System.out.println(number + " x " + i + " = " + (number * i));
            }
        } catch (NumberFormatException e) {
            System.out.println("Please enter a valid integer.");
        }
    }
}
