class Add {

    public int add(int a, int b) {
        return a + b;
    }

    public static void main(String args[]) {

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
    }
    
}