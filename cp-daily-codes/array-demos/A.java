class A {
    int[] show() {
        return new int[] { 10, 20 };
    }

    public static void main(String[] args) {

        int a1[] = new int[10];
        int a2[][] = new int[3][3];
        System.out.println(a2.toString());
        System.out.println(a1.toString()); // a1.toString()
        A obj = new A();
        System.out.println(obj.toString());
        String a = new String("Hello");
        System.out.println(a.toString()); // a.toString();
    }
}