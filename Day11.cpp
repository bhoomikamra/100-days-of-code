#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
private:
    stack<int> inStack;
    stack<int> outStack;

public:
    void enqueue(int value) {
        inStack.push(value);
    }

    int dequeue() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }

        if (outStack.empty()) {
            cerr << "Queue is empty." << endl;
            return -1; // or throw an exception
        }

        int front = outStack.top();
        outStack.pop();
        return front;
    }
};

int main() {
    // Test your queue implementation
    return 0;
}
