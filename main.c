#include "seqTable.h"

void test01()
{
    SEQTable_t * table1 = createSeqTable(5);
    if (table1 == NULL)
    {
        return;
    }
    for (int i=0;i<5;i++)
    {
        pushbackSeqTable(table1,100 + i);
    }
    showSeqTable(table1, 105);
    releaseSeqTable(table1);
}

int main(void)
{
    test01();
    return 0;
}
