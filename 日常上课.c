#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>  // 包含srand()和rand()函数
#include <time.h> // 包含time()函数，用于获取系统时间
#include <windows.h>//控制台
#include <ctype.h>//islower isupper toupper tolower
#include <assert.h>//assert
//#include <algorithm>

//以下为两个数四则运算需要调用的函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Minus(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//
//int Time(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//
//int Divide(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}

//int main()
//{
//	int arr[] = { 10,11,12,13,14,15,16,17,18,19 };
//	arr[1];//访问的是下标
//	int i = 0;
//	while (i < 10)//用循环避免重复性低级敲打数字来实现数组的呈现
//	{
//
//		printf("%d\n",arr[i]);//emm....能懂吗？我不知道怎么解释
//		i=i+1;//i++就是i=i+1  懂？
//	}
//
//	/*printf("%d\n",arr[8]);*/
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d",r);
//
//
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while(i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0; 
//}
//void test()
//{
//
//	printf("hello world");
//	return 0;
// int a = 10;
//int b = 20;
//int z = ADD(a, b);
//printf("%d\n", z);
//return 0;
//}

//extern int ADD(int x, int y);
//
//int main()
//{
//	register int num = 3;
//	return 0;
//}
////要声明外部符号
//#define NUM 100

//#define ADD(x,y) (((x)(+)(y))
//int Add(int x, int y)
//{
//	return x + y;
//}
//int a = 10;
//int b = 20;
//int c = Add(a, b);
//printf("%d\n", c);
//
//int a = 10;
	////&a;
	////

//int main()
//{
	//int * p = &a;//p就是指针变量
	////printf("%p\n", &a);//000000253F5BFBA4 0000000E386FF834
	//return 0;

//}

/*void test(struct stu* ps)
{
	printf("%s %d %s %s\n",(*ps).name,);
}*/
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n",a);
//	return 0;
//}

/*struct stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
print(struct stu* ps)
{
	printf("%s %d %s %s",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
	printf("%s %d %s %s",ps->name,ps->age,ps->sex,ps->tele);
}
int main()
{
	struct stu s = { "zhangsan",20,"man","1885024615" };

	print(&s);
	return 0;
}*/

/*int a = 10;
if (a = 5)
	printf("hehe");*/
	/*int age = 20;
	if (age > 18)
		printf("成年");*/
		//int age = 20;
		//if (age > 18)
			//printf("成年");
		//else
			//printf("未成年");
	/*#include <stdio.h>
	int main()
	{
		int n = 0;
		char s = 0;
		scanf("%d\n%s", &n, &s);
		char m = 0;
		if ()
			printf("%s", m);
		return 0;
	}*/




	//int main()
	//{
	//
	//	if ()
	//	{
	//
	//	}
	//	else if ()
	//	{
	//
	//	}
	//	else()
	//	{
	//
	//	}
	//	return 0;
	//}
	/*int main()
	{
		int a = 0;
		int b = 2;
		if (a == 1)
		{
			if (b == 2)
				printf("hehe\n");
			else
				printf("haha\n");
		}
		return 0;
	}*/
	//int test()
	//{
	//	int a = 4;
	//	if (a == 3)
	//		return 1;
	//	 else return 0;
	//}
	//int main()
	//{
	//	int r = test();
	//	printf("%d\n",r);
	//	return 0;
	//}
	//
	//int main()
	//{
	//
	//	int num = 0;
	//
	//	scanf("%d",&num);
	//		if (num%2==1)
	//		{
	//			printf("是奇数");
	//		}
	//		else
	//		{
	//			printf("是偶数");
	//		}
	//	return 0;
	//}
	//生成1-100的奇数     如下
	//int main()
	//{
	//	int a = 0;
	//	while (a<101)
	//	{
	//		if (a % 2 == 1)
	//		{
	//			printf("%d\n", a);
	//		}
	//		a++;
	//	}
	//	
	//
	//
	//	return 0;
	//}
	//int main()
	//{
	//
	//	return 0;
	//}
	//多个case可以匹配同个语句
	/*int main()
	{
		int n = 0;
		scanf("%d",&n);
		switch (n)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("weekday");
		case 6:
			printf("weekend\n");
			break;
		case 7:
			printf("weekend\n");
			break;
		default:
			printf("选择错误");
			break;
		}

		return 0;
	}*/
	/*int main()
	{
		int n = 1;
		int m = 2;
		switch (n)
		{
		case 1: m++;//别忘记没有break的话case会继续执行
		case 2: n++;
		case 3:
			switch (n)//switch是可以嵌套的
			{
			case 1:n++;
			case 2:m++; n++;
				break;

			}
		case 4:m++;
			break;
		default:
			break;
		}
		printf("m = %d,n = %d\n",m,n);
		return 0;
	}*/
	//int main()
	//{
	//	int i = 0;
	//	if (i <= 20)
	//	{
	//		while (i<=20)
	//		{
	//			printf("love\n");
	//			i++;
	//
	//		}
	//	}
	//	else
	//	{
	//		printf("等天晴");
	//	}
	//
	//	return 0;
	//}
	//int main()
	//{
	//	int a = 1;
	//	while (a<=10)
	//	{
	//		a++;
	//		if (5 == a)
	//		{
	//			continue;//break;//这里break直接跳出while 不止跳出if
	//		}
	//		printf("%d\n",a);
	//	}
	//
	//	return 0;
	//}
	/*int main()
	{
		*///int ch = getchar();//getchar获取字符 获取的是acsii码值 故用int
		//printf("%c\n",ch);//1
		//putchar(ch);//2
		//return 0;
	//	int ch = 0;
	//	while ((ch = getchar()) != EOF)
	//	{
	//
	//		putchar(ch);//ctrl z来终止
	//
	//	}
	//
	//		return 0;
	//
	//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("输入密码:");
//	scanf("%s",password);//scanf遇到空格会停止
//	//getchar();  //可以监视一下password和ch来理解getchar
//	int ch = 0;
//	while ((ch=getchar())!='\n')//这个\n和我们输入时按下的回车有关系
//	{
//		;
//	}
//	printf("请确认密码（Y/N）");
//	int yuting = getchar();
//	if (yuting =='Y')//建议写成'Y'==ret 书写习惯
//	{
//		printf("ok");					//EOF的意义
//	}
//	else
//	{
//		printf("try again");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int  t,h, m, s;  //变量t用于存储输入的总秒数
//	scanf("%d",&t);
//	s =t % 60;  //秒
//	m =t % 3600 / 60;  //分
//	h =t / 3600;  //时
//	printf("% d: % d : % d",h,m,s); // 时分秒之间用英文冒号 间隔
//	return 0;
//}
//long main()
//{
//
//	return 0;

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	double r, s;
//	scanf("r=%.1f", &r);
//	s = 3.14 * r * r;
//	printf("s=%.2f", s);
//	return 0;
//}
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);//只打印数字字符
//	}
//	return 0;
//}
//这段C语言代码的功能是从标准输入（通常是键盘）读取字符，并只输出其中的数字字符（0 - 9），忽略所有非数字字符。
//
//代码的具体解释如下：
//
//1. 首先定义了一个字符变量`ch`并初始化为空字符`'\0'`
//
//2. `while ((ch = getchar()) != EOF)`是一个循环，功能是：
//- 使用`getchar()`函数从标准输入读取一个字符
//- 将读取到的字符赋值给`ch`
//- 判断是否读取到了文件结束符`EOF`（在Windows系统中通常通过Ctrl + Z输入，
// 在Unix / Linux系统中通常通过Ctrl + D输入）
//- 如果没有读取到`EOF`，则继续循环
//
//3. 循环体内的`if (ch < '0' || ch > '9') continue; `表示：
//- 检查当前字符是否不是数字字符（即ASCII值小于'0'或大于'9'）
//- 如果不是数字字符，则执行`continue`跳过本次循环的剩余部分，直接进入下一次循环
//
//4. `putchar(ch); `表示如果是数字字符，则将该字符输出到标准输出（通常是屏幕）
//
//5. 当读取到`EOF`时，循环结束，程序返回0表示正常退出
//
//简单来说，这段程序的作用是过滤输入中的非数字字符，只保留并输出数字。
// 例如，如果输入"abc123def456"，程序会输出"123456"。
//}

//int main()
//{
//	int arr[] = { 12,34,45,12,65,65 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		while (i<sz)
//		{
//			printf("%c",arr[i]);
//			i++;
//		}
//	return 0;
//}
//这段C语言代码的主要功能是尝试将一个整型数组中的元素作为字符输出到屏幕上。让我们逐部分解释：
//1. 首先定义了一个整型数组`arr`，并初始化了一组整数：`{12, 34, 45, 12, 65, 65}`
//2. 定义了整型变量`i`并初始化为0，用于数组的索引
//3. `int sz = sizeof(arr) / sizeof(arr[0])`这行代码用于计算数组的长度：
//- `sizeof(arr)`计算整个数组在内存中占用的字节数
//- `sizeof(arr[0])`计算数组中单个元素占用的字节数
//- 两者相除得到数组元素的个数（此例中结果为6）
//4. `while (i < sz)`是一个循环，遍历整个数组：
//	- 循环条件是`i`小于数组长度`sz`
//	- 循环体内使用`printf("%c", arr[i])`尝试将数组元素作为字符输出
//	- 每次循环结束后，`i`自增1，移动到下一个元素
//	5. 循环结束后，程序返回0表示正常退出
//	需要注意的是，这段代码存在一个逻辑问题：
//	数组中存储的是整数（如12、34等），但代码使用`%c`格式符将其作为字符输出。`%c`会将整数解释为ASCII码值，然后输出对应的字符。
//	在ASCII码中：
//	- 12 对应垂直制表符（不可见字符）
//	- 34 对应双引号 `"`
//	- 45 对应减号 `-`
//	- 65 对应大写字母 `A`
//	所以这段程序的实际输出会是：`" - AA`（其中第一个字符是不可见的垂直制表符）

//int main()
//{              //20061019
//	int year = 0;
//	int month = 00;
//	int day = 00;
//	scanf("%4d%2d%2d",&year,&month,&day);//格式字符串 "%4d%2d%2d" 的含义：
//	/*% 4d：表示读取一个整数（d 是整数格式符），且限定读取宽度为 4 个字符，将其赋值给 year 变量。
//		% 2d：表示读取一个整数，限定宽度为 2 个字符，将其赋值给 month 变量。
//		第二个 % 2d：同样读取宽度为 2 个字符的整数，赋值给 day 变量。*/
//	printf("%4d\n%d\n%d\n",year,month,day);
//	printf("year=%04d\n",year);//%2d输出的是空格 2但%02d输出的是02
//	printf("month=%02d\n",month);//注意这种写法可以补充0 比如06 上面只能打印6 而这里可以打印06
//	printf("day=%02d\n",day);//一种新的细节写法
//	return 0;				//就是指定域宽来输入和输出
//}

//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float chinese = 0.0f;
//	double english = 0.0l;
//	scanf_s("%d,%f,%f,%lf",&id,&c,&chinese,&english);
//	printf("%d\n%.2f\n%.2f\n%.2lf\n",id,c,chinese,english);
//	return 0;
//}
//int main()
//{
//
//	int n=printf("Hello world!");
//	printf("\n%d\n",n);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//
//
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	for (i=1;i<=10;i++)//（初始化部分；条件判断语句；调整部分）
//	{
//		if (i == 5)
//		{
//			continue;//while和for的break都是直接跳出循环//continue同理 回到循环开始时 直接跳过5
//		}//break只会结束自己所在那一层的循环
//		printf("%d\n",i);
//		//printf("%d\n",i+1);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//区间一般写的前闭后开
//	{
//		printf("%d\n", arr[i]);
//		//if (i>7)
//		//{
//			//break;
//		//}
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//for的判断如果省略 那么判断条件恒成立
//		printf("hehe");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0;i<10;i++)
//	{
//		for (j=0;j<10;j++)
//		{//							看重点
//			printf("hehe\n");//注意此处嵌套for执行完这里的10次才会回到外面那一层的循环
//		}//					也就是说j从0到9后外面那一层for才算执行了一次 i才会增加1
//	}//						但是出去了里面那一层for后j还是从0开始
//	//						故一共要执行10*10次 打印100个hehe
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i<3;i++)
//	{
//		for (;j<3;j++)
//		{
//			printf("hehe\n"); 
//		}//第二次进来里面for时j并没有变成0而是保留上一次刚跳出里层for那时的值
//	}// 故后面第二次并不会进入到里层就i++了 故i=2和i=3时并不会打印任何东西
//	//总之不要随便省略初始化
//	return 0;//for可以多个变量一起控制
//}
//				计算n的阶乘 n！
//int main()
//{
//	long i = 1;
//	long n = 0;
//	long ret = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d",ret);
//	return 0;
//}\
//					计算1！+2！+3！+4！+.......+n!
//int main()
//{
//	long i = 1;
//	long n = 0;
//	long ret = 1;
//	long sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//	     sum = sum + ret;
//	}
//	printf("%ld",sum);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	for (n = 1; n <= 3; n++)//错了这一块
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d",sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("下标是%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()
//{
//	int a,n;
//	scanf("%d",&n);
//	for (a = 0; a < n; a++)
//	{
//
//	}
//	return 0;
//}
//int main()															//二分法
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("sorry找不到");
//	}
//	return 0;
//}
//int main()
//{
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n");
//	printf("1\n"); 
//	printf("1\n"); 
//	printf("1\n");
//	return 0;
//}
//void swap1(int x, int y)//这里的xy叫做形参
//{
//	int z = 0;
//	z = x;//x放到z里面x就空了
//	x = y;//所以把y放进x里面 y就空了
//	y = z;//这里吧z放进y里面
//}
//当实参传递形参的时候，形参是实参的一种拷贝
//对形参的修改不能改变实参  故swap那个函数失效

//好好理解下面函数模板和指针的运用    非常基础的语法理解
//void swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	//int c = Add(a, b);//这里无法改变a和b的值 只能传输a和b的值到Add函数当中
//	//printf("%d\n",c);
//	printf("交换前a=%d b=%d",a,b);
//	//下面的ab叫做实参
//	swap1(a, b);//													传值调用
//	swap2(&a,&b);//当需要改变传入值本身时才需要传入指针，否则不然		传址调用
//	printf("交换后a=%d b=%d",a,b);//对实参进行需要指针
//	return 0;
//}
 //		形参实例化之后其实相当于实参的一份临时拷贝

															 //非常牛逼的打印某个范围内的素数的一个方法
//用到了for和if语句
//此为第一个版本
//int main()//打印100-200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	for (i=100;i<=200;i++)//产生100-200之间的数
//	{
//		//判断i是否为素数(只能被一和它本身整除)2到i-1
//		int flag = 1;
//		int j = 0;
//		for (j=2;j<i-1;j++)// 这里是核心 拿2到i-1的数字去作为除数若不能整除则为素数
//		{
//			if (i%j==0)
//			{
//				flag = 0;
//				break;//这里的break直接跳出里面的这层for循环
//
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("总共有%d个素数",count);
//	return 0;
//}

															 //以下为优化后的第二个版本
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//m=a*b
//		//16=2*8
//		//a和b当中一定有一个数是 <= sqrt(m)的 依此逻辑可以优化代码
//		//比如103只需找2-10
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//sqrt是开平方 减少循环次数
//		{							 //sqrt是数据库函数 要引入一个头文件#include <math.h>
//			if (i % j == 0)
//			{				
//				flag = 0;				
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("总共有%d个素数", count);
//	return 0;
//}

															 //以下为第三个版本
//int is_prime(int n)//是素数返回1 不是素数返回0  //0为假 非0为真
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}//函数的核心逻辑是通过循环检查 2 到 sqrt(n) 之间的数是否能整除 n
////如果在循环中找到任何一个能整除 n 的数（即 n% j == 0），说明 n 不是素数，会执行 return 0; 提前退出函数
////如果循环完整执行结束（没有找到任何能整除 n 的数），则说明 n 是素数，此时执行 return 1; ，将结果 1 返回给调用者
////return 会直接退出自己所在的函数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++ )
//	{
//		if (is_prime(i))
//		{
//			printf("%d\n", i);
//			count = count + 1;
//		}
//	}
//	printf("\n总共有%d个素数", count);
//	return 0;
//}

															 //写一个函数判断一年是不是闰年
//int panduan(int year)
//{
//	if (year % 4 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	int result = panduan(year);
//	if (result == 1)
//	{
//		printf("%d年是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}

															 //打印1000-2000之间的闰年
//int yuting(int i)
//{
//	if (i%4==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (yuting(i))//非0为真 所以上面要返回1
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("总共有%d个闰年",count);
//	return 0;
//}

//整形数组二分查找              函数尽量 高内聚 低耦合			 非常精辟的二分法查找 可以多加复习
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		/*当查找范围是 [left, right]（左闭右闭区间）时，mid 就是这个区间的正中间位置
//后续会根据 arr[mid] 与目标值 k 的大小关系，调整 left 或 right 来缩小范围
//2. 计算逻辑解析
//这行代码的本质是计算 left 和 right 的中间值，我们可以拆解为：
//(right - left)：先计算当前查找范围的长度（右边界与左边界的差值）
//(right - left) / 2：取范围长度的一半，得到从 left 到中间位置的距离
//left + ...：以 left 为起点，加上上述距离，得到中间位置 mid*/
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//找不到
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("请输入要查找的数(1-10) 我将为它找到其在数组中的下标\n");
//	int k = 7;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*1. 核心原理
//这行代码通过总字节数除以单个元素字节数，得到数组中元素的数量，公式为：数组元素个数 = 数组总字节大小 / 单个元素字节大小
//2. 各部分解析
//sizeof(arr)sizeof 是 C 语言的一个运算符，用于计算变量 / 类型所占用的字节数。当 arr 是数组名时，sizeof(arr) 计算的是整个数组所占用的总字节数。
//例如代码中的 arr[] = {1,2,3,4,5,6,7,8,9,10} 是 int 类型数组，假设在 32 位或 64 位系统中，int 类型占 4 字节，那么：sizeof(arr) = 10个元素 × 4字节/元素 = 40字节
//sizeof(arr[0])arr[0] 表示数组的第一个元素，sizeof(arr[0]) 计算的是单个元素所占用的字节数。
//由于数组中所有元素类型相同，单个元素的字节数是固定的。*/
////找到了 返回下标
////没找到 返回-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}

//											以下是错误的示范 有助于理解数组的传参    注意和上面的来对比

//int binary_search(int arr[], int k)//这里的int arr[]实际上和int *arr是等价的  解释如下
////c语言中，数组名作为参数传递给函数时，退化为指针
///*数组作为子函数参数时退化为指针，指针中不包含数组的长度信息
//数组传参实际上传递的是首元素的地址而不是整个数组 
//所以在一个函数的内部计算一个函数参数部分的数组的元素是不靠谱的*/
//{
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0])
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("请输入要查找的数(1-10) 我将为它找到其在数组中的下标\n");
//	int k = 7;
//	scanf("%d", &k);
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
//											了解bool类型
//#include <stdbool.h>//需要引入的头文件
//bool is_prime(int n)//是素数返回1 不是素数返回0  //0为假 非0为真
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;//这里的false就是0
//		}
//	}
//	return true;//这里true就是真
//}
//int main()
//{
//	int i = 0;
//	for (i=100;i<=200;i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d\n",i);
//		}
//
//	}
//	return 0;
//}

//						写一个函数每次调用这个函数 sum就会增加1
//yuting(int* p)
//{
//	(*p)++;//通过指针里边存的地址找到外部的变量 从而对它进行相关的修改
//}
//int main()
//{
//	int num = 0;
//	yuting(&num);
//	printf("%d\n",num);//1
//	yuting(&num);
//	printf("%d\n", num);//2
//	yuting(&num);
//	printf("%d\n", num);//3
//	yuting(&num);
//	printf("%d\n", num);//4
//	return 0;
//}
//										函数的嵌套调用
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n",len);
//	//printf("%d\n",strlen("abcde"));//链式访问
//	printf("%d",printf("%d",printf("%d",43)));//printf返回的是打印的字符数43是两个返回2 2是一个字符 返回1
//	//											故终端输出为4321
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (i = 0;i<sz;i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);
///*              &arr[0] = 008FF954
//				&arr[1] = 008FF958
//				&arr[2] = 008FF95C
//				&arr[3] = 008FF960
//				&arr[4] = 008FF964
//				&arr[5] = 008FF968
//				&arr[6] = 008FF96C
//				&arr[7] = 008FF970
//				&arr[8] = 008FF974
//				&arr[9] = 008FF978
//*/
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}
//										二维数组
//1 2 3 4
//2 3 4 5
//3 4 5 6
//int main(void)
//{
//	int arr0[] = { 1,2,3,4,5,6 };
//	int arr1[3][4]/*行列*/ = {{1,2},{3,4},{5,6}};//不够的还是会默认为0
//	int arr2[][4] = { {1,2,3,4} ,{ 1,2,2,4 },{1,2} };// 行数可以不明确 但列数必须明确
//	//char arr2[5][10];
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d ",&arr[i][j]);
//		}
//		
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);//通过下标来访问数组
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int i = 0;
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i <= 8; i++)
//	{
//		printf("%d ", arr[i]);//数组越界编译器不会报错 但自己要检查
//	}
//	return 0;
//}
//							此为一个二维数组的越界（以后尽量把不要去与越界）
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	
//	for (i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j=0;j<=4;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组传参时，形参有两种写法
//1,数组
//2,指针
//形参是数组的形式
//void bubble_sort(int arr[], int sz)//这里的int arr[]传进来是首元素的地址
//{
//	//需要n-1趟                  冒泡排序
//	//int sz = sizeof(arr) / sizeof(arr[0]);//这里的arr看似是数组，本质是指针变量，所以这里的sz算出来是1
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	//			  1,2,3,4,5,6,7,8,9,10
//	//冒泡排序的算法，对数组进行排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//										一维数组的数组名的理解
/*数组名确实能表示首元素的地址
但是有两个例外
1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
除了这两种例外其他情况数组名就首元素的地址*/
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr + 1);
//	printf("-----------------------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0] + 1);
//	printf("-----------------------------\n");
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);
//	printf("-----------------------------\n");
//	int n = sizeof(arr);
//	printf("%d ", n);
//	return 0;
//}
//										二维数组数组名的理解
//int main()
//{
//	int arr[3][4];
//	/*int sz = sizeof(arr);
//	printf("%d ",sz);*/
//	arr;//二维数组的数组名表示二维数组首元素（第一行）的地址  是一整行
//	printf("%d\n",arr);
//	printf("%d\n",arr + 1);
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//3 行
//	printf("%d\n",sz1);
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);//4 列
//	printf("%d\n",sz2);
//	/*arr[0] 的含义
//	arr[0] 表示二维数组的第 0 行，它本身是一个一维数组（包含 4 个 int 元素）。
//sizeof(arr[0]) 的计算
//这表示计算「第 0 行」这个一维数组所占用的总字节数。
//由于每个 int 元素占 4 字节（假设系统中 int 为 4 字节），
//4 个元素的总字节数为：4 个元素 × 4 字节/元素 = 16 字节。
//sizeof(arr[0][0]) 的计算
//arr[0][0] 表示二维数组第 0 行第 0 列的元素（是一个 int 类型的值）。
//因此 sizeof(arr[0][0]) 就是一个 int 类型的字节数，即 4 字节。
//最终结果两者相除：16 字节 ÷ 4 字节 = 4，正好是二维数组的列数。
//总结：
//sizeof(arr[0]) 得到「一行元素的总字节数」
//sizeof(arr[0][0]) 得到「一个元素的字节数」
//两者相除，本质是「一行的总字节数 ÷ 一个元素的字节数 = 一行的元素个数」，也就是二维数组的列数。
//这种计算方式的前提是：必须是真正的二维数组（如 int arr[3][4]），
//而不能是指向指针的指针（如动态分配的二维数组），因为后者无法通过 sizeof 正确获取行数和列数。*/
//	return 0;
//}
/*
在 C 语言中，这三个函数配合使用，核心作用是生成随机数，具体含义如下：
rand()：     核心随机数生成函数，每次调用返回一个 0 到RAND_MAX（通常是 32767）之间的整数，
但它生成的是 “伪随机数”—— 若不做处理，每次程序运行都会得到完全相同的序列。
srand(unsigned int seed)：“随机数种子初始化函数”，用于给rand()设置 “起点”（seed）。
rand()       会根据这个起点按固定算法生成序列，不同种子对应不同序列，相同种子则序列完全一致。
time(NULL)： 获取当前系统时间的函数，返回从 “1970 年 1 月 1 日 00:00:00” 到现在的秒数（即 Unix 时间戳）
，结果是time_t类型，强制转换后可作为srand()的种子。由于时间每秒都在变，
用它做种子能让每次程序运行的起点都不同，从而生成真正 “看起来随机” 的序列。*/


//int main()
//{
//	// 1. 初始化随机数种子：用当前时间确保每次运行种子不同，避免重复序列
//	// 强制转换time_t类型为unsigned int，匹配srand()的参数要求
//	srand((unsigned int)time(NULL));
//
//	// 2. 生成1-100的随机数：核心公式为 [min, max] = rand() % (max - min + 1) + min
//	// 此处max=100，min=1，计算后即为 rand()%100 + 1，确保结果落在1到100之间
//	int random_num = rand() % 100 + 1;
//
//	// 3. 打印结果
//	printf("生成的1-100之间的随机数：%d\n", random_num);
//
//	return 0;
//}
//int find(arr, k, sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		left++;
//		if (left == k)
//		{
//			return left-1;
//		}
//	}
//	if (left!=k)
//	{
//		return 0;
//	}
//	return -1;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	scanf("%d",&k);
//	int ret = find(arr, k, sz);
//	if (ret != -1)
//	{
//		printf("要查找的数的下标是%d\n", ret);
//	}
//	else
//	{
//		printf("找不到要查找的数的下标\n");
//	}
//	return 0;
//}
//								从两边向中间覆盖呈现一串字符
//int main()
//{
//	char arr1[] = "welcome to Cloud Stack Dream-Building Team!!!!\n";
//	char arr2[] = "##############################################\n";//注意字符串末尾有个\0
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s",arr2);
//		Sleep(300);//注意S要大写
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//	}
//	printf("%s",arr2);
//
//	return 0;
//}
//                             函数递归   鹏哥46集  
//递				只递不归会栈溢出    每一次函数的调用都会在栈区申请空间			
//归                   
/*函数递归（Recursion）是指一个函数直接或间接调用自身的编程技术。
通过递归，我们可以将复杂问题分解为规模更小的同类问题，从而简化代码实现。
递归的基本构成要素：
递归调用：函数在自身定义中调用自己
终止条件：必须存在一个或多个条件，当满足时递归不再继续（避免无限递归）
递归函数的基本结构
把大事化小*/
//int main(void)
//{
//	unsigned int num = 0;//无符号整数 无符号整数的取值范围只能是非负整数（0 及正数）
//	scanf("%u", &num);//1234
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}
//void print(unsigned int n)
//{
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	//1 2 3 4
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//
//}
//int main(void)
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//接受一个整型值（无符号），按照顺序打印他的每一位
//	return 0;
//}
//递归的条件： 递归不能是死递归 要存在限制条件 每次的递归要越来越接近这个限制条件
//编写函数不允许创建临时变量，求字符串的长度
//模拟实现strlen
//int my_strlen(char str[])参数部分写成数组的形式
//int my_strlen(char*str)//参数部分写成指针的形式
//{
//	int count = 0;//计数 临时变量
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//my_strlen(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
////my_strlen("abc");
////1+my_strlen("bc");
////1+1+my_strlen("c");
////1+1+1+my_strlen(" ");
////1+1+1+0
//int main()
//{
//	char arr[] = "abcd";
//	scanf("%s", &arr);
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//int main()
//{
//	printf("\n\n\n");
//	printf("    ==================================================\n");
//	printf("    |                                                |\n");
//	printf("    |                恭喜获胜！                      |\n");
//	printf("    |                                                |\n");
//	printf("    |               五子棋游戏胜利界面               |\n");
//	printf("    |                                                |\n");
//	printf("    |                   ╭━━━━━━╮                     |\n");
//	printf("    |                   ┃ WIN  ┃                     |\n");
//	printf("    |                   ╰━━━━━━╯                     |\n");
//	printf("    |                                                |\n");
//	printf("    |           恭喜你完成了五子连珠！               |\n");
//	printf("    |           展现了出色的策略思维！               |\n");
//	printf("    |                                                |\n");
//	printf("    ==================================================\n");
//}
//求n的阶乘
//n=1时 =1
//n>1时 =fac(n-1)
//法一：递归
//long long fac(unsigned int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//long long main(void)
//{
//	unsigned int n;
//	scanf("%d", &n);
//	long long len = fac(n);
//	printf("%d\n", len);
//	return 0;
//}
//法二：迭代(非递归实现)
 /*int diedai(int n)
{
	int i = 0;
	 int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}
int main(void)
{
	 int n;
	scanf("%d", &n);
	 int ret = diedai(n);
	printf("%u\n", ret);
	return 0;
}*/
//求第n个斐波那契的数字大小 1 1 2 3 5 8 13 21 34 55
//用递归会重复计算很多次
//int count = 0;
//int feibo(int n)
//{
//	if (n==3)
//		count++;
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return feibo(n - 1) + feibo(n - 2);
//	}
//}
//int main(void)
//{
//	int n;
//	scanf("%d",&n);
//	int ret = feibo(n);
//	printf("%d\n",ret);
//	printf("%d\n",count);
//	return 0;
//}
//用迭代来实现尝试看看(速度比递归快很多)      1 1 2 3 5 8 13 21 34 55
//int feibo(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n >= 3)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//	}
//	return c;
//}
//int main(void)
//{
//	int n;
//	scanf("%d",&n);
//	int ret = feibo(n);
//	printf("%d\n",ret);
//	return 0;
//}
//void test(int n)
//{
//	if (n < 10000)
//		test(n+1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//int chazhao(int k, int sz, int arr[])
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = left + (right - left) / 2;
//	if (arr[mid] < k)
//	{
//		while (arr[mid] != k)
//		{
//			left = mid + 1;
//			mid++;
//		}
//		return left;
//	}
//	else if (arr[mid] > k)
//	{
//		while (arr[mid] != k)
//		{
//			right = mid - 1;
//			mid++;
//		}
//		return right;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	scanf("%d", &k);
//	if (k > 10 || k < 1)
//	{
//		printf("找不到");
//		return 0;
//	}
//	int n = chazhao(k, sz, arr);
//	if (n!=-1)
//	{
//		printf("找到了下标是%d", n);
//		return 0;
//	}
//	else
//	{
//		printf("找不到");
//		return 0;
//	}
//}
//猜数字小游戏
//电脑产生随机数(1~100)  反馈猜大或猜小了 直到猜对了才结束
//void Gamemenu()
//{
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@  1.play   @@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@  2.exit   @@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//}
////0~RAND_MAX(0~32767)
//void Game()
//{
//	int guess = 0;
//	//RAND_MAX;
//	//srand((unsigned int)time(NULL));
//	//1.生成随机数
//	int ret = rand()%100+1;//生成随机数
//	printf("%d\n",ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//			Sleep(400);
//			system("cls");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//			Sleep(400);
//			system("cls");
//		}
//		else
//		{
//			printf("猜对了 恭喜!\n");
//			Sleep(600);
//			system("cls");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//NULL是空指针的意思 int *p+NULL;
//	do
//	{
//		Gamemenu();
//		printf("请输入选项(1~2):>");
//		printf("猜数字\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			Game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误 请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//                               goto语句 不能跨函数交流 适用于一次跳出两层或多层循环
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//关机程序 
//1.电脑运行一分钟就关机 
//2.如果输入"我是猪"就取消关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在60s后关机\n如果输入“我是林臻龙的儿子”将终止关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是林臻龙的儿子") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//也可以用循环来实现
//	}
//	return 0;
//}
//strcmp比较两个字符串大小
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello bit";
//	strcpy(arr1,arr2);//										strcpy(被换的,提供换的);
//	printf("%s\n",arr1);//hello bit
//	//memset
//	return 0;
//}
//int main()
//{
//	char arr[20] = "hello bit";
//	memset(arr,'x',5);//xxxxx bit
//	memset(arr+6,'y',3);//hello yyy     用下标
//	printf("%s\n",arr);//xxxxx yyy
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//直接改
//	*p = 30;//间接改
//	return 0;
//}
//							给定两个数 求这两个数的最大公约数
//法一
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i;
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		for (i = a; i <= a; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	else if (a > b)
//	{
//		for (i = b; i <= b; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d\n",i);
//				break;
//			}
//		}
//	}
//	else
//	{
//		printf("%d",a);
//	}
//	return 0;
//}
//								法二
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n",min);
//	return 0;
//}
//								法三：辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//1-1/2+1/3-1/4+1/5....+1/99-1/100;
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//求十个整数的最大值
//int main()
//{
//	int arr[10] = {21,2,73,14,75,46,37,28,99,10};
//  int j=0;
//  for(j=0;j<10;j++)
// {
//		scanf("%d",&arr[j]);
// }
//	//找最大值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i <= sz-1; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n",max);
//	return 0;
//}
//						打印99乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (j = 1; j <= 9; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);//还可以%d*%d=%2d  左边的是左对齐(左对齐更好看) 注释的这个是右边对齐
//			/*if (i==j)
//			{
//				printf("\n");
//			}
//			count++;*/
//		}
//		printf("\n");//	这行与注释掉的代码二选一即可
//	}
//	printf("\n%d",count);
//	return 0;
//}
//int a = 0;
//int b = 0;
//void test()
//{
//	a = 3;
//	b = 4;
//}
//int main()
//{
//	test();
//	printf("%d %d",a,b);
//	return 0;
//}
//void test(int* px, int* py)
//{
//	*px = 3;
//	*py = 4;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//int main()
//{
//	int ret = fun(2);
//	printf("%d",ret);
//	return 0;
//} 
//递归实现字符串反向排序 不是逆序打印
//int main()
//{
//	char arr[] = "edcba";
//	int sz1 = strlen(arr);//strlen不会去算\0   sizeof会去算\0
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz2 - 2;//这里要求的是下标
//	while (left < right)
//	{
//		char t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//	printf("%s\n",arr);
//	return 0;
//}
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (my_strlen(str+1)>=2)
//	{
//		reverse(str + 1);//4
//	}
//	*(str + len - 1) = tmp;//5
//}
//int main()
//{
//	char arr[] = "edcba";
//	int sz = my_strlen(arr);//strlen不会去算\0   sizeof会去算\0
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse(char arr[],int left,int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[] = "edcba";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}
// 递归实现n的k次方
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0/Pow(n,-k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("n的k次方为%lf\n", ret);
//	return 0;
//}
//#include <math.h>  // 必须包含此头文件
//double pow(double x, double y);x的y次幂
//sizeof 是操作符 是用来计算变量(类型)所占内存空间的大小 单位是字节 不关注内存中存放的内容
//strlen 是一个库函数 是专门求字符串长度的 只能针对字符串 从参数给定的地址向后一直找\0 统计\0之前出现的字符串的个数
//将数组A中的内容和数组B中的内容进行交换 数组一样大
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
// 创建一个整形数组，完成对数组的操作
// 实现函数init()初始化数组为全0
// 实现print() 打印数组的每个元素
// 实现reverse() 函数完成数组元素的逆置
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//两个矩形排放所需最小矩形面积
// 计算两个数的最大值
//int max(int a, int b) {
//	return a > b ? a : b;
//}
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int a, b, c, d;
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		int min_area = INT_MAX;
//		// 枚举第一个矩形的两种摆放方式：(a,b) 和 (b,a)
//		for (int r1w = a, r1h = b; ; r1w = b, r1h = a) {
//			// 枚举第二个矩形的两种摆放方式：(c,d) 和 (d,c)
//			for (int r2w = c, r2h = d; ; r2w = d, r2h = c) {
//				// 方式1：两个矩形并排
//				int len1 = r1w + r2w;
//				int wid1 = max(r1h, r2h);
//				int area1 = len1 * wid1;
//				// 方式2：两个矩形上下叠放
//				int len2 = max(r1w, r2w);
//				int wid2 = r1h + r2h;
//				int area2 = len2 * wid2;
//				// 取当前组合下的最小面积
//				int current_min = area1 < area2 ? area1 : area2;
//				if (current_min < min_area) {
//					min_area = current_min;
//				}
//				// 第二个矩形的两种摆放方式枚举一次后跳出
//				if (r2w == d && r2h == c) break;
//			}
//			// 第一个矩形的两种摆放方式枚举一次后跳出
//			if (r1w == b && r1h == a) break;
//		}
//		printf("%d\n", min_area);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <windows.h>
//
//// 颜色常量定义（Windows控制台颜色）
//#define RESET 7
//#define RED 12
//#define GREEN 10
//#define YELLOW 14
//#define BLUE 9
//#define MAGENTA 13
//#define CYAN 11
//#define WHITE 15
//#define BRIGHT_RED 12
//#define BRIGHT_GREEN 10
//#define BRIGHT_YELLOW 14
//#define BRIGHT_BLUE 9
//#define BRIGHT_MAGENTA 13
//#define BRIGHT_CYAN 11
//#define BRIGHT_WHITE 15
//#define BRIGHT_ORANGE 248
//
//// 设置控制台文本颜色
//void set_color(int color) {
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(hConsole, color);
//}
//
//// 清除屏幕
//void clear_screen() {
//	system("cls");
//}
//
//// 移动光标位置（行, 列）- 确保位置精确
//void gotoxy(int row, int col) {
//	COORD coord;
//	coord.X = col;  // 列（水平位置）
//	coord.Y = row;  // 行（垂直位置）
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}
//
//// 随机颜色生成
//int random_color() {
//	switch (rand() % 6) {
//	case 0: return BRIGHT_RED;
//	case 1: return BRIGHT_GREEN;
//	case 2: return BRIGHT_YELLOW;
//	case 3: return BRIGHT_BLUE;
//	case 4: return BRIGHT_MAGENTA;
//	case 5: return BRIGHT_CYAN;
//	default: return BRIGHT_WHITE;
//	}
//}
//
//// 绘制装饰边框（固定宽度确保内容对齐）
//void draw_border() {
//	const int WIDTH = 70;  // 固定宽度，足够容纳所有内容
//	const int HEIGHT = 16; // 固定高度
//	set_color(CYAN);
//
//	// 顶部边框
//	gotoxy(0, 0);
//	printf("+");
//	for (int i = 0; i < WIDTH; i++) printf("-");
//	printf("+");
//
//	// 侧边边框
//	for (int i = 1; i < HEIGHT; i++) {
//		gotoxy(i, 0);
//		printf("|");
//		gotoxy(i, WIDTH + 1);
//		printf("|");
//	}
//
//	// 底部边框
//	gotoxy(HEIGHT, 0);
//	printf("+");
//	for (int i = 0; i < WIDTH; i++) printf("-");
//	printf("+");
//
//	set_color(RESET);
//}
//
//// 显示彩色生日快乐文字（精确对齐）
//void display_happy_birthday() {
//	// 统一长度的艺术字，确保对齐
//	const char* happy[] = {
//		"  H   H  AAAAA  PPPP   PPPP  Y   Y    ",
//		"  H   H  A   A  P   P  P   P   Y Y    ",
//		"  HHHHH  AAAAA  PPPP   PPPP     Y     ",
//		"  H   H  A   A  P      P        Y     ",
//		"  H   H  A   A  P      P       Y      "
//	};
//
//	const char* birthday[] = {
//		"  B   B  I     RRRR   TTTTT  H   H  DDDD  AAAAA  Y   Y  ",
//		"  B   B  I     R   R    T    H   H  D   D  A   A   Y Y   ",
//		"  B   B  I     RRRR     T    HHHHH  D   D  AAAAA     Y   ",
//		"  B   B  I     R   R    T    H   H  D   D  A   A     Y   ",
//		"  BBBBB  IIIII R   R    T    H   H  DDDD  A   A    Y    "
//	};
//
//	// 计算居中位置（边框宽度70，内容总长度约60，向左偏移5列居中）
//	const int START_COL = 5;
//	const int START_ROW = 3;
//
//	for (int i = 0; i < 5; i++) {
//		gotoxy(START_ROW + i, START_COL);  // 固定行偏移
//		set_color(random_color());
//		printf("%s", happy[i]);
//		set_color(random_color());
//		printf("%s", birthday[i]);  // 紧跟在happy后面，无额外空格
//		set_color(RESET);
//		Sleep(300);
//	}
//}
//
//// 绘制闪烁的蜡烛（居中对齐）
//void draw_candles() {
//	const int CANDLE_COL = 28;  // 计算居中列位置
//	const int FLAME_ROW = 9;    // 火焰行位置
//	const int BODY_ROW1 = 10;   // 蜡烛主体行1
//	const int BODY_ROW2 = 11;   // 蜡烛主体行2
//
//	// 蜡烛火焰（闪烁效果）
//	for (int i = 0; i < 3; i++) {
//		gotoxy(FLAME_ROW, CANDLE_COL);
//		set_color(BRIGHT_RED);    printf("●  ");
//		set_color(BRIGHT_YELLOW); printf("●  ");
//		set_color(BRIGHT_ORANGE); printf("●  ");
//		set_color(BRIGHT_YELLOW); printf("●  ");
//		set_color(BRIGHT_RED);    printf("●");
//		set_color(RESET);
//		fflush(stdout);
//		Sleep(300);
//
//		gotoxy(FLAME_ROW, CANDLE_COL);
//		printf("           ");  // 精确清除火焰（11个空格）
//		fflush(stdout);
//		Sleep(200);
//	}
//
//	// 蜡烛主体（与火焰对齐）
//	gotoxy(BODY_ROW1, CANDLE_COL);
//	set_color(WHITE);
//	printf("|  |  |  |  |");  // 每个蜡烛与火焰一一对应
//	gotoxy(BODY_ROW2, CANDLE_COL);
//	printf("|  |  |  |  |");
//	set_color(RESET);
//}
//
//// 显示标题（居中）
//void display_title() {
//	const char* title = "★★★ 特别的祝福送给特别的你 ★★★";
//	// 计算居中位置（边框宽度70，标题长度30，居中偏移20列）
//	gotoxy(1, 20);
//	set_color(BRIGHT_MAGENTA);
//	printf("%s", title);
//	set_color(RESET);
//}
//
//// 显示底部祝福语（居中）
//void display_wishes() {
//	const char* wishes = "祝你生日快乐，天天开心，万事如意！";
//	// 计算居中位置
//	gotoxy(14, 22);
//	set_color(BRIGHT_GREEN);
//	printf("%s", wishes);
//	set_color(RESET);
//}
//
//int main() {
//	// 设置控制台窗口大小（确保能显示完整内容）
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	SMALL_RECT windowSize = { 0, 0, 79, 24 };  // 宽度80，高度25
//	SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
//
//	srand((unsigned int)time(NULL));
//	clear_screen();
//
//	draw_border();       // 绘制边框
//	display_title();     // 显示标题（居中）
//	display_happy_birthday();  // 显示艺术字（对齐）
//	draw_candles();      // 绘制蜡烛（居中）
//	display_wishes();    // 显示祝福语（居中）
//
//	// 移动光标到最后
//	gotoxy(18, 0);
//	return 0;
//}
//那些我不太熟练的操作符
//1.移位操作符 << >> 移动的是二进制位  只有整形才能左移右移 浮点数不支持
// 不要移动负数位是 因为是标准未定义的 !!!!!!
// 整数的二进制表示有三种 原码 反码 补码
// 正的整数的 原码 反码 补码是相同的
// 负的整数的 原码 反码 补码是需要计算的 e.g     
// 7的二进制是
// 00000000000000000000000000000111--原码(也是7的反码和补码)(四个字节 32个比特位)
// 00000000000000000000000000000111--反码
// 00000000000000000000000000000111--补码
// -7的二进制是
// 10000000000000000000000000000111--原码(符号位是第一个)
// 11111111111111111111111111111000--反码(原码的符号位不变 其余的按位相反)
// 11111111111111111111111111111001--补码(反码的最后位加一就是补码)
// 
// 整数在内存中存储的是补码
// 左移乘二 右移除二
//2.
//
// int main()
//{
//	int a = -7;
//	int b = a << 1;//向左移位后 左边丢弃 右边自动补充0
//	//二进制10-1变成1
//	//计算是以补码开始计算的
//	//这里b是以a左移一位后的补码再取减1取到反码 最后相反过来变成原码 例子里的-7变成-14
//	printf("%d\n%d", a, b);
//	return 0;
//}
//右移操作符:
//1.算术移位:右边丢弃 左边补原符号位 vs采用的是算术右移
//2.逻辑移位:右边丢弃 左边补0
//int main()
//{
//	int a = -7;
//	int b = a << 1;
//	int c = a >> -1;
//	printf("%d\n%d\n%d", a, b, c);
//	return 0;
//}
//位操作符  只支持整数 不支持浮点型
//   &按(二进制)位与 有0即0 都1为1
//   |按(二进制)位或 有1为1 都0为0
//   ^按(二进制)位异或 同为0 异为1
//在 C 语言中，对整数进行 ^（异或）、&（与）、|（或）操作时，运算的对象是补码。

//   &按(二进制)位与 
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//00000000000000000000000000000011 --3的补码
//	//10000000000000000000000000000101 --
//	//11111111111111111111111111111010 --
//	//11111111111111111111111111111011 --(-5)的补码
//	//00000000000000000000000000000011 --3的补码
//	//00000000000000000000000000000011 --&后的码
//	//%d意味着打印一个有符号的整数
//	//&两个里面有0即为0 都为1才是1
//	printf("%d\n", c);
//	return 0;
//}
//   |按(二进制)位或
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	//00000000000000000000000000000011 --3的补码
//	//10000000000000000000000000000101 --
//	//11111111111111111111111111111010 --
//	//11111111111111111111111111111011 --(-5)的补码
//	//00000000000000000000000000000011 --3的补码
//	//11111111111111111111111111111011 --|后的结果
//	//11111111111111111111111111111010
//	//10000000000000000000000000000101 --
//	//|两个里面有1即为1 都为0才是0
//	printf("%d\n", c);
//	return 0;
//}
//   ^按(二进制)位异或
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//00000000000000000000000000000011 --3的补码
//	//10000000000000000000000000000101 --
//	//11111111111111111111111111111010 --
//	//11111111111111111111111111111011 --(-5)的补码
//	//00000000000000000000000000000011 --3的补码
//	//11111111111111111111111111111000 --^后的结果
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000
//	printf("%d\n", c);
//	return 0;
//}
//	不创建临时变量(第三个变量) 实现两个数的变换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/  
//	//小学奥数 哈哈哈
//	//但是这种方法可能会溢出 下面用^实现 好好看 好好学
//	a = a ^ b;//a=3^5
//	b = a ^ b;//3^5^5 -->3
//	a = a ^ b;//3^5^3 -->5
//	//3 ^ 3 = 0       a ^ a = 0
//	//011 
//	//011
//	//000 = 0
//	// 
//	//0 ^ 5 = 5		  0 ^ a = a
//	//000
//	//101
//	//101 = 5
//	//3 ^ 3 ^ 5 = 5
//	//3 ^ 5 ^ 3 = 5
//	// ^支持交换律
//	printf("%d\n%d\n", a, b);
//	return 0;
//}
//编写代码实现:求一个整数存储在内存中的二进制的个数
//也就是求补码中二进制的1的个数
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 --3
//	//00000000000000000000000000000001 --1
//	//00000000000000000000000000000001 --3^1
//	int i = 1;
//	unsigned int mask = 1;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a & mask)
//			//举例（以 a = 3 为例）：
//			//a 的二进制为 000...0011（32 位）：
//			//当 mask = 000...0001 时，a & mask = 000...0001（非 0）→ count 加 1。
//			//当 mask = 000...0010 时，a & mask = 000...0010（非 0）→ count 加 1。
//			//当 mask 左移到更高位时，a & mask 结果为 0 → 不统计。
//		{
//			count++;
//		}
//		mask <<= 1;//或者写成mask = mask << 1 比较好理解
//	}
//	printf("%d\n", count);
//	return 0;
//}
//												一个很值得借鉴的方法
//int main() 
//{
//	int n;
//	scanf("%d", &n);// 读取套餐数量
//	int min_price;
//	// 读取第一个套餐价格作为初始最小值
//	scanf("%d", &min_price);
//	// 读取剩余n-1个套餐价格，并更新最小值
//	for (int i = 1; i < n; i++) {
//		int p;
//		scanf("%d", &p);
//		if (p < min_price) {
//			min_price = p;
//		}
//	}
//	printf("%d\n", min_price);  // 输出最低价格
//	return 0;
//}
//int x1 = r1 ? b1 : a1;//变量命名的三目操作符
//int y1 = r1 ? a1 : b1;
//int x2 = r2 ? b2 : a2;
//int y2 = r2 ? a2 : b2;
//int x3 = r3 ? b3 : a3;
//int y3 = r3 ? a3 : b3;
//赋值操作符可以连续使用
//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//从右向左
//	printf("%d %d %d", a, x, y);//21 21 20
//	return 0;
//}
//复合操作符 += -= *= /= %= >>= <<= &= |= ^=
//int main()
//{
//	int a = 3;
//	a = a + 5;
//	a += 5;
//
//	a = a >> 1;
//	a >>= 1;
//
//
//	return 0;
//}
//单目操作符
//int main()
//{
//	int flag = 3;
//	if (flag)//flag为真进入if
//	{
//		printf("hehe");
//	}
//	if (!flag)//flag为假进入if
//	{
//		printf("haha");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	printf("%p\n", &a);//int需要四个字节 这里取的是第一个地址
//	int* p = &a;//指针变量是用来存放地址的  这里p就是指针变量
//
//	return 0;
//}
//sizeof()计算的是类型或者变量所占内存空间的大小 单位是字节
//计算类型所创建的变量所占空间的大小
// 
//  ~对一个数组的二进制按位取反
//int main()
//{
//	//int a = 0;
//	////~按位取反
//	////00000000000000000000000000000000 --> 补码
//	////11111111111111111111111111111111 --> ~a 这也是内存的补码
//	////11111111111111111111111111111110
//	////10000000000000000000000000000001
//	////-1
//	//printf("%d\n",~a);//-1
//	//int a = 3;
//	////00000000000000000000000000000011
//	////11111111111111111111111111111100 --> 补码
//	////11111111111111111111111111111011
//	////10000000000000000000000000000100 --> 原码
//	////-4
//	//printf("%d\n",~a);
//	//int a = 13;
//	////00000000000000000000000000001101
//	////11111111111111111111111111110010
//	////11111111111111111111111111110001
//	////10000000000000000000000000001110
//	////-14
//	//printf("%d\n",~a);
//	int a = 13;
//	printf("%d\n", a|2);
//	//要单改变13的二进制位上的某一位数的值0/1 可以采用下面的这个方法
//	//00000000000000000000000000001101 13的原反补码
//	//00000000000000000000000000000010 2 的原反补码 可以理解成1向左移动了一位1<<1 这样就不用去算需要|的数字是几了
//	//00000000000000000000000000001111 13 | 2的补码
//	//00000000000000000000000000001110
//	//01111111111111111111111111110001
//	int b = 13;
//	printf("%d\n",b|=(1<<1));
//	int c = 13;
//	//00000000000000000000000000001101 13的原反补码
//	//00000000000000000000000000000101 现在要把13改成这样 也就是把倒4位改成0 那就需要下面这一串二进制数字来&
//	//11111111111111111111111111110111 这串其实是下面这串的~
//	//00000000000000000000000000001000 1<<4 1左移4位
//	int d = c & (~(1 << 3));
//	printf("%d\n",d);
//	return 0;
//}
//操作符 ++  -- 分为前置和后置使用
//void test(int aaa)
//{
//	printf("%d\n", aaa);//10
//}
//int main()
//{
//	int a = 3;
//	int b = ++a;//前置++  先++后使用  a=a+1;b=a;
//	int c = 3;
//	int d = c++;//后置++ 先使用后++  d=c;c=c+1;
//	printf("%d\n", a);//4
//	printf("%d\n", b);//4
//
//	printf("%d\n", c);//4
//	printf("%d\n", d);//3
//	//--同理
//	int e = 3;
//	int f = --e;//前置--  先--后使用
//	int g = 3;
//	int h = g--;//后置--  先使用后--
//	printf("%d\n", e);//2
//	printf("%d\n", f);//2
//	printf("%d\n", g);//2
//	printf("%d\n", h);//3
//	int aa = 10;
//	printf("%d\n", aa--);//10 aa先被使用后被--
//	printf("%d\n", aa);//9
//	int aaa = 10;
//	test(aaa--);//也是先传参再--
//	return 0;
//}
//				*解引用操作符(间接访问操作符)   和指针配合去使用
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);//20
//	return 0;
//}
//  (类型) 强制类型转换
//int main()
//{
//	int a = (int)(3.14);
//	printf("%d\n", a);//3
//	int b = 0;
//	printf("%d\n", sizeof(b));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//不能这么写 说明sizeof是操作符不是函数 strlen是库函数(且只能求字符串)
//	return 0;
//}
//两个字符串比较相等应该使用strcmp
//逻辑操作符 && ||
//int main()
//{
//	//&&其实就是 并且
//	int a = 3;
//	int b = 5;
//	int c = a && b;//c=1 a和b里面只要有一个为假就为假 因为a和b都为真所以现在a && b为真
//	if (a && b)
//	{
//		printf("%d\n", c);//1
//		printf("%d\n", a && b);//1
//	}
//	int e = 0;
//	int f = 1;
//	int g = e && f;
//	printf("%d\n", e && f);//0
//	printf("%d\n", g);//0
//	//  ||只要有一个为真就为真 都为假才是假
//	int m = 0;
//	int n = 1;
//	int o = m || n;
//	printf("%d\n", o);//1
//	return 0;
//}
//                                         一道有点坑的题
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//从左向右算 a先使用后++ 所以i = 0 && ++b && d++ 但是&&一个为假就为假 所以0&&++b的结果是0
//	//所以i = 0 && d++ 
//	//同理最后 i = 0
//	//i = a++ || ++b || d++;
//	//最后的最后a被使用完后要++所以a=1 其他的都不变
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//1 2 3 4
//	printf("\n");
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	test3();
//	return 0;
//}
//int test1()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//按照上面的来理解
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2 3 3 5
//	return 0;
//}
//int test2()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	//对于||来说一个为真后另一个就不去运算 所以++b并没有被计算 一样的d++也没有被计算 
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2 2 3 4
//	return 0;
//}
//int test3()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//1 3 3 4
//	return 0;
//}
//总结:&&一个为假就为假
//	   ||一个为真就为真
//	 假&&* 左边为假 右边就不计算了
//   真||* 左边为真 右边就不计算了
//条件操作符 也叫三目操作符 exp1 ? exp2 : exp3;
//						   真     算     不算
//                         假    不算      算
//替代简单的if else(仅限于有两种情况的) 
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;
//	//替换上述if else 的两种写法
//	//(a > 5) ? (b = 3) : (b = -3);
//	//b = (a > 5 ? 3 : -3);
//	return 0;
//}
//逗号表达式
//就是逗号隔开的多个表达式 
//从左向右依次执行 注意了也会执行 除非是下面这种a a>b这种一点没用的
//整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//              a = 12         b = 12 +1 ;
//	printf("%d\n", c);//13
//	return 0;
//}
//下标引用 
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;//给下标为7的元素赋值为8
//	//[]下标引用操作符
//	7[arr] = 9;//给下标为7的元素赋值为9
//	//arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]
//	//arr是数组首元素的地址
//	//arr+7就是跳过七个元素,指向了第8个元素 也就是arr[7]
//	//所以(arr+7)就是arr[7]
//	//因为加法支持交换律 所以*(7+arr)等同于*(arr+7)所以可以写成7[arr]
//	//但是不建议这么写 而且定义初始化的时候不能这么写 就访问的时候可以
//	return 0;
//}
//函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int c = Add(a, b);//()就是函数调用操作符 操作数:Add,a,b 函数调用不一定要有参数
//	printf("%d\n", c);
//	return 0;
//}
//结构访问操作符
//. 结构体.成员名
//> 结构体>成员名
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//strcpy(ss.name, "zhangsan");//这里得说明一下，由于在定义结构体的时候就已经给成员变量赋值了
//	////							  所以就不能用 = ，得用strcpy
//	//ss.age = 20;
//	//ss.score = 100.0;
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;//还能简化一下
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//	//结构体指针->成员
//	//结构体对象.成员
//	//ps.age等价于(*ps).age//用指针更节约空间
//}
//
//void print_stu(struct Stu* ps)//
//{
//	printf("%s %d %.1lf\n", ps->name, ps->age, ps->score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//传参的时候把数据放到了拷贝的ss里面去了，影响不到原参s，因为ss是拷贝出来的
//	//			 所以不能传s应该传&s
//	print_stu(&s);//传值浪费空间 传址省空间
//	return 0;
//}
//                      表达式求值
//表达式求值的顺序一部分是由操作符的优先级和结合性决定的
//有些表达式的操作数在求值的过程中可能需要转换为其他类型
//int main()
//{
//	int a = 2 + 6 / 3;
//	printf("%d\n",a);
//	int b = 2 + 3 + 4;//优先级相同的情况下 从左向右	
//	return 0;
//}
//隐式类型转换   整形提升
//C语言里面整形和字符默认int类型
//字符类型是被归到整形家族的 因为字符底层存储的时候存的是阿斯克码值
//只要是整形类型在内存中存储的都是 补码
//int main()
//{
//	//char c = -1;//-1是整数 32个比特位
//	//10000000000000000000000000000001原
//	//11111111111111111111111111111110反
//	//11111111111111111111111111111111补  补码-1等于反码
//	//但是char是一个字节8个比特位
//	//所以c存放的是-1的补码最右边的八个比特位
//	//即11111111 -->c
//	//但C语言会对其 高位补充符号位 进行整形提升
//	//11111111111111111111111111111111 -->整形提升后
//	//整数和负数都会高位补充符号位
//	//无符号整形提升时,高位补0
//	char a = 5;
//	char b = 126;
//	//00000000000000000000000000000101 -->5
//	//00000101 -->a
//	//00000000000000000000000000000101
//	//00000000000000000000000001111110 -->126 
//	//01111110 -->b
//	//00000000000000000000000001111110
//	char c = a + b;
//	//10000011 -->c
//	//11111111111111111111111110000011 -->
//	//10000000000000000000000001111100
//	//10000000000000000000000001111101 -->(-125)
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	//
//	if (a == 0xb6)//这里a会整形提升
//	{
//		printf("a");
//	}
//	if (b == 0xb006)//这里b也会整形提升
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)// 这里c不会整形提升 
//	{
//		printf("c");
//	}
//	//所以一共只会输出c
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4 //整形提升之后参与运算 所以是4个字节
//	printf("%u\n", sizeof(-c));//4 //与上述同理
//	//%u打印无符号整形
//	return 0;
//}
//					算术转换
//如果某个操作符的各个操作数属于不同的类型
//那么除非其中一个操作数的转换为另一个操作数的类型
//否则操作就无法进行  下面的层次体系称为"寻常算术转换"
/*
long double
double
float
unsigned long int
long int
unsigned int
int
从下往上转换*/
//复杂表达式的求值有三个影响的因素
//1.操作符的优先级
//2.操作符的结合性
//3.是否控制求值顺序
//两个相邻的操作符先执行哪个?取决于他们的优先级,如果他们的优先级相同,取决于他们的结合性
/*   操作符优先级从上往下
()聚组
()函数调用
[]下标引用
. 访问结构成员
->访问结构指针成员
++后缀自增
--后最自减
! 逻辑反
~ 按位取反
+ 单目,表示正值
- 单目,表示负值
*
&
sizeof
(类型)
* / % + -
<< >> > >= <=
......
这里不在列举 也没啥意义
......
再赋值类型操作符
再逗号(从左向右)
*/
//优先级讨论的是相邻操作符
//int main()
//{
//	//问题表达式 有歧义
//	//a* b + c * d + e * f;
//	// 1   3   2   5   4
//	// 1   4   2   5   3
//	//
//	//c + --c;
//	//非法表达式
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);//4
//	return 0;
//	//上述代码在不同的编译器运行的结果不同
//}
//下面这个也是问题代码
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//这里哪个函数先调用不清楚
//	printf("%d\n", answer);
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}
//青蛙跳台阶
//青蛙一次可以一个或者两个台阶 
//请问青蛙跳到第n个台阶共有多少种跳法  有许多变种子题
//int fun(int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	if (num == 2)
//	{
//		return 2;
//	}
//	if (num > 2)
//	{
//		return fun(num - 1) + fun(num - 2);//递归实现
//		//有点类似斐波那契
//	}
//}
//int fun(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fun(n - 1) + fun(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = fun(n);
//	int count = 0;
//	printf("共有%d种走上第n阶台阶的方法\n", num);
//	return 0;
//}
//						序列中删除指定数字
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，
//序列中未被判除数字的前后位置没有发生改变
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int arr[5] = {0};
//	int i = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i]!=del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	/*for (int j=0;j<=5;j++)
//	{
//		if (j!=del)
//		{
//			printf("arr[%d] ", j);
//		}
//	}*/
//
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[5] = {0};
//	int max;
//	int min;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int max = arr[1];
//		int min = arr[2]; 
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d", max-min);
//	return 0;
//}
//#define MAX_SIZE 1000  // 定义最大可输入的数字个数
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	if (n <= 0 || n > MAX_SIZE)
//	{
//		printf("请输入一个合理的数字个数（1 ~ %d）\n", MAX_SIZE);
//		return 1;
//	}
//	int arr[MAX_SIZE];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 初始化 max 和 min 为数组的第一个元素
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 1; i < n; i++)  // 从第二个元素开始比较
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//	return 0;
//}
//void bubbleSort(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{                // 外层循环控制轮数
//		for (int j = 0; j < n - 1 - i; j++)
//		{        // 内层循环控制每轮比较次数
//			if (arr[j] > arr[j + 1])
//			{               // 如果前一个比后一个大
//				// 交换 arr[j] 和 arr[j + 1]
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入要排序的数字个数: ");
//	scanf("%d", &n);
//	if (n <= 0)
//	{
//		printf("数字个数必须大于 0。\n");
//		return 1;
//	}
//	int arr[1000]; // 假设最多输入 1000 个数字，可根据需求调整
//	printf("请输入 %d 个整数:\n", n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 调用冒泡排序函数
//	bubbleSort(arr, n);
//	// 输出排序后的结果
//	printf("排序后的数组（升序）:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//小涛同学参加了闽南师范大学 ACM 队的选拔赛。此次共有 n 个人参加这场比赛
//但是 ACM 队只打算选择前 x% 的同学进入队伍（人数向上取整）
//而小涛同学的排名为第 a 名 
//若小涛同学能成功入队
//输出 "Well done"，否则输出 "Try harder"
//int main() 
//{
//	int n, x, a;//99 20 20
//	scanf("%d %d %d", &n, &x, &a);
//	// 计算前 x% 的人数（向上取整）
//	int selected = (n * x + 99) / 100;
//	if (a <= selected) 
//	{
//		printf("Well done");
//	}
//	else 
//	{
//		printf("Try harder");
//	}
//	return 0;
//}
//一些冷知识:scanf读取成功时返回的是读取的数据的个数
//scanf读取失败时返回EOF
//库函数里有islower(ch)如果是小写字母就返回非零(真) 如果不是小写就返回0
//isupper(ch) 大写返回非零 小写返回0
//int main()
//{
//	char ch = 0;//大小写转换
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//			printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}
//islower isupper tolower toupper需要的头文件<ctype.h>
//int main()
//{
//	char ch = 0;//大小写转换
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if(isupper(ch))
//			printf("%c\n", tolower(ch));
//		getchar();
//	}
//	return 0;
//}
//getchar 函数的作用
//功能：从标准输入（键盘 / 文件）读取 一个字符（包括换行符 \n、空格等不可见字符）。
//返回值：成功时返回读取到的字符（以 ASCII 码值的形式，比如读取 'a' 就返回 97）；失败或遇到输入结束时，返回 EOF。
//定义：EOF 是 stdio.h 中定义的宏，本质是一个 负整数（通常是 -1，因为字符的 ASCII 码都是非负的，不会和正常字符冲突）。
//作用：标记 “输入流已经读完了”，没有更多数据可以读取了。
//触发场景：
//键盘输入时：Windows 按 Ctrl + Z 再回车，Linux / Mac 按 Ctrl + D，手动触发 EOF。
//读取文件时：文件指针走到末尾，自动触发 EOF。
//putchar 功能是 向标准输出（屏幕 / 文件）输出一个字符，
//接收单个字符（或对应 ASCII 码）作为参数，是最简单的字符输出函数。
//int main() 
//{
//	putchar('A');   // 直接输出字符 'A'
//	putchar(98);    // 输出 ASCII 码 98 对应的字符 'b'
//	putchar('\n');  // 输出换行符（换行）
//	putchar('1');   // 输出数字字符 '1'（不是整数 1）
//	return 0;
//}
//int main() {
//	int c;
//	printf("请输入内容，按 Ctrl+Z（Windows）/ Ctrl+D（Mac/Linux）结束：\n");
//	while ((c = getchar()) != EOF) {
//		if (c >= '0' && c <= '9') { // 只保留数字字符
//			putchar(c); // 输出数字字符
//		}
//	}
//	return 0;
//}
//int main() 
//{
//	char ch = '0';
// //也可以不用getchar 但是要改成while( (scanf(" %c", &ch) ) == 1)
// //这里%c前加上空格的作用是  跳过下一个字符之前的所有空白字符
//	while (scanf("%c", &ch)==1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("%c is an alphabet\n", ch);
//		else
//			printf("%c is not an alphabet\n", ch);
//		getchar();//回车\n被getchar读取所以被存进了这个函数里面 但是这个库函数本身并不会直接输出 所以相当于直接吸收了回车\n
//	}
//	return 0;
//}
//- 关键原因： scanf("%c", &ch)  是“行缓冲输入”——你输入的字符会先存在缓冲区，只有按下回车，
//缓冲区的字符才会被 scanf 读取，此时才满足  scanf 返回值=1 ，进入循环。​
//- “a + 回车”的处理过程：​
//1. 你输入 'a' 没按回车：缓冲区存 'a'，scanf 不读取，程序停在  scanf  等待；
//2. 按下回车：缓冲区新增 '\n'（回车符），此时缓冲区有 'a' 和 '\n' 两个字符；
//3. scanf 先读取第一个字符 'a'，进入循环执行判断 + 输出；
//4. 最后  getchar()  读取缓冲区剩下的 '\n'（吃掉回车），避免下次 scanf 误读；
//5. 回到  scanf ，等待你下一次输入。
//scanf("%d", ...)  会自动跳过空白字符（空格、回车、制表符），只读取有效数字。
//int main()
//{
//	char ch = 0;
//	while ((scanf(" %c", &ch) == 1))
//	{
//		if (isalpha(ch))//也是一个库函数 判断是否为字母
//		{
//			printf("Yes\n");
//		}
//		else
//			printf("No\n");
//	}
//	return 0;
//}
//变种水仙花数 1461 拆成1和461 或14和61 或146和1 如果拆分之后的乘积之和等于自身 则是一个Lily Number
//1461=1*461+14*61+146*1   655=6*55+65*5;
//求5位数内的所有水仙花数
//法一:最容易的方法
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断  12345  #1 2345 #12 345 #123 45 #1234 5
//		if (((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)) == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//法二:
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断  12345  #1 2345 #12 345 #123 45 #1234 5
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 4; j++)
//		{
//			int k = (int)pow(10, j);//这里的pow表示10的j次方 <math.h> 参数和返回值都是double类型
//			sum = sum + (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//指针 初阶 
//指针和指针类型
//野指针
//指针运算
//指针和数组
//二级指针
//指针数组

//指针是内存中一个最小的编号 也就是地址
//平时口语中的指针，指的通常是指针变量 是用来存放内存地址的变量
//int main()
//{
//	int a = 10;//a是整形变量占用四个字节 应该会有四个字节
//	printf("%p\n", &a);//取出来的是四个字节里面的第一个字节的地址
//	printf("%d\n", sizeof(&a));//4 x86
//	int* pa = &a;
//	//pa是一个指针变量 用来存放地址
//	printf("%p\n", &pa);
//	//本质上指针就是地址
//	//口语中说的指针,其实是指针变量,指针变量就是一个变量,指针变量是用来存放地址的一个变量
//	//指针变量里边存的是地址,而通过这个地址,就可以找到一个内存单元  一个小的单元是一个字节(八个比特位)
//	//对于32位的机器，假设有32根地址线，那么假设每根地址线在寻址的时候产生高电平（高电压） 和低电平（低电压）就是(1或者0)；
//	//可以产生pow(2,32)个不同的地址换算一下就是4GB
//	//32位上的机器一个指针变量的大小应该是4字节
//	//64位上的机器一个指针变量的大小应该是8字节 才能存放一个地址
//	// x86是32位的环境 x64是64位环境
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//注意:sizeof 返回的是无符号整形 就是unsigned int
//	printf("%zu\n", sizeof(pc));//4 x8
//	printf("%zu\n", sizeof(ps));//4 x86
//	printf("%zu\n", sizeof(pi));//4 x86
//	printf("%zu\n", sizeof(pd));//4 x86
//	//是给sizeof和strlen准备的
//	return 0;
//}
//指针类型的意义
//int main()
//{
//	int a = 0x11223344;//两个十六进制代表一个字节 0x是16进制的前缀标识
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pa = (char*) & a;
//	//结论 调试监视起来
//	//指针类型不影响指针所占内存的大小 但是决定了解引用时访问几个字节
//	//int* 的指针 解引用访问4个字节
//	//char*的指针 解引用访问1个字节
//	//推广到其他类型
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pd = (char*)&a;
//
//	printf("pa = %p\n", pa);
//	printf("pd+1 = %p\n", pa + 1);
//	printf("pd = %p\n", pd);
//	printf("pd+1 = %p\n", pd + 1);
//
//	//结论:
//	//指针的类型决定了指针+-1操作时,跳过几个字节
//	//决定了指针的步长
//
//
//	//100       10进制
//	//0x64      16进制
//	//110 0100   2进制
//	//144        8进制
//	//电脑自带的计算器有提供各大进制之间的数字转换
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//
//	int* pi = &a;  //pi 解引用访问4个字节,pi+1也就是跳过4个字节
//	float* pf = &a;//pf 解引用访问4个字节,pf+1也就是跳过4个字节
//	// int* 和 float* 是不是就可以通用啊?
//	// 不能 !!!!!!!
//	//实例如下
//	//*pi = 100;
//	*pf = 100.0;
//	//说白了就是指针变量存放的是地址，他映射到变量的内存地址，
//	//然而指针变量根本不知道变量的类型，所以需要在指针变量中定义类型来决定变量的移动步进。
//	//浮点数在内存中的存放和整形是不一样的，浮点数的存放参考IEEE规则
//	return 0;
//}
//    野指针 指针运算
//野指针:
//int main()
//{
//	int* p;//p没有初始化,就意味着没有明确的指向
//	//一个局部变量不初始化的话,放的是随机值:0xcccccccc
//	*p = 10;//非法访问内存,这里的p就是野指针
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0] 数组的地址就是首元素的地址
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//这里11次了数组越界访问
//	//当指针指向的范围超出数组arr的范围时,p就是野指针
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
////因为a是局部变量 一旦出了test这个函数就销毁了 空间就会还给操作系统就会用不了
////内存的空间还在只是不属于我当前程序了 没有这块空间的操作权限了
//int main()
//{
//	int* p = test();
//	//虽然p里面还保留着a的地址 但是p找到这块空间时却访问不了这个空间
//	//也会有野指针产生
//	return 0;
//}
//使用指针的好习惯 避免野指针的出现
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int* p = &a;
//	*p = 20;
//	//NULL -> 0
//	int* p2 = NULL;//空指针
//	*p2 = 100;//err
//	//空指针（NULL 或 nullptr）的设计初衷是表示 “不指向任何有意义的内存区域”。
//	//操作系统会保护这块地址（通常是 0 地址附近），不允许程序读写，否则会触发内存访问错误（如段错误 Segmentation Fault）。
//	int* p3 = NULL;
//	if (p3 != NULL)
//	{
//		*p3 = 100;//ok
//	}
//	/*
//	    如何避免野指针:
//	    1.指针初始化
//	    2.小心指针越界
//		3.指针指向空间释放即时置NULL
//		4.避免返回局部变量的地址 销毁
//		5.指针使用之前检查有效性
//	*/
//	return 0;
//}
//指针运算
//指针+-整数
//指针-指针
//指针的关键运算
//                          指针+-整数
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//把数组的元素初始化
//	//法一:数组下标的写法
//	/*for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}*/
//	//法二:指针的写法
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p = 1;
//	//	p++;
//	//}//F10自己监视看一下会更明白和清楚
//	//法三:
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + 1) = 1;
//	}
//	//调试自己监视一下
//	//*p指的是解引用的值，p里面存放的是地址，(*p)+1是解引用之后的值+1，*(p+1)是地址+1通过解引用找到这个地址对应的值。
//	return 0;
//}
//							指针-指针
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针(的绝对值 但是不用abs) 得到的是指针与指针之间的元素的个数
//	//不是所有指针都能相减 要指向同一块的空间的指针才能相减
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[0] - &arr[5]);//err
//	return 0;
//}
//法一:指针
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//法二:递归
//法三:指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int  main()
//{
//	int len = my_strlen("abcdef");//这里传参的时候传的是a字符的地址
//	printf("%d\n", len);
//	return 0;
//}
//注意:指针+指针  没有意义

//指针的关系运算
//标准允许指针向后越界的那一个内存空间与数组的比较 但不允许与数组前面的那块内存空间比较
//可以往后越界访问比较 但是不能越前访问比较 因为有的编译器不支持
//指针与数组
//int main()
//{
//	int arr[10] = { 0 };
//	//arr是首元素的地址(sizeof(数组名)和&(数组名)这两种情况除外)
//	//&arr[0]
//	int* p = arr;
//	//通过指针访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ----- %p\n", &arr[i],p+i);
//		//这两个是一样的
//		//arr[i] -> *(arr+i)
//		//C语言的编译器中，对数组的操作是自动转化为指针来操作的
//	}
//	return 0;
//}
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] --> *(p+i)
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr,sz);
//	return 0;
//}
//							  二级指针
//二级指针变量是用来存放一级指针变量的地址的
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量
//	//int**ppa 中的后面的那个*是说明ppa是指针 
//	//int**ppa 中的前面的int*是说明ppa指向的对象是int*类型
//
//	*pa = 20;
//	printf("%d\n", a);
//
//	//*ppa = 30;
//	//printf("%d\n", a);
//
//	**ppa = 40;
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//
//	return 0;
//}
//	
//				指针数组
//存放指针的数组就是指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	printf("%d ", *pa);
//	printf("%d ", *pb);
//	printf("%d ", *pc);
//
//	printf("\n");
//
//	printf("%p\n", pa);
//	printf("%p\n", &a);
//
//	//parr就是指针数组
//	int* parr[10] = { &a,&b,&c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}
//			二级指针模拟二维数组
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6, };
//	//1 2 3 4
//	//2 3 4 5
//	//3 4 5 6
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//这里不解引用的原因是[]就已经是解引用了
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//				结构体
// 
//结构体类型的声明
//结构体初始化
//结构体成员访问
//结构体传参
//
//结构:结构是一些值的集合,这些值称为成员变量。结构的每个成员可以是不同类型的变量
//数组是一种相同类型元素的集合 结构体是变量组合 函数是函数 两者有本质的区别
//内置类型:int long float char......
//复杂对象的描述就会使用到: 结构体
//struct tag  //struct是关键字 tag是名称
//{
//	member - list;
//}variable-list
//下面这个就是声明的结构体类型
// 第一种写法
//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tele[12];//11位号码最后要放个\0
//	char sex[5];//保密\0
//	int high;
//};
//第二种写法
/*struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p1,p2;*///p1和p2是利用struct Peo结构类型创建的两个变量
//p1和p2是两个全局的结构体变量 所以不建议这种写法
//建议下面这种写法
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//int main()
//{
//	struct Peo p1 = {0};//结构体变量的创建
//	return 0;
//}
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;//先
//};
//struct st
//{
//	struct Peo p;//结构体的成员也可以是其他结构体
//	int num;
//	float f;//后
//};
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p3, p4;//全局
//struct Peo p5, p6;//全局
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//void print2(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
//}
//void print1(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员名
//}
//int main()
//{
//	struct Peo p1 = { "张三","16650251879","男",181 }, p2 = { 0 };//局部  对p1初始化
//	struct St s = { {"李四","16658453382","女",166},100,3.14 };
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p1);//空间和时间浪费比较大
//	print2(&p1);
//
//	return 0;
//}
//						结构体传参(上面就有传参)
//函数传参的时候，参数是需要压栈的
//传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//结论:结构体传参时最好传结构体的地址
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 a=6
//	b = ++c, c++, ++a, a++;//b=7 c=8 a=8
//	b = b+a++ + c;//b=15+8=23 a=9 
//	printf("a=%d b=%d c=%d\n", a, b, c);//9 23 8
//	return 0;
//}
//							非常牛逼厉害的计算正整数的二进制中1的个数
//int count_num_of_1(int n)//11     1011
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//11%2==1
//		{
//			count++;
//		}
//		n = n / 2;//n=5 101
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n=count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//                       法二 二版本 也可计算负数
//int count_num_of_1(unsigned int n)//有点不理解 只是改成unsigned int就可以了
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//								法三 但还是不够高效
//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> 1) & 1) == 1)
//		{
//			//0000....01011
//			//0000....00001
//			//0000....00001
//			count++;
//		}
//	}
//	return count;
//}//对比2480行代码
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
// 这么nb牛逼的代码是谁写出来的
//n=15
//n=n&(n-1)
//1111 n
//1110 n-1
//1110 n&n-1
//1101 
//1100 新的n&n-1
//1011
//1000 新新n&n-1
//0111
//0000 新新新n&n-1
//int count_num_of_1(int n)//当前知道的最牛逼高效的代码
//{
//	int count = 0;
//	while (0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}
//那些刷题平台的题分为IO型和接口型
//判断一个数是不是2的n次方
//2^1 10
//2^2 100
//2^3 1000
//if (n & (n - 1) == 0)
//{
//
//}
//求两个数二进制中不同位的个数
//法一
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m>>i)&1)!=((n>>i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
////法二 比骄容易想到
////int count_diff_bit(int m, int n)
////{
////	int count = 0;
////	int ret = m ^ n;
////	//同0异1  可以看看3876行那些代码
////	while (ret)
////	{
////		ret = ret & (ret - 1);
////	}
////}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//全局变量和静态变量都是放在静态区的
//全局变量和静态变量不初始化的时候,会被默认初始化为0
//局部变量是放在栈区的
//局部变量,不初始化,默认值是随机值
//int i;
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符计算返回的结果是size_t类型的,是无符号整形的
//	if (i > sizeof(i))//-1 > (无符号)4
//	//隐式类型转换 ​有符号的 int（-1）会被转换为无符号的 size_t 类型，然后再与右边的 sizeof(i)（也是无符号）进行比较！
//	//-1会被转化为非常大的正整数
//	// size_t 是 32 位的无符号整数（4 字节）：
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111 
//	//当把它当作 ​无符号整数​ 解释时，它的值是：2^32−1 = 4294967295
//	//所以 - 1 转为 unsigned int 或 size_t 后，它实际上是一个 ​非常大的正数(约42亿)
//	{
//		printf(">\n");//>
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//法一:两层for
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//	*---*
//	//	-*-*-
//	//	--*--
//	//	-*-*-
//	//	*---* 
//	for (int i = 0; i < n; i++)
//	{  // 控制行数
//		for (int j = 0; j < n; j++)
//		{  // 控制每行的字符
//			// 判断当前位置是否需要打印*（对称位置）
//			if (j == i || j == n - 1 - i)
//			{
//				printf("*");
//			}
//			else 
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");  // 每行结束换行
//	}
//	return 0;
//}
// 法一的另一种写法
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	//作用是持续读取用户输入的整数，直到输入无效或遇到结束符。
//	//这个循环会反复等待用户输入整数，每次输入一个整数后就执行循环体内的逻辑（比如用这个整数做计算、处理等）。
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if ((i + j) == n - 1)//这里需要一定的敏锐和观察能力
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//法二:二维数组
//int main()
//{
//	int i = 0, j = 0;
//	int n;
//	scanf("%d", &n);
//	char arr[999][999] = { ' ' };//只有数组的第一个元素被初始化了
//	//	*---*
//	//	-*-*-
//	//	--*--
//	//	-*-*-
//	//	*---* 
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = '*';
//			}
//			else if ((i + j) == n - 1)
//			{
//				arr[i][j] = '*';
//			}
//			else
//			{
//				arr[i][j] = ' ';
//			}//为啥这个得写
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//计算某年某月有多少天
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//  //&& || ! 的结果为真为1为假则0
//	//条件成立时返回1不成立返回0 与下面这几行代码一样
//	//if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	//{
//	//	return 1;
//	//}
//	//else
//	//	return 0;
//}
//int main()
//{
//	int y, m;
//	int day = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((is_leap_year(y) == 1) && (m == 2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}
//								调试
//1.发现程序错误的所在							1.程序员自己
//2.以隔离,消除等方式对错误进行定位				2.测试人员
//3.确定错误产生的原因							3.用户
//4.提出纠正错误的解决办法
//5.对程序错误予以改正,重新测试
//Debug
//Debug通常为调试版本,它包含调试信息,并且不做任何优化,便于程序员调试程序
//Release
//Release称为发布版本,它往往是进行了各种优化,使程序在代码大小和运行速度上都是最优的,以便用户很好地使用
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//void test2()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test();
//	return 0;
//}
//					计算1！+2！+3！+4！+.......+n!
//int xz_nn(int i)
//{
//	int good = 1;
//	for (int j = 1; j <= i; j++)
//	{
//		good = good * j;
//	}
//	return good;
//}
//int main()
//{
//	int n;
//	//scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	while ((scanf("%d", &n)) == 1)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			sum = sum + xz_nn(i);
//		}
//		printf("%d", sum);
//		Sleep(500);
//		system("cls");
//		sum = 0;
//	}
//	return 0;
//}
//法二
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	while (scanf("%d", &n)==1)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			for (i = 1; i <= j; i++)
//			{
//				ret = ret * i;
//			}
//			sum = sum + ret;
//			ret = 1;//
//		}
//		printf("%d\n", sum);
//		Sleep(800);
//		system("cls");
//		sum = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//1.栈区内存的使用习惯是先使用高地址处的空间
//再使用低地址处的空间
//2.数组随着下标的增长
//地址是由低到高变化的
//3.如果i和arr之间有适当的空间
//利用数组的越界访问就可能会覆盖到i
//就可能导致死循环的出现

//									优秀的代码
//1.代码正常运行
//2.bug很少
//3.效率高 用时少
//4.可读性高 有清晰的注释 好的变量名称
//5.可维护性高 文档齐全
// 
//									一些coding技巧
//1.使用assert
//2.尽量使用const
//3.养成良好的编码习惯
//4.添加必要的注释
//5.避免编码的陷阱
// 法一
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
// 法二
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//法三
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//到\0时为假停止 其他任意字符都不为0都为真 所以都会进入循环
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	//strcpy再拷贝字符串的时候,会把原字符串中的\0也拷贝过去
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//法四 更保险的做法
//使用assert要引入#include <assert.h>这个头文件
//简要介绍一下assert的用法
//int main() 
// {
//	int a = 5;
//	// 假设 a 应该大于 0，用 assert 验证
//	assert(a > 0);  // 条件为真，程序继续
//	printf("a = %d\n", a);
//
//	a = -1;
//	assert(a > 0);  // 条件为假，触发错误
//	printf("这行不会执行\n");
//	return 0;
//}
//void my_strcpy(char* dest, const char* src)
//{
//	//assert断言
//	//是一个用于调试的宏，主要作用是在程序运行时检查一个条件是否为真。
//	//它的核心目的是帮助开发者发现程序中的逻辑错误，确保某些关键假设在调试阶段得到验证。
//	//assert(src == NULL);//传入空指针 p 也会触发断言（这是 assert 的正常调试作用，用于发现非法输入）
//	//正确写法如下
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	char* p = NULL;
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//为什么返回char*呢?
//是为了实现"链式访问"
//strcpy函数返回的目标空间的起始地址
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;//
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	char* p = NULL;
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//关键字 const
//用于声明常量或只读变量，其核心作用是保护数据不被意外修改，提高代码的安全性、可读性和可维护性。
//它可以修饰变量、指针、函数参数、函数返回值等
//int main()
//{
//	const int num = 10;
//	//const
//	//num = 20;
//	//int* p = &num;
//	//const int和int const是一样
//	//const int* p = &num;
//	//1.const放在*号左边
//	//意思是:p指向的对象不能通过p来修改,但是p对象本身的值是可以被修改的
//	//*p = 20;//err改不了	
//	//2.const放在*号右边
//	//意思是:指向的对象是可以通过p来改变的,但是不能修改p变量本身的值
//	int* const p = &num;
//	*p = 0;
//	int n = 100;
//	p = &n;
//	//int n = 100;
//	//p = &n;
//	//int** p2 = (int**)&*p;
//	//**p2 = 20;
//	printf("%d\n", num);
//	return 0;
//}
//int my_strlen(const char* str)//const修饰更加安全 防止在后面被修改
//{
//	int count = 0;
//	assert(str);//有些版本Release可能会把assert优化掉
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//	return 0;
//}
//编程常见的错误
//1.编译形错误(语法错误)
//2.链接型错误(出现在链接期间)   test.c ------> 编译 --------> 链接 -------->可执行程序
//3.运行时错误

//ctrl f 快速搜索
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);//这种没有定义Add就调来用的 就是典型的链接错误
//	printf("%d\n", c);
//	return 0;
//}
int main()
{

	return 0;
}


//                                     四级:11.22口语  12.13早上笔试
//									   蓝桥杯报名  ACM三轮选拔11.13 14.30-17.00    
//									  easyX 控制台 swing 文件流 数据库 shutdown命令 句柄 wmare workstation
//									  Git  PTA上50题 洛谷200题 LeetCode 汉诺塔(小游戏)
//									  英语四级 班主任的科研组 《函数栈帧的创建与销毁》
//									  C语言之后  数据结构 算法 《剑指offer》
//大一上： 1.C语言 中国大学MOOC 翁恺
//	    2.《C primer plus》
//	    3.大概学到指针和结构体
//	    4.菜鸟教程（https://www.runoob.com/）
//	    5.B站（C语言小项目）