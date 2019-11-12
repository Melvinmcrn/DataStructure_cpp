void replace(const T& x, list<T>& y) {
  //write your code here
  /*
  auto it = begin();
  while(it != end()){
    if(*it == x){
      for(auto &c : y){
        insert(it, c);
      }
      auto b = it;
      erase(b);
    }
    it++;
  }*/

  for(node* i = this->mHeader->next; i != this->mHeader; i=i->next){
    if(i->data == x){
      list<T> temp(y);

      i->prev->next = temp.mHeader->next;
      temp.mHeader->next->prev = i->prev;

      i->next->prev = temp.mHeader->prev;
      temp.mHeader->prev->next = i->next;

      delete i;
      mSize += temp.mSize - 1;

      temp.mSize = 0;
    }
  }

}
