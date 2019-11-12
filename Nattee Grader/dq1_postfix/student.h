#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<int> s;
  bool check=true;

  for(const auto &c : v){

    //Number
    if(c.first == 1) s.push(c.second);

    //Operator
    else if(c.first == 0){

      if(c.second == 0) {
        int x = s.top(); s.pop();
        int y = s.top(); s.pop();
        s.push(y+x);

      } else if(c.second == 1) {
        int x = s.top(); s.pop();
        int y = s.top(); s.pop();
        s.push(y-x);

      } else if(c.second == 2){
        int x = s.top(); s.pop();
        int y = s.top(); s.pop();
        s.push(y*x);

      } else if(c.second == 3){
        int x = s.top(); s.pop();
        int y = s.top(); s.pop();
        s.push(y/x);
      }
    }
  }

  int out = s.top(); s.pop();


  return out;
}

#endif
