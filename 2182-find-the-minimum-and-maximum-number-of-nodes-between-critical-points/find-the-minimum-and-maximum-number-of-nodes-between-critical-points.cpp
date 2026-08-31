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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        while (temp) {
            res.push_back(temp->val);
            temp = temp->next;
        }
        int n = res.size();
        vector<int> ans;
        vector<int> idx;
        for (int i = 1; i < n - 1; i++) {
            if (res[i] > res[i - 1] && res[i] > res[i + 1]) {
                idx.push_back(i);
            } else if (res[i] < res[i - 1] && res[i] < res[i + 1]) {
                idx.push_back(i);
            }
        }
        if (idx.size() < 2)
            return {-1, -1};
        int maxi = abs(idx[0] - idx[idx.size() - 1]);
        int mini = INT_MAX;
        for (int i = 0; i < idx.size() - 1; i++) {
            mini = min(mini, abs(idx[i] - idx[i + 1]));
        }
        ans.push_back(mini);
        ans.push_back(maxi);

        return ans;
    }
};