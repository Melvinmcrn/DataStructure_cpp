void shift(int k) {
	if(mSize<=1) return;
	k = k%mSize;
	if (k > 0) {
		for (int i = 0; i < k; i++) {
			node* n = mHeader->next;
			node* p = mHeader->prev;

			mHeader->next = n->next;
			mHeader->next->prev = mHeader;

			n->next = mHeader;
			mHeader->prev = n;

			n->prev = p;
			p->next = n;
		}
	} else if (k < 0) {
		for (int i = 0; i < -k; i++) {
			node* n = mHeader->next;
			node* p = mHeader->prev;

			mHeader->next = p;
			mHeader->prev = p->prev;
			p->prev->next = mHeader;

			p->next = n;
			p->prev = mHeader;

			n->prev = p;
			
		}

	return;
}
