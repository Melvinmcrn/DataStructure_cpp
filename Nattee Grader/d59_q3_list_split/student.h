#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if(it == this->end()){
    return result;
  }
  node* temp_end = this->mHeader->prev;

  this->mHeader->prev = it.ptr->prev;
  it.ptr->prev->next = this->mHeader;

  result.mHeader->next = it.ptr;
  result.mHeader->prev = temp_end;
  temp_end->next = result.mHeader;
  it.ptr->prev = result.mHeader;

  result.mSize = this->mSize-pos;
  this->mSize-=result.mSize;

  return result;
}

#endif
