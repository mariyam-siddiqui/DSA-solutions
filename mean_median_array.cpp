class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        //your code here
        int t=N-1;
        //If median is in fraction then convert it to integer and return
        if (N%2 != 0)
        {
            return A[t/2];
        }
        else
        {
            return floor((A[t/2]+A[(t/2)+1])/2);
        }
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int sum=0;
        for(int i =0; i<N;i++)
        {
            sum = sum + A[i];
        }
        return floor(sum/N);
    }
};