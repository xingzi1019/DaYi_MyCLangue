#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

//函数实现-----------------------------------------------------------------------------------------------
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data,0,sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	//先判断有通讯录有没有满 不要老是忘记
	if (pc->count == MAX)
	{
		printf("通讯录已满\n无法再增加\n");
		return;
	}
	else
	{
		printf("请输入名字:\n");
		scanf("%s", pc->data[pc->count].name);//数组名本来就是地址 所以这里不用取地址
		printf("请输入年龄:\n");
		scanf("%d", &(pc->data[pc->count].age));
		printf("请输入性别:\n");
		scanf("%s", pc->data[pc->count].sex);
		printf("请输入电话:\n");
		scanf("%s", pc->data[pc->count].tele);
		printf("请输入地址:\n");
		scanf("%s", pc->data[pc->count].addr);

		pc->count++;
		printf("增加成功\n");
	}
}

void ShowContact(const Contact* pc)
{

}