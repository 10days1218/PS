//https://www.acmicpc.net/problem/1918
#include <bits/stdc++.h>
using namespace std;

map<char, int> priority;
int main(void)
{
    priority['+'] = 0;
    priority['-'] = 0;
    priority['*'] = 1;
    priority['/'] = 1;
    priority['('] = -1;
    stack<char> stack;

    string expression;
    string answer;
    cin >> expression;

    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] != '+' && expression[i] != '-' && expression[i] != '*' && expression[i] != '/' && expression[i] != '(' && expression[i] != ')')
        {
            answer += expression[i];
        }

        else
        {
            ;
        }
    }

    return 0;
}