public class OptimalWay {
    
    public static void findLeaders(int[] arr) {
        int length = arr.length;
        int max = arr[length - 1]; // last element is always a leader
        
        System.out.print(max + " ");
        
        for (int i = length - 1; i >= 0; i--) {
            if (arr[i] > max) {
                max = arr[i];
                System.out.print(max + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {5, 14, 5, 9, 6, 9, 4, 2, 3};
        findLeaders(arr);
    }

}
