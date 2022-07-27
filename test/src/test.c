#include<stdio.h>
#include<stdlib.h>

#define LENGTH 100
#define MAX 5

struct dayEvents   //һ���¼��Ľṹ��
{
	int      count;   //�¼�������
	char   desc[MAX][LENGTH];  // �¼�������
};

const char* MONTH[12] = { "January","February","March","April","May", "June", "July", "August", "Septemper", "October", "November", "December" };


void inquireDayEvents(int monthIndex, int day,struct dayEvents* events)
{
	FILE* fp;//�����ļ�ָ��
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
	int startLine = 5 * (day - 1) ;//�������ʼ��
	int endLine = 5 * day;//����Ľ�����
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
	endLine = countLine > endLine ? countLine : endLine;//����Ľ�����
	rewind(fp);
	char buf[128];  /*������*/
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
	fclose(fp);//�ر��ļ�
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
