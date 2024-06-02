#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;
// string InfixToPostfix(string InfixExpression);
int getPrecedence(char op);

// int main(){
//  string InfixExpression;
//  cout<<"enter an infix expression: ";
//  getline(cin,InfixExpression);

//  string postfixExpression=InfixToPostfix(InfixExpression);
//  cout<<"Postfix expression is : "<<postfixExpression;
// return 0;
// }

// string InfixToPostfix(string InfixExpression){
//     stack<char>operators;
//     string postfixExpression=" ";

//     for(char c: InfixExpression ){
//         if(isspace(c)){
//             continue;
//         }
//         else if(isalnum(c)){
//             postfixExpression+=c;
//         }
//         else if(c=='('){
//             operators.push(c);
//         }
//         else if (c==')'){
//       while(!operators.empty()&& operators.top()!='('){
//             postfixExpression+=' ';
//             postfixExpression+=operators.top();
//             operators.pop();
//       }
//         if(!operators.empty()&& operators.top()=='('){
//         operators.pop();
//         }

//       }
//       else{
//         while(!operators.empty() && getPrecedence(c)<=getPrecedence(operators.top())){
//              postfixExpression+=' ';
//              postfixExpression+=operators.top();
//              operators.pop();        
//         }
//         operators.push(c);
//         postfixExpression+=' ';
//       }
//     }
//       while(!operators.empty()){
//          postfixExpression+=' ';
//          postfixExpression+=operators.top();
//          operators.pop();
//       }
     
//        return postfixExpression;  
    
   
// }

int getPrecedence(char op){
   if(op=='^') return 3;
   if(op=='*'||op=='/') return 2;
   if(op=='+'||op=='-') return 1;
   return 0;
}


////////////////////////////////////////////////////////////////////////
string InfixToPrefix(string InfixExpression);

int main(){
    string InfixExpression;
    cout<<"enter an infix expression: ";
    getline(cin,InfixExpression);

    string prefixExpression=InfixToPrefix(InfixExpression);
    cout<<"prefix expression is : "<<prefixExpression;
    return 0;
}

string InfixToPrefix(string InfixExpression){
    stack<char>operators;
    string prefixExpression=" ";

    reverse(InfixExpression.begin(),InfixExpression.end());

    for(char c: InfixExpression){
        if(isspace(c)){
            continue; 
        }
       else if(isalnum(c)){
            prefixExpression+=c;
        }
        else if(c==')'){
            operators.push(c);
        }
        else if(c=='('){
       while(!operators.empty() && operators.top()!=')'){
        prefixExpression+=' ';
        prefixExpression+=operators.top();
        operators.pop();
       }
       if(!operators.empty() && operators.top()==')'){
        operators.pop();
       }
        }

        else{
            while(!operators.empty() && getPrecedence(c)<getPrecedence(operators.top())){
                prefixExpression+=' ';
                prefixExpression+=operators.top();
                operators.pop();
            }
            operators.push(c);
            prefixExpression+=' ';
        }
    }

    while(!operators.empty()){
        prefixExpression+=' ';
        prefixExpression+=operators.top();
        operators.pop();
    }

    reverse(prefixExpression.begin(),prefixExpression.end());

    return prefixExpression;
}