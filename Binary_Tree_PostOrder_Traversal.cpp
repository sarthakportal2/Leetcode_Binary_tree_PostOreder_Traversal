class Solution {
public:
    void postOrder(TreeNode* root, vector<int> &output) {
      //Optimal_Solution
      //T(C(N))=O(1) and S(C(N)==O(1)) as it requires non memory space allocation recursively
        if(!root) return;//Initalizing root
        postOrder(root->left,output);//Left child declare
        postOrder(root->right,output);//Right child Declare
        output.push_back(root->val);}//Insrting root
    vector<int> postorderTraversal(TreeNode* root) {//postOrder traversal Funct declare
        vector<int> output;//Output Declare 
        postOrder(root,output);//Calling Postorder function
        return output;}};//Printing Root
