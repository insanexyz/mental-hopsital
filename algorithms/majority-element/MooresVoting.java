public class MooresVoting {

    public static int majorityElement(int[] arr, int n) {
        int candidate = 0; // This will act as the potential majority element at last.
        int count = 0;     // Used alongside with candidate to determine the final value of candidate.
        
        // Check for potential candidate (Moore's voting algorithm).
        for (int num: arr) {
            if (count == 0) {
                count = 1;
                candidate = num; 
            } else if (candidate == num) {
                count++;
            } else {
                count--;
            }
        }

        // Verify the candidate.
        count = 0;
        for (int num: arr) {
            if (num == candidate) {
                count++; 
            }
        }

        // Return candidate if its a majority element otherwise return -1.
        return (count > n/2 ? candidate : -1);

    }
    

    public static void main(String[] args) {
     
        int[] arr = {2, 1, 2, 3, 2, 4, 2, 5, 2, 6, 2, 2};
        System.out.println("Majority element: " + majorityElement(arr, arr.length));
    }
}
