#ifndef DMA_H
#define DMA_H

int   dma_init (int m);
void *dma_alloc (int size);
void  dma_free (void *p);
void  dma_print_page(int pno);
void  dma_print_bitmap();
void  dma_print_blocks();
int   dma_give_intfrag();
void  decToHexa(int num_decimal);
void  binToHexa(int bin);
void *dma_alloc2(int size);

#endif