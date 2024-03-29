problem link https://leetcode.com/problems/valid-parentheses/

# well I have implemented this solution in java but you can get the basic logic :) ....

public boolean isValid(String str) {
        
         Stack<Integer> stk = new Stack<>();
            stk.clear();
            stk.push(InPrecedence(str.charAt(0)));
            for(int i = 1; i < str.length();i++ ) {
                if (stk.isEmpty())
                    stk.push(InPrecedence(str.charAt(i)));
                 else if (stk.peek() < InPrecedence(str.charAt(i)))
                            stk.push(InPrecedence(str.charAt(i)));
                 else if (stk.peek() == OutPrecedence(str.charAt(i)) + 1)
                             stk.pop();
                 else
                     stk.push(InPrecedence(str.charAt(i)));

                }
           
        return stk.isEmpty();
        }
    
    private int InPrecedence(char str){

        switch (str){
            case '(':
                return 2;
            case '{':
                return 4;
            case '[':
                return 6;
        }
        return -1;
    }
    
       private int OutPrecedence(char str){

        switch (str){
            case ')':
                return 1;
            case '}':
                return 3;
            case ']':
                return 5;
        }
        return -1;
    }
