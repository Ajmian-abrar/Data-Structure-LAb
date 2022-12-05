#include <iostream>
using namespace std;

struct node
{
    int value;
	node *left;
	node *right;
};

struct node *root = NULL;

void insert(int key, node *leaf)
{
    if(root == NULL)
    {
		root = new node;
		root->value = key;
		root->left = NULL;
		root->right = NULL;
	}

	else
    {
        if(key < leaf->value)
        {
            if(leaf->left != NULL)
            {
                insert(key, leaf->left);
            }

            else
            {
                leaf->left = new node;
                leaf->left->value = key;
                leaf->left->left = NULL;
                leaf->left->right = NULL;
            }
        }

        else if(key > leaf->value)
        {
            if(leaf->right != NULL)
            {
                insert(key, leaf->right);
            }

            else
            {
                leaf->right = new node;
                leaf->right->value = key;
                leaf->right->right = NULL;
                leaf->right->left = NULL;
            }
        }
    }
}

struct node *search(int key, node *leaf)
{
	if(leaf != NULL)
    {
		if(key == leaf->value)
		{
		    cout << "Found." << endl;
			return leaf;
		}

		else if(key < leaf->value)
        {
			return search(key, leaf->left);
		}

		else
        {
			return search(key, leaf->right);
		}
	}

	else
    {
        cout << "Not Found." << endl;
		return NULL;
	}
}


void postorder_print(node *leaf)
{
	if(leaf != NULL)
    {
		postorder_print(leaf->left);
		postorder_print(leaf->right);
		cout << leaf->value << ", ";
	}
}



int main()
{
	insert(10, root);
	insert(6, root);
	insert(14, root);
	insert(5, root);
	insert(8, root);
	insert(11, root);
	insert(18, root);

	cout << "Post-order Traversing of the Tree: " ;
	postorder_print(root);
	cout << endl ;



    return 0;
}

