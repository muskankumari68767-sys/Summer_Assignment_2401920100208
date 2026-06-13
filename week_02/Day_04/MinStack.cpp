class MinStack {
public:

    vector<int> v;

    MinStack() {
    }

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.back();
    }

    int getMin() {

        int mn = v[0];

        for(int x : v) {
            if(x < mn)
                mn = x;
        }

        return mn;
    }
};
