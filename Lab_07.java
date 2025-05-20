import java.io.*;

public class Lab_07 {
    public static void main(String[] args) {
        // ClassNotFound simulation
        File file = new File("non_existing_class.txt");
        if (!file.exists()) {
            System.out.println("ClassNotFound simulation: File 'non_existing_class.txt' not found.");
        }

        // EOF simulation using BufferedReader
        try (BufferedReader br = new BufferedReader(new FileReader("input_Lab07.txt"))) {
            System.out.println("Reading characters until EOF:");
            int ch;
            while ((ch = br.read()) != -1) {
                System.out.print((char) ch);
            }
            System.out.println("\nReached end of file (EOF).");
        } catch (IOException e) {
            System.out.println("IOException occurred: " + e.getMessage());
        }
    }
}
