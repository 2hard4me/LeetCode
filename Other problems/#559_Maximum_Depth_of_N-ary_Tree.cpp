/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        queue<Node*>q;
        q.push(root);
        int d = 0;
        while(!q.empty()) {
            int len = q.size();
            for(int i = 0; i  < len; ++i) {
                Node* curr = q.front();
                q.pop();
                for(auto& x : curr->children)
                    q.push(x);
            }
            ++d;
        }
        return d;
    }
};
