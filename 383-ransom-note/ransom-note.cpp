class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        // magazine ke har letter ko count karo...kitni baar aaya.
        for (char& ch : magazine) {
            mp[ch]++;
        }

        // ab usko ransomeNote me found karo.
        for (char& c : ransomNote) {
            if (mp[c] == 0) {
                return false;
            }
            mp[c]--;
        }
        return true;
    }
};