#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  node *it = this->mHeader->next;
  size_t count = this->mSize;
  while(count > 0){
    if(it->data == value){
      node *tmp = it;
      it->prev->next = it->next;
      it->next->prev = it->prev;
      delete tmp;
      it = it->next;
      mSize--;
    } else {it = it->next;}
    count--;
  }
}

#endif
