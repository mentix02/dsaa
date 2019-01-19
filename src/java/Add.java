class Add {

    public int add(int a, int b) {
        return a + b;
    }

    public static void main(String args[]) {

        if (args.length != 2) {
            System.out.println("usage: java Add <num> <num>");
            System.exit(1);
        }

        // initialize numbers
        int num1, num2;
        num1 = Integer.parseInt(args[0]);
        num2 = Integer.parseInt(args[1]);

        // initialize a new object of
        // the same type as this `Add`
        // because apparently you can't 
        // call functions inside a same
        // class? I don't fully understand
        // java but something here seems 
        // really, extremely off.
        Add a = new Add();
        System.out.println(a.add(num1, num2));

        // update - I figured you've to add 
        // a `static` specifier to an internal
        // methods inside a class for it to be
        // called inside its own
    }
    
}
