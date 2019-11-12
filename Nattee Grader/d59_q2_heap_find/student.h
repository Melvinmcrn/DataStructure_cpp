#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  /*size_t idx = 0, count = 0;
  while(count < mSize){
    //std::cout << "idx = " << idx << " & value = " << mData[idx] << std::endl;
    if(mData[idx] == k) return true;

    if(mLess(mData[idx],k) && idx == 0) return false;

    if(mLess(mData[idx],k) || (2*idx+1) > mSize-1){
      //std::cout << "mLESS TRUE !!!" << std::endl;
      while( idx!=0 && (idx%2==0 || idx+1>=mSize) ){
        if(idx == 0) return false;
        idx = (idx - 1) /2;
        //std::cout << "fixUp to idx " << idx << std::endl;
      }
      if(idx+1<mSize) idx++;
    } else {
      idx = 2*idx + 1;
    }
    count++;
  }
  return false;*/
  for(int i=0; i<this->mSize; i++){
    if(this->mData[i] == k) return true;
  } return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  /*size_t idx = 0, count = 0,found = -1;
  while(count < mSize){
    //std::cout << "idx = " << idx << " & value = " << mData[idx] << std::endl;
    if(mData[idx] == k && idx>found) found = idx;

    if(mLess(mData[idx],k) && idx == 0) break;

    if(mLess(mData[idx],k) || (2*idx+1) > mSize-1){
      //std::cout << "mLESS TRUE !!!" << std::endl;
      while( idx!=0 && (idx%2==0 || idx+1>=mSize) ){
        if(idx == 0) break;
        idx = (idx - 1) /2;
        //std::cout << "fixUp to idx " << idx << std::endl;
      }
      if(idx+1<mSize) idx++;
    } else {
      idx = 2*idx + 1;
    }
    count++;
  }
  return found==-1 ? -1 : ceil(log2(found+2)-1);*/
  int idx = -1;
  for(int i=0; i<this->mSize; i++){
    if(this->mData[i] == k) idx = i; break;
  }
  switch(idx){
    case -1 : return -1;
    case 0 : return 0;
    default : return log(idx+1) / log(2);
  }
}

#endif

