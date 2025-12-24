#include "seqTable.h"

SEQTable_t* createSeqTable(int n)
{
    SEQTable_t* table = NULL;

    table = malloc(sizeof(SEQTable_t));
    if (table == NULL)
    {
        fprintf(stderr,"SeqTable malloc failed\n");
        return NULL;
    }

    free(table);
    return table;
}