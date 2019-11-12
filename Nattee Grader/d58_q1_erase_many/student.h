#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  int j=0,k=0;
  for(int i=0; i<((this->mSize)-pos.size()); i++){
    while((i+j) == pos[k]){
      j++;
      if(k != pos.size()-1) k++;
    }
    this->mData[i] = this->mData[i+j];
  }
  this->mSize -= pos.size();
}

#endif
