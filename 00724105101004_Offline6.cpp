#include<bits/stdc++.h>
using namespace std;

stack<char> S;

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

int main(){
	
	string infix , postfix = "";

	getline(cin, infix);

	for(int i = 0; i < infix.size(); ){

		if(infix[i] == ' '){
			i++;
			continue;
		}

		if(isdigit(infix[i])){

			string num = "";

			while(isdigit(infix[i]) && i < infix.size()){
	
				num = num + infix[i];

				i++;
			}
	
			postfix = postfix + num + ' ';

			continue;

		}

		if(infix[i] == '('){

			S.push(infix[i]);

		}else if(infix[i] == ')'){

			while(!S.empty() && S.top() != '('){

				postfix = postfix + S.top() + ' ';
				S.pop();
			}

			S.pop();

		}else{

			while(!S.empty() && priority(S.top()) >= priority(infix[i])){

				postfix = postfix + S.top() + ' ';

				S.pop();
			}

			S.push(infix[i]);

		}

		i++;
	}

	while(!S.empty()){

		postfix = postfix + S.top() + ' ';

		S.pop();
	}

	cout << postfix << endl;

	stack<long long> valueStack;

	for(int i = 0; i < postfix.size(); ){

		if(postfix[i] == ' '){

			i++;

			continue;
		}

		if(isdigit(postfix[i])){

			string num = "";

			while(i < postfix.size() && postfix[i] != ' '){

				num = num + postfix[i];

				i++;
			}

			long long llnum = stoll(num);

			valueStack.push(llnum);

		}else{

			char op = postfix[i];

			long long rightvalue = valueStack.top();
			valueStack.pop();

			long long leftvalue = valueStack.top();
			valueStack.pop();

			long long result = 0;

			if (op == '+'){
				result = leftvalue + rightvalue;
			}else if(op == '-'){
				result = leftvalue - rightvalue;
			}else if(op == '*'){
				result = leftvalue * rightvalue;
			}else if(op == '/'){ 
				result = leftvalue / rightvalue;
			}else{
				result = (long long) pow(leftvalue, rightvalue);
			}

			valueStack.push(result);

            i++;
		}

	}

	cout << valueStack.top() << endl;

}