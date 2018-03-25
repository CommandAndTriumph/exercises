import java.util.Scanner;
public class EchoJava {
	public static void main(String[] args) {
		Scanner cl_args = new Scanner(System.in);
		for (String x:args) {
			System.out.print(x + " ");
		}
		System.out.println();
	}
}

