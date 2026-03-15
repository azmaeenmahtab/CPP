class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();

        string prefix = strs[0];

        string ans = "";

        int i = 0;

        bool flag = false;

        while(!flag){

            bool isSame = true;

            for(int j = 0; j < len; j++){

                
                string str = strs[j];

                if(i < str.size()){

                if(str[i] != prefix[i]){

                    isSame = false;

                    break;
                }

                }else{

                    isSame = false;

                    break;
                }
            }

            if(isSame){

                ans += prefix[i];
                if(i < prefix.size()){
                    i++;
                }else{

                    flag = true;
                }
            }else{

                flag = true;
                break;
            }
        }

        return ans;
    }
};
