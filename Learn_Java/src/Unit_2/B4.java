package Unit_2;

public class B4 {
    public static void main(String[] args) {
        for(int i=0;i<10001;i++){
            if(i%2==0||i%3==0||i%5==0){
                continue;
            }
            else {
                System.out.println(i);
            }
        }
    }
}
