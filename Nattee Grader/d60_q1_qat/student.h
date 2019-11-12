#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  if(idx < 0) idx+=this->mSize;

  return mData[((this->mFront)+idx) % this->mCap];
}

#endif
