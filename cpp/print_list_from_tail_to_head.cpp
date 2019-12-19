/**
@File	print_list_from_tail_to_head.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	print all datas of a list from tail to head.
@Idea   Get list datas from head to tail and save them in vector,
        and then print the datas from end to begin of vector.
        Stack can also be  considered to finish it. 
*/

#include <vector>

using namespace std;

struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        if (head == nullptr) {
            return vector<int>();
        }
        struct ListNode *p = head;
        vector<int> order_data;
        while (p != nullptr) {
            order_data.emplace_back(p->val);
            p = p->next;
        }
        size_t data_size = order_data.size();
        vector<int> inverse_order_data(data_size);
        for (size_t i = 0; i < data_size; i++) {
            inverse_order_data[i] = order_data[data_size - 1 - i];
        }
        return inverse_order_data;
    }
};
