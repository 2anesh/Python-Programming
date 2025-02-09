 class Solution {
  public:
    int findMaxSum(Node* root)
    {
        int maxi = INT_MIN;
        solve(root,maxi);
        return maxi;
    }
    
    int solve(Node* root, int& maxi) {
        if(root==NULL) return 0;
        
        int left = max(0, solve(root->left, maxi));
        int right = max(0, solve(root->right, maxi));
        
        maxi = max(maxi, root->data + left + right);
        
        return root->data + max(left, right);
    }
};
