/*���������1.�����Ա�
			2.��ʼ�� ���� β�� ���� 
			3.��void*���͡�
*/
#include <stdio.h>
#include "link.h"

void main(void) {
	LinkTable* table = NULL;
	char a[10] = "yyyyyy";
	char b[10] = "eeeeeee";
	void* var;

	initLink(&table);
	printf("��ʼ�����\n");
	addNode(&table, a);
	printf("һ���ڵ�׷�ӳɹ�\n");

	addNode(&table, b);
	printf("�����ڵ�׷�ӳɹ�\n");
	printf("�ڵ���ʾ����\n");
	show(table);

	printf("ɾ������\n");
	var = removeNode(b, &table);

	//printf("���ҹ���\n");
	//var = findByValue(b, table);
	//var = findByIndex(2, table);
	printf("%s\n", var);
	printf("ɾ��֮��\n");
	show(table);
	printf("\n\n");

	while (table != NULL)
	{
		destoryLink(&table);
		printf("����ݻ����\n");
	}
	
	system("pause");
}