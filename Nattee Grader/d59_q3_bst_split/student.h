#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;

  std::vector<node*> ori,ret;
  node* x = mRoot;

  while(x != NULL){
    if(x->data.first >= val) {
      ret.push_back(x);
      x = x->left;
    } else {
      ori.push_back(x);
      x = x->right;
    }
  }
  if(ret.size()==0) return result;
  if(ori.size()==0) {
    result = *this;
    clear();
    return result;
  }

  if(ret.size()!=0){
    result.mRoot = ret[0];
    result.mRoot->parent = NULL;
    result.mRoot->left = NULL;
  }

  x = result.mRoot;
  for(size_t i = 1; i<ret.size();i++) {
    x->left = ret[i];
    x->left->parent = x;
    x->left->left = NULL;
    x = x->left;
  }

  if(ori.size()!=0){
    mRoot = ori[0];
    mRoot->parent = NULL;
    mRoot->right = NULL;
  }

  x = mRoot;
  for(size_t i = 1; i<ori.size();i++) {
    x->right = ori[i];
    x->right->parent = x;
    x->right->right = NULL;
    x = x->right;
  }

  return result;
}

#endif
