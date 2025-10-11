class Solution {
public:
    string interpret(string command) {
        string res;
        for(int i = 0; i < command.length(); i++){

            if(command[i] == 'G'){
                res.push_back('G');
            }else if(command[i] == '('){

                if(command[i+1] == ')'){

                    res.push_back('o');
                }else{

                    res.push_back('a');
                    res.push_back('l');
                }
            }
        }

        return res;
    }
};
