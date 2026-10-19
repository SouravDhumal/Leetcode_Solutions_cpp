class Solution {
private:
    bool helper(string &cleaned,int i){
        int n = cleaned.length();
        if(i>=n/2) return true;
        if(cleaned[i]!=cleaned[n-i-1]) return false;
        return helper(cleaned,i+1);
    }
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(char c : s){
            if(isalnum(c)) cleaned+=tolower(c);
        }
        return helper(cleaned,0);
    }
};