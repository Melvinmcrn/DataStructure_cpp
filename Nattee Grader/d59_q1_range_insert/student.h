#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  size_t pos = position - begin();
  size_t size = last-first;
  ensureCapacity(mSize + size);
  for(size_t i = mSize+size-1; i >= (pos+size); i--) {
    mData[i] = mData[i-size];
  }
  for(size_t i = pos; i<(pos+size); i++,first++){
    mData[i] = *first;
    mSize++;
  }
}

#endif
