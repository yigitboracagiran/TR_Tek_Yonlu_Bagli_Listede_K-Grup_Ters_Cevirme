#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverse( ListNode* head, int k ) {
        ListNode *temp1 = head;
        for ( int i = 0 ; i < k - 1 ; i++ ) {
            ListNode *temp2 = temp1 -> next -> next;
            temp1 -> next -> next = head;
            head = temp1 -> next;
            temp1 -> next = temp2;
        }
        return head;
    }
 
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *oncekiSon = nullptr;
        ListNode *ilk = nullptr;
        ListNode *temp1 = head;
        for( int i = 1 ; temp1 != nullptr ; i++ ) {
            if ( i % k == 0 ){
                ListNode *temp2 = temp1 -> next;
                ListNode *son = head;
                head = reverse( head, k );
                if ( i == k ){
                    ilk = head;
                }
                if (oncekiSon != nullptr){
                    oncekiSon -> next = head; 
                }
                temp1 = temp2;
                head = temp2;
                oncekiSon = son;
                continue;
            }
            temp1 = temp1 -> next;
        }
        return ilk;
    }
};

int main() {
    Solution solution;

    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);
    ListNode* node6 = new ListNode(6);
    ListNode* node7 = new ListNode(7);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = nullptr;

    ListNode* head = node1;
    head = solution.reverseKGroup(head, 2); //2 dugumde bir ters cevirme

    ListNode* current = head;
    while ( current != nullptr ) {
        std::cout << current -> val << " ";
        current = current -> next;
    }
    std::cout << std::endl;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = nullptr;

    head = node1;
    head = solution.reverseKGroup(head, 3); //3 dugumde bir ters cevirme

    current = head;
    while ( current != nullptr ) {
        std::cout << current -> val << " ";
        current = current -> next;
    }
    std::cout << std::endl;

    return 0;
}