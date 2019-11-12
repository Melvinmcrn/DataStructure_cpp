#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
//you can include any other file here
//you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq() {
  CP::vector<T> temp;
  std::set<T> s;
  for(int i=0; i<this->mSize; i++){
    T c = this->mData[i];
    if(s.count(c)==0){
      s.insert(c);
      temp.push_back(c);
    }
  }
  *this = temp;
}

#endif
