import java.util.Scanner;

class HelloInput {
	public static void main(String args[]) {
		
		// initialize scanner using an extremely
		// simply way of creating an object from
		// a class by already decalring a variable
		// of a class type and then typing in `new`
		// explicitly as well because why not.
		Scanner in = new Scanner(System.in);

		System.out.print("enter your name : ");
		String name = in.nextLine();

		// print out the string we just received
		System.out.println("Nice to meet you, " + name);

	}
}
