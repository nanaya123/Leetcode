#include<iostream>
#include<algorithm>
using namespace std;


struct treeNode{
   int val;
   treeNode *left;
   treeNode *right;
};


class solution{
  public:
     static void traversal(treeNode *root){
        if(root==nullptr){
             return ;
}
treeNode cur = *root;
cout << cur.val << endl;

traversal(cur.left);
traversal(cur.right);



}

static int tree_height(treeNode *root){

    if (root == nullptr){
  return 0;
}
treeNode n = *root;
return 1+max(tree_height(n.left),tree_height(n.right));


}

};




int main(){
  treeNode root;
  root.val = 1;
  root.left = NULL;
  root.right = NULL;
  cout << root.val << endl;
  cout << root.left << endl;
  treeNode node1;
  node1.val = 2;
  node1.left = NULL;
  node1.left = NULL;
  treeNode node2;
  node2.val = 3;
  node2.left = NULL;
  node2.right = NULL;
  root.left = &node1;
  root.right = &node2;
  treeNode *p = &root;
  solution::traversal(p);
  int a = solution::tree_height(p);
  cout<< a <<endl;

}



