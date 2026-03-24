class Solution {
public:
    int precedenceOf(char ch){
        if(ch == 'I'){
            return 1;
        }else if(ch == 'V'){
            return 5;
        }else if(ch == 'X'){
            return 10;
        }else if(ch == 'L'){
            return 50;
        }else if(ch == 'C'){
            return 100;
        }else if(ch == 'D'){
            return 500;
        }else if(ch == 'M'){
            return 1000;
        }else{
            return 0;
        }
    };

    int romanToInt(string s) {
        
        int len = s.size();

        int sum = 0;

        for(int i =0; i< len; i++){

            if(precedenceOf(s[i]) < precedenceOf(s[i+1])){

                sum = sum + (precedenceOf(s[i+1]) - precedenceOf(s[i]));
                cout << "added " << precedenceOf(s[i+1]) - precedenceOf(s[i]) << endl;
                i++;
            }else{

                sum += precedenceOf(s[i]);
                cout << "added " << precedenceOf(s[i]) << endl;
            }
        }

        return sum;

    }
};
