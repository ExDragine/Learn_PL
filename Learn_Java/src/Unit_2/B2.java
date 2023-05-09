package Unit_2;

import java.util.Arrays;

public class B2 {
    public static void main(String[] args) {
        int[] num = {4,1,5};
        int[] numB = new int[3];
        int i,max = num[0],min=num[0];
        for (i=0; i<3; i++) {
            if (num[i] > max) {
                max = num[i];
            }
            if (num[i] < min) {
                min = num[i];
            }
        }
        System.out.println(min+"\n"+max);
    }
}
