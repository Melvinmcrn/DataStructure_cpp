#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  size_t out = 0;
  if(ptr->left == NULL && ptr->right != NULL){
    out += 1 + process(ptr->right);
  } else if(ptr->left != NULL && ptr->right == NULL){
    out += 1 + process(ptr->left);
  } else if(ptr->left == NULL && ptr->right == NULL){
    return 0;
  } else {
    out += process(ptr->left) + process(ptr->right);
  }

  return out;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  return process(this->mRoot);
}

#endif
