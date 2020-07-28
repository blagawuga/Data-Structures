#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public: 
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode() {
		this->val = 0;
		this->left = nullptr;
		this->right = nullptr;
	}
	
	TreeNode(int x) {
		this->val = x;
		this->left = nullptr;
		this->right = nullptr;
	}

	TreeNode(int x, TreeNode* left, TreeNode* right) {
		this->val = x;
		this->left = left;
		this->right = right;
	}
};

TreeNode* makeTree(TreeNode* root) {
	/*
		Complete the function
	*/

	return nullptr;
}

//int main() {
//	TreeNode* root = new TreeNode(1);
//	/*
//		Say we have 
//				1
//			/		\
//		   2		 3
//		  / \		 /\
//		 4   5      6  7
//	*/
//
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->left = new TreeNode(4);
//	root->left->right = new TreeNode(5);
//	root->right->left = new TreeNode(6);
//	root->right->right = new TreeNode(7);
//
//	/*root = makeTree(root);*/
//	cout << root->val << endl;
//	return 0;
//}

