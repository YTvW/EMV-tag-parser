#ifndef EMVTAGLIST_H
#define EMVTAGLIST_H

#include "hashtable.h"
#include "tlv.h"


tlvInfo_t * emvInfo_set(unsigned char PC,unsigned char Source,
	unsigned short Template, unsigned char *RangeLen, unsigned char *Description);

int emvInfo_get(tlvInfo_t * t,int * tindex, dict_t *hashtab[HASHSIZE]);

tlvInfo_t  emvparse(unsigned char arr[], unsigned short size, tlvInfo_t * t, int * tindex, int index, dict_t *hashtab[HASHSIZE]);

void emvPrint_result(tlvInfo_t* t);

void emvInit(dict_t *hashtab[HASHSIZE]);

#endif //EMVTAGLIST_H
