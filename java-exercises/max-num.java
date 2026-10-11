public class Main {
    public static int findMax(int[] numbers) {
        // Assumes numbers array is not empty
        int maxNum = numbers[0];
        for (int num : numbers) {
            if (num > maxNum) {
                maxNum = num;
            }
        }
        return maxNum;
    }

    public static void main(String[] args) {
        int[] input = {3, 41, 56, 9, 4, 12};
        System.out.println(findMax(input));
    }
}