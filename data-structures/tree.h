#include <list>
using namespace std;

template <typename T>
struct Node {
    T val;
    Node *left;
    Node *right;

    void CreateTree(Node *curr, Node *n, T x, char pos);
};

template <typename T>
void Node<T>::CreateTree(Node *curr, Node *n, T x, char pos) {      //curr is a pointer that points to the current node of the tree
    if (n != NULL) {                                                
        char ch;
        cout << "Left or Right of " << n->val << " :\n";
        cin >> ch;
        if (ch == 'l')
            CreateTree(n, n->left, x, ch);
        else if (ch == 'r')
            CreateTree(n, n->right, x, ch);
        else 
            cout << "Please enter a valid choice\n";
            CreateTree(n, n, x, ch);
    } else {
        Node *t = new Node;
        t->left = NULL;
        t->right = NULL;
        t->val = x;
        if (pos == 'l') {
            curr->left = t;
        } else if (pos == 'r') {
            curr->right = t;
        }
    }
}