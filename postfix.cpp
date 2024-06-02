
// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// // Function to get the precedence of an operator
// int getPrecedence(char op) {
//     if (op == '^') return 3;
//     if (op == '*' || op == '/') return 2;
//     if (op == '+' || op == '-') return 1;
//     return 0; // Lower precedence for non-operators
// }

// // Function to convert infix expression to postfix with spaces
// string infixToPostfixWithSpaces(string infixExpression) {
//     stack<char> operators;
//     string postfixExpression = "";

//     for (char c : infixExpression) {
//         if (isspace(c)) {
//             continue; // Skip whitespace
//         } else if (isalnum(c)) {
//             postfixExpression += c; // Operand, append to postfix expression
//         } else if (c == '(') {
//             operators.push(c);
//         } else if (c == ')') {
//             while (!operators.empty() && operators.top() != '(') {
//                 postfixExpression += ' '; // Add space after each operator
//                 postfixExpression += operators.top();
//                 operators.pop();
//             }
//             if (!operators.empty() && operators.top() == '(') {
//                 operators.pop();
//             }
//         } else {
//             while (!operators.empty() && getPrecedence(c) <= getPrecedence(operators.top())) {
//                 postfixExpression += ' '; // Add space after each operator
//                 postfixExpression += operators.top();
//                 operators.pop();
//             }
//             operators.push(c);
//             postfixExpression += ' '; // Add space after each operator
//         }
//     }

//     while (!operators.empty()) {
//         postfixExpression += ' '; // Add space after each operator
//         postfixExpression += operators.top();
//         operators.pop();
//     }

//     return postfixExpression;
// }

// int main() {
//     string infixExpression;
//     cout << "Enter an infix expression: ";
//     getline(cin, infixExpression);

//     string postfixExpression = infixToPostfixWithSpaces(infixExpression);
//     cout << "Postfix expression with spaces: " << postfixExpression << endl;
 
//      double result = evaluatePostfix(postfixExpression);
//     cout << "Result: " << result << endl;

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <stack>
// #include <string>
// #include <sstream>
// #include <cmath>

// using namespace std;

// // Function to evaluate a postfix expression
// double evaluatePostfix(string expression);

// // Function to perform arithmetic operations
// double performOperation(char operation, double operand1, double operand2);

// int main() {
//     string postfixExpression;
//     cout << "Enter a postfix expression: ";
//     getline(cin, postfixExpression);

//     double result = evaluatePostfix(postfixExpression);
//     cout << "Result: " << result << endl;

//     return 0;
// }

// double evaluatePostfix(string expression) {
//     stack<double> operands;

//     istringstream iss(expression);
//     string token;

//     while (iss >> token) {
//         if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            
//            // if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {: This line checks whether the current token is a digit (an operand) or a negative number (a digit preceded by a minus sign).

//             // If the token is a number (including negative numbers), push it onto the stack as a double

//             double operand = stod(token);//string to double stod
//             operands.push(operand);

//           //  double operand = stod(token);: If the token is a number (either positive or negative), this line converts the token to a double (floating-point number) using the stod function (string to double) and stores it in the operand variable.

//                 //operands.push(operand);: The operand is then pushed onto the operands stack since it's an operand.

//         } else {//not digit it is operator

//             // If the token is an operator, pop the top two operands and perform the operation
//             double operand2 = operands.top();
//             operands.pop();

//             double operand1 = operands.top();
//             operands.pop();

//             double result = performOperation(token[0], operand1, operand2);
//             operands.push(result);
//         }
//     }

//     // The final result should be on the top of the stack
//     return operands.top();
// }

// double performOperation(char operation, double operand1, double operand2) {
//     switch (operation) {
//         case '+':
//             return operand1 + operand2;
//         case '-':
//             return operand1 - operand2;
//         case '*':
//             return operand1 * operand2;
//         case '/':
//             if (operand2 == 0) {
//                 cerr << "Error: Division by zero." << endl;
//                 exit(1);
//             }
//             return operand1 / operand2;
//         case '^':
//             return pow(operand1, operand2);
//         default:
//             //standard error cout
//             cerr << "Error: Invalid operator '" << operation << "'" << endl;
//             exit(1);
//     }
// }






// #include <iostream>
// #include <stack>
// #include <string>
// #include <algorithm>

// using namespace std;

// int getPrecedence(char op) {
//     if (op == '^') return 3;
//     if (op == '*' || op == '/') return 2;
//     if (op == '+' || op == '-') return 1;
//     return 0;
// }

// string InfixToPrefix(string InfixExpression) {
//     string prefixExpression = "";
//     stack<char> operators;

//     // Reverse the input infix expression
//     reverse(InfixExpression.begin(), InfixExpression.end());

//     for (char c : InfixExpression) {
//         if (isspace(c)) {
//             continue; // skip spaces
//         }
//         if (isalnum(c)) {
//             prefixExpression += c;
//         } else if (c == ')') {
//             operators.push(c);
//         } else if (c == '(') {
//             while (!operators.empty() && operators.top() != ')') {
//                 prefixExpression += ' ';
//                 prefixExpression += operators.top();
//                 operators.pop();
//             }
//             if (!operators.empty() && operators.top() == ')') {
//                 operators.pop();
//             }
//         } else {
//             while (!operators.empty() && getPrecedence(c) < getPrecedence(operators.top())) {
//                 prefixExpression += ' ';
//                 prefixExpression += operators.top();
//                 operators.pop();
//             }
//             operators.push(c);
//             prefixExpression += ' ';
//         }
//     }

//     while (!operators.empty()) {
//         prefixExpression += ' ';
//         prefixExpression += operators.top();
//         operators.pop();
//     }

//     // Reverse the prefix expression to get the correct order
//     reverse(prefixExpression.begin(), prefixExpression.end());

//     return prefixExpression;
// }

// int main() {
//     string InfixExpression;
//     cout << "Enter an infix expression: ";
//     getline(cin, InfixExpression);

//     string prefixExpression = InfixToPrefix(InfixExpression);
//     cout << "Prefix expression is: " << prefixExpression << endl;
//     return 0;
// }

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include<algorithm>
#include<cmath>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to perform the operation based on the operator
int performOperation(int operand1, int operand2, char op) {
    switch (op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                cerr << "Error: Division by zero" << endl;
                exit(1);
            }
        case '^':
            return static_cast<int>(pow(operand1, operand2));
        default:
            cerr << "Error: Invalid operator" << endl;
            exit(1);
    }
}

// Function to evaluate the prefix expression
int evaluatePrefixExpression(string expression) {
    stack<int> operandStack;

    // Reverse the expression to process it from right to left
    reverse(expression.begin(), expression.end());

    stringstream ss(expression);
    string token;

    while (ss >> token) {
        if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1)) {
            // Token is an operand, push it onto the operand stack
            operandStack.push(stoi(token));
        } else if (isOperator(token[0])) {
            // Token is an operator, pop two operands, perform the operation, and push the result back onto the stack
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result = performOperation(operand1, operand2, token[0]);
            operandStack.push(result);
        } else {
            cerr << "Error: Invalid token in expression" << endl;
            exit(1);
        }
    }

    if (operandStack.size() == 1) {
        return operandStack.top();
    } else {
        cerr << "Error: Invalid expression" << endl;
        exit(1);
    }
}

int main() {
    string expression = "- + 2 * 3 4 / 16 ^ 2 3";
    int result = evaluatePrefixExpression(expression);
    cout << "Result: " << result << endl;

    return 0;
}
