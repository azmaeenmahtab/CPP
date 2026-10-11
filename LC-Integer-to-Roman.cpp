class Solution {
public:
    string intToRoman(int num) {
map<int, char> list = {
    {1, 'I'}, 
    {5, 'V'}, 
    {10, 'X'}, 
    {50, 'L'}, 
    {100, 'C'}, 
    {500, 'D'}, 
    {1000, 'M'}
};

map<int, string> subtractiveForm = {
    {4, "IV"},
    {9, "IX"},
    {40, "XL"},
    {90, "XC"},
    {400, "CD"},
    {900, "CM"}
};

    int divisor = 10;
    int decimal = 1;
    string ans = "";

    vector<string> chunks(10) ;
    int idx = 0;

    int num2 = num;

    while(num){
        int rem = num % divisor;
        if(rem == 4 || rem == 9){
            int key = rem * decimal;

            chunks[idx] += subtractiveForm[key];
            idx++;
        }else{
            int val = rem * decimal;

            while(val){
            int prev = 1;  //largest key to divide
            for(auto const& pair: list){
                if((val - pair.first) < 0){
                    break;
                }else{
                    prev = pair.first;
                }
            }
            int q = val / prev;
            for(int i = 0; i < q; i++){
                chunks[idx] += list[prev];
            }

            val = val - prev * q;
            }

            idx++;
        } 
       
        num = num/divisor;
        decimal = decimal * 10;
    }
     for(int i = 9; i >= 0; i--){

            ans += chunks[i];
        } 
    return ans;
    }
};
