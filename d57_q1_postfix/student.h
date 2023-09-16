#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v)
{
    //WRITE YOUR CODE HERE
    stack<int> s;
    int ans, object, subject;

    for (auto &p : v)
    {
        int f = p.first;
        int se = p.second;

        if (f == 1)
        {
            s.push(se);
        }
        else if (f == 0)
        {
            object = s.top();
            s.pop();
            subject = s.top();
            s.pop();

            if (se == 0)
            {
                ans = subject + object;
                s.push(ans);
            }
            else if (se == 1)
            {
                ans = subject - object;
                s.push(ans);
            }
            else if (se == 2)
            {
                ans = subject * object;
                s.push(ans);
            }
            else if (se == 3)
            {
                ans = subject / object;
                s.push(ans);
            }
        }
    }

    //DON"T FORGET TO RETURN THE RESULT
    return s.top();
}

#endif
