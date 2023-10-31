/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr){
            return(list2);//base condition of recursive approach
        }
        if(list2==nullptr){
            return(list1);//base condition of recursive approach
        }
        if(list1->val<list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            //above has to appear before return for recursive approach to hold
            return(list1);//final return after all backtracking(if first iteration)
        }
        else{
            list2->next=mergeTwoLists(list1,list2->next);
            return(list2);
        }
    }
};