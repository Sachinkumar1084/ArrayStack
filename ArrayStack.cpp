#include <iostream>
#include <vector>
using namespace std;

class ArrayStack {
private:
    vector<int> element = {2, 4, 3, 5, 7, 6, 8, 9};
public:
    void push(int val) {
        element.push_back(val);
        cout << "Element pushed: " << val << endl;
    }

    void pop() {
        if (!element.empty()) {
            element.pop_back();
            cout << "Element popped" << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    int peek() {
        if (!element.empty()) {
            return element.back();
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return element.empty();
    }
};

int main() {
    ArrayStack stack;

    cout << "Top Element is: " << stack.peek() << endl;

    cout << (stack.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;

    stack.pop();

    cout << "Top Element after pop: " << stack.peek() << endl;

    return 0;
}
