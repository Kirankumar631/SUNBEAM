import java.util.Scanner;

// Define Student class
class Student {
    private String studentName;
    private String rollNo;
    private int totalMarks;

    // Constructor to initialize Student object
    public Student(String studentName, String rollNo, int totalMarks) {
        this.studentName = studentName;
        this.rollNo = rollNo;
        this.totalMarks = totalMarks;
    }

    // Method to display student details
    public void displayDetails() {
        System.out.println("Student Name: " + studentName);
        System.out.println("Roll Number: " + rollNo);
        System.out.println("Total Marks: " + totalMarks);
    }
}

public class StudentDetails {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read student details
        System.out.print("Enter Student Name: ");
        String name = scanner.nextLine();

        System.out.print("Enter Roll Number: ");
        String rollNo = scanner.nextLine();

        System.out.print("Enter Total Marks: ");
        int marks = scanner.nextInt();

        // Create Student object
        Student student = new Student(name, rollNo, marks);

        // Display student details
        System.out.println("\nStudent Details:");
        student.displayDetails();

        scanner.close();
    }
}
