class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = strs[0];
        int preflen = pref.size();
        for (int i = 1; i < strs.size(); i++) {
            string comp = strs[i];
            preflen = min(
                preflen,
                (int)comp.size()); // agar particular string pref se chhota hai
                                   // to preflen utni hi ho jayegi,min func me
                                   // dono same datatype hone chahiye but .size
                                   // is long long to type casting
            for (int j = 0; j < preflen; j++) {

                if (pref[j] != comp[j]) {
                    preflen = j;
                    break;
                }
            }
        }
        return pref.substr(0, preflen); //.substr string ko cut kar deta hai
    }
};