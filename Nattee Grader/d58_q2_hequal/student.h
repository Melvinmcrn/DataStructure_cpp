#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if(this->mSize != other.mSize) return false;
  CP::priority_queue<T,Comp> a(*this);
  CP::priority_queue<T,Comp> b(other);
  while(!a.empty()){
    if(a.top() != b.top()) return false;
    a.pop();
    b.pop();
  } return true;
}

#endif
