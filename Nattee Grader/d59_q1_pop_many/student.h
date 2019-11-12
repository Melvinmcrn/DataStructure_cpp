#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  for(int i=0; i<K && this->mSize!=0; i++){
    this->pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::vector<T> temp;
  std::stack<T> out;
  for(int i=0; i<K && this->mSize!=0; i++){
    temp.push_back(this->top());
    this->pop();
  }
  for(int i=temp.size()-1; i>=0; i--){
    out.push(temp[i]);
  }
  return out;
}

#endif
