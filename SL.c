#define _CRT_SECURE_NO_WARNINGS 1
#include "SL.h"
//º¯ÊýÊµÏÖ

LinkList_t* creatLinkList()
{
	LinkList_t* table = NULL;
	table = (LinkList_t*)malloc(sizeof(LinkList_t));
	if (table == NULL)
	{
		perror(errno);
		return NULL;
	}
	table->head.val = 0;
	table->head.next = NULL;
	table->count = 0;
	return table;
}

void insertLinkListHeader(LinkList_t* table, Element_t num)
{
	assert(table != NULL);
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    if (newNode == NULL) 
    {
        perror("malloc failed for newNode");
        return;
    }
    newNode->val = num;
    newNode->next = table->head.next;
    table->head.next = newNode;
    table->count++;
}

void insertLinkListPos(LinkList_t* table, Element_t num)
{

}

void showLinkList(const LinkList_t table)
{

}

LinkList_t* releaseLinkList()
{

	return 0;
}