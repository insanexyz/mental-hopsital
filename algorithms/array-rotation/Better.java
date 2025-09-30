import java.util.ArrayList;
import java.util.Arrays;

public class Better {
    public static void main(String[] args) {
        
        ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        int k = 3;

        /*
         * nums = [1, 2, 3, 4, 5]
         * First we reverse entire arrayList = [5, 4, 3, 2, 1]
         * Then we reverse 0 to k-1 = [-> 4, 5, <-        3, 2, 1]
         * Then k - 1 to the last element = [4, 5,   -> 1, 2, 3 <- ]
         * The final result is the ans = [4, 5, 1, 2, 3]
         */

        reverse(nums, 0, nums.size());
        reverse(nums, 0, k);
        reverse(nums, k, nums.size() - k);

        System.out.println(nums);
    }

    public static void reverse(ArrayList<Integer> al, int start, int len) {
        int end = start + len - 1;
        while(start < end) {
            int tmp = al.get(start);
            al.set(start, al.get(end));
            al.set(end, tmp);
            start++;
            end--;
        }
    }
}