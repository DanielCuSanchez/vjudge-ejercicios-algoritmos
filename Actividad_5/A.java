import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n,count=1;
        n=scan.nextInt();
        int[] boxes = new int[n];
        for(int i=0;i<n;i++){
            boxes[i]=scan.nextInt();
        }
        Arrays.sort(boxes);
        for(int i=1;i<n;i++){
            if((i)/count>boxes[i]) count++;
        }

        System.out.println(count);
        scan.close();
    }
}