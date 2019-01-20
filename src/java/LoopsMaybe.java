import java.util.Scanner;

class LoopsMaybe {

    // how stupid can these programs get? 
    // I'm learning; it's ok; understandable.

    public static void main(String args[]) {

        // i really genuinly need someone
        // to explain how the hell is this
        // not the work of an idiot? James 
        // Gosling, wtf
        Scanner s = new Scanner(System.in);
        
        System.out.print("Enter a number : ");
        int num = s.nextInt();
        for (int i = 1; i <= num; i++) {
            System.out.println(i);
        }

    }
}
