//{ Driver Code Starts
import java.util.*;
class Index{
public static void main(String[] args)
 {
	 Scanner sc = new Scanner(System.in);
	 int T = sc.nextInt();
		while(T-- > 0)
		{
			int n = sc.nextInt();
			int[] a = new int[n];
			for(int i=0;i<n;i++)
			a[i] = sc.nextInt();
			GfG g = new GfG();
			System.out.println(g.findEquilibrium(a,n));
		}
}
}
// } Driver Code Ends


/*Complete the function below*/
class GfG
{
           public static int findEquilibrium(int arr[], int n)
              {
                int len = arr.length;
                int[] prefixSum = new int[len + 1];
                prefixSum[0] = 0;
                for (int i = 1; i <= len; i++) {
                    prefixSum[i] = arr[i - 1] + prefixSum[i - 1];
                }
        
                int leftSum = 0;
                int rightSum = 0;
                int index = -1;
                for (int i = 1; i < len + 1; i++) {
                    leftSum = prefixSum[i - 1];
                    rightSum = prefixSum[len] - prefixSum[i];
                    if (leftSum == rightSum) {
                        index = i - 1;
                        break;
                    }
                }
                return index;
              }
}