class Solution {
public:
    int calculate(string str) {
       stack<int> s;
        int a=0,b=1;
        int n=str.size();
        for (int i=0;i<n;++i) {
            if (isdigit(str[i])) {
                int c=0;
                int d=i;
                while (d<n&&isdigit(str[d])) {
                    c=c*10+(str[d]-'0');
                    ++d;
                }
                a=a+b*c;
                i=d-1;
            } else if (str[i] == '+') {
                b=1;
            } else if (str[i] == '-') {
                b=-1;
            } else if (str[i] == '(') {
                s.push(a);
                s.push(b);
                a=0;
                b=1;
            } else if (str[i] == ')') {
                a=a*s.top();
                s.pop();
                a=a+s.top();
                s.pop();
            }
        }
        return a;
    }
};
