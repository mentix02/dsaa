class ArrayFun {

	private static int add(int nums[]) {

		int sum = 0;

		for (int i = 0; i < nums.length; i++) {
			sum += nums[i];
		}

		return sum;

	}

	public static void main(String args[]) {

		if (args.length <= 1) {
			System.out.println("usage: java ArrayFun <nums>");
			System.exit(1);
		}

		int nums[];
		nums = new int[args.length];

		// apparently you can combine the above
		// two statements into one line - WOW.
		// look at java giving up verbosity for once
		// int[] nums = new int[args.length];

		for (int x = 0; x < args.length; x++) {
			nums[x] = Integer.parseInt(args[x]);
		}

		System.out.println(add(nums));

	}

}
