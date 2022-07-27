#include<stdio.h>
#include<stdlib.h>

#define LENGTH 100
#define MAX 5

struct dayEvents   //一天事件的结构体
{
	int      count;   //事件的数量
	char   desc[MAX][LENGTH];  // 事件的内容
};

const char* MONTH[12] = { "January","February","March","April","May", "June", "July", "August", "Septemper", "October", "November", "December" };


void inquireDayEvents(int monthIndex, int day,struct dayEvents* events)
{
	FILE* fp;//定义文件指针
	int i = 0;
	events->count = 0;
	char txtFile[32] = {"\0"};
	strcpy(txtFile,MONTH[monthIndex - 1]);
	strcat(txtFile, ".txt");
	if ((fp = fopen(txtFile, "r")) == NULL)
	{
		printf("Open %s.txt Failed\n", txtFile);
		events = NULL;
		return;
	}
	int startLine = 5 * (day - 1) ;//当天的起始行
	int endLine = 5 * day;//当天的结束行
	char flag;
	int countLine = 0;
	while (!feof(fp)) {
		flag = fgetc(fp);
		if (flag == '\n') countLine++;
	}
	if (countLine < startLine)
	{
		goto END;
	}
	endLine = countLine > endLine ? countLine : endLine;//当天的结束行
	rewind(fp);
	char buf[128];  /*缓冲区*/
	while (fgets(buf, endLine, fp) != NULL)
	{
		if (i >= startLine)
		{
			int len = strlen(buf);
			if (len > 4)
			{
				buf[len - 1] = '\0';
				strcpy(events->desc[events->count], buf + 2);
				events->count++;
			}
		}
		i++;
	}
END:
	fclose(fp);//关闭文件
}

void main()
{
	int month = 8;
	int day = 1;
	int i = 0;
	struct dayEvents events;
	inquireDayEvents(month, day, &events);
	for (i = 0; i < events.count; i++)
	{
		printf("%d\t%s\n",i+1, events.desc[i]);
	}
	system("pause");
}
