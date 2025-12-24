#ifndef CLION_MAIN_H
#define CLION_MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
//定义一个数据空间存储类型
typedef int Element_t;

typedef struct
{
    Element_t *data;                        //存储表中数据空间的首地址
    int pos;                                //指向数据空间的待插入的位置
    int capacity;                           //表中目前最大的存储容量
}SEQTable_t;


//表头在堆上申请 提供给其他的函数来使用 需要释放的接口
SEQTable_t *createSeqTable(int n);            //创建表头,同时申请了数据存储空间,表头在堆上
void releaseSeqTable(SEQTable_t *table);      //释放表头,同时释放表中指向的数据存储空间



int pushbackSeqTable(SEQTable_t *table, Element_t value);

void showSeqTable(SEQTable_t *SEQTable, Element_t value);

#endif //CLION_MAIN_H