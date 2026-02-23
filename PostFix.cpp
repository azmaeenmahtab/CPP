#include<bits/stdc++.h>
using namespace std;

stack<char>S;

int priority(char s){
	if(s == '^'){
		return 100;
	}else if(s == '*' || s == '/'){
		return 50;
	}else if(s == '+' || s == '-'){
		return 20;
	}else{
		return 0;
	}
};

int main (){
	
	string infix, postfix = "";
    cout << "in";
	cin >> infix;
	for (int i = 0; i < infix.size();i++ ){
		char symbol = infix[i];
		if((symbol >= 'A' && symbol <= 'Z') || (symbol >= '0' && symbol <= '9')){
			postfix = postfix+symbol;
		}else if(symbol == '('){
			S.push(symbol);
		}else if(symbol == ')'){
			while(!S.empty() && S.top() != '('){
				postfix = postfix + S.top();
                S.pop();
			}
			S.pop();
		}else{
			while(!S.empty() && priority(S.top()) >= priority(symbol)){
				postfix = postfix + S.top();
                S.pop();
			}
			S.push(symbol);
		}
	}

	while(!S.empty()){
		postfix = postfix + S.top();
		S.pop();
	}

	cout << postfix << endl;
	return 0;
}
