// // C++ program for different tree traversals
// #include <bits/stdc++.h>
// using namespace std;


// /* A binary tree node has data, pointer to left child
// and a pointer to right child */
// struct Node {
// 	//int data;
//     char data;
// 	struct Node *left, *right;
// };

// // Utility function to create a new tree node
// Node* newNode(int data)
// {
// 	Node* temp = new Node;
// 	temp->data = data;
// 	temp->left = temp->right = NULL;
// 	return temp;
// }

// /* Given a binary tree, print its nodes in inorder*/
// void printInorder(struct Node* node)
// {
// 	if (node == NULL)
// 		return;

// 	/* first recur on left child */
// 	printInorder(node->left);

// 	/* then print the data of node */
// 	cout << node->data << " ";

// 	/* now recur on right child */
// 	printInorder(node->right);
// }

// /* Driver code*/
// int main()
// {
// 	struct Node* root = newNode(1);
// 	root->left = newNode(2);
// 	root->right = newNode(3);
// 	root->left->left = newNode(4);
// 	root->left->right = newNode(5);


// 	// Function call
// 	cout << "\nInorder traversal of binary tree is \n";
// 	printInorder(root);


// 	return 0;
// }

// C++ program to find height of tree
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node {
public:
	int data;
	node* left;
	node* right;
};

/* Compute the "maxDepth" of a tree -- the number of
	nodes along the longest path from the root node
	down to the farthest leaf node.*/
int maxDepth(node* node)
{
	if (node == NULL)
		return 0;
	else {
		/* compute the depth of each subtree */
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		/* use the larger one */
		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

// Driver code
int main()
{
	node* root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Height of tree is " << maxDepth(root);
	return 0;
}

// This code is contributed by Amit Srivastav

