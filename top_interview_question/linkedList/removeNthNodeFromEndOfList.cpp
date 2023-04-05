#include <bits/stdc++.h>
using namespace std;

/**
 * struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

class Solution {
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // calculate the length of ListNode
        int length = 0;
        ListNode *copiedHead = head;
        while (copiedHead != nullptr) {
            length++;
            copiedHead = copiedHead->next;
        }

        int targetIdx = length - n, idx = 0;

        // if targetNode equals the head of ListNode, return head->next
        if (targetIdx == 0) {
            copiedHead = head->next;
            head->next = nullptr;
            return copiedHead;
        }

        // oterwise removes the Nth node
        ListNode *cur = head, *pre = nullptr;
        while (idx < targetIdx) {
            idx++;
            pre = cur;
            cur = cur->next;
        }
        pre->next = cur->next;
        cur->next = nullptr;
        return head;
    }
};