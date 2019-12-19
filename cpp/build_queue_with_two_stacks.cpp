/**
@File	build_queue_with_two_stacks.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	build a queue with two stacks.
@Idea   stack1 controls queue pop operation.
        stack2 controls queue push operation
*/

#include <stack>

using namespace std;

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if (stack2.empty()) {
            while(!stack1.empty()){
                int data = stack1.top();
                stack2.push(data);
                stack1.pop();
            }
        }
        int node = stack2.top();
        stack2.pop();
        return node;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
