#include <iostream>
#include <string>
#define LENGTH 5
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void display(ListNode *head) {
    ListNode *p = head;
    while(p!= nullptr) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    //dummy node to avoid validating the head node
    ListNode *dummy = new ListNode(0, head);
    ListNode *p = dummy;
    ListNode *q = dummy;
    for (int i = 0 ; i < n ; i++) q = q->next;
    while (q->next != nullptr) {
        p = p->next;
        q = q->next;
    }
    if (p->next->next == nullptr) p->next = nullptr;
    else p->next = p->next->next;
    return dummy->next;
}

int main() {
    ListNode *dummy = new ListNode(0, nullptr);
    ListNode *p = dummy;
    for (int i = 0 ; i < LENGTH ; i++) {
        int v;
        cin >> v;
        ListNode *node = new ListNode(v, nullptr);
        p->next = node;
        p = p->next;
    }
    int n;
    cin >> n;
    ListNode *ans = removeNthFromEnd(dummy->next, n);
    display(ans);
    return 0;
}
