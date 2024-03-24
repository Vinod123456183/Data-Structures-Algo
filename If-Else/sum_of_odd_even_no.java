import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0 , b = 0 , c = 0 ;
        int n = 12345;
        while(n > 0) {
            int last = n % 10;
            if(last % 2 == 0) 
                a += last;
            else 
                b += last;
            n /= 10;
        }
        System.out.println(a);
        System.out.println(b);
    }
}
