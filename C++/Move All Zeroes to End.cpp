class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int j=0,n=arr.size();
        for(int i=0;i<n;i++)if(arr[i])swap(arr[i],arr[j++]);
    }
};
