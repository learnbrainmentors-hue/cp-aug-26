// scope - default/ public
class FirstExample {
    private int x; // with in the class scope
    int y; // default scope (with in the package)
    protected int z; // with in the package ,
    // access outside the package but using inheritance
    public int m;// with in and outside the package
    /*
     * void - keyword
     * no return
     * static - keyword
     * static things comes when class is load
     * bind with class
     */

    static int show(int x) {
        return x * 10;
    }

    public static void main(String args[]) {
        final int MIN = show(100);

        int x = 1000;
        int y = x;
        y = y + 20;
        final int MAX = 9999;
        // MAX = 777;
        System.out.println(x + " " + (y + 90) + " " + y);
        System.out.println("Hello Java " + 10);
        System.out.println(10 + 20);

    }
}