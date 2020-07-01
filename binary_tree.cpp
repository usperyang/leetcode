#include <iostream>
#include <cstdio>
using namespace std;

struct  ListNode
{
    /* data */
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

struct TreeNode
{
    /* data */
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};


void traverse(ListNode *head){
    for (ListNode *p = head; p != NULL; p = p.next){

    }
}

int main(){

    return 0;
}