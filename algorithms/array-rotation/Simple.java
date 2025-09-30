import java.util.ArrayList;
import java.util.Arrays;

public class Simple {
    public static void main(String[] args) {
        
        ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        int k = 3;
        int[] tmp = new int[nums.size()];

        /*
         * nums = [1, 2, 3, 4, 5]
         * k = 2
         * So move each element in nums by 2 position
         * A tmp array is used
         * First take 1 from nums and place it in 0 (its initial pos in nums) + k position in tmp -> {, , 1}
         * Then take  2 from nums and place in 1 + k position in tmp -> { , , 1, 2}
         * Then take  3 from nums and place in 2 + k position in tmp -> { , , 1, 2, 3}
         * Then take  4 from nums and place in 3 + k position in tmp -> 3 + k = 5 which is wrapped back to 0 using modulo -> {5, , 1, 2, 3}
         * Same for 5 from nums -> {5, 4, 1, 2, 3}
         * Then copy tmp elements back to nums in the same order.
         * Now nums = [5, 4, 1, 2, 3]
         */

        for (int i = 0; i < nums.size(); i++) {
            tmp[(i + k) % nums.size()] = nums.get(i);
        }

        for (int i = 0; i < tmp.length; i++) {
            nums.set(i, tmp[i]);
        }

        System.out.println(nums);
    }
}