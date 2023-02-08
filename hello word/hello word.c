//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//#include<time.h>
//#pragma once
////void myflip_cp() {
////	FILE * rfp = fopen("E:\\c艹\\知识点讲解.txt", "r");
////	FILE * wfp = fopen("E:\\c艹\\知识点讲解副本.txt", "w");
////	char buf[128] = { 0 };
////	int ret = 0;
////	while (1)
////	{
////		ret = fread(buf, 1, sizeof(buf), rfp);
////		if (ret==0)
////		{
////			break;
////		}
////		fwrite(buf, 1, ret,wfp);
////		
////	}
////	fclose(wfp);
////	fclose(rfp);
////}
//int write_file() {
//	FILE* fp = fopen("E:\\c艹\\知识点讲解副本.txt", "w");
//	if (fp==NULL)
//	{
//		printf("fopen error");
//		return -1;
//	}
//	fputs("10/2=\n", fp);
//	fputs("1-5=\n", fp);
//	fputs("55+4=\n", fp);
//	fputs("9*3=\n", fp);
//	fclose(fp);
//}
//void read_file() {
//	char buf[4096] = { 0 };
//	char result[4096] = {0};
//	int a, b,ret;
//	char ch;
//	char sum_res[4096] = {0};
//	FILE *fp= fopen("E:\\c艹\\知识点讲解副本.txt", "r");
//	if (fp==NULL)
//	{
//		perror("fopen error");
//		return;
//
//	}
//	while (1)
//	{
//		
//		fgets(buf, 4096, fp);
//		if (feof(fp))
//		{
//			break;
//		}
//		sscanf(buf, "%d%c%d=\n", &a, &ch, &b);
//		switch (ch)
//		{
//		case'+':
//			ret = a + b;
//			break;
//		case'-':
//			ret = a - b;
//			break;
//		case'*':
//			ret = a * b;
//			break;
//		case'/':
//			ret = a / b;
//			break;
//		default:
//			printf("read error");
//			break;
//		}
//		sprintf(result,"%d%c%d=%d\n",a,ch,b,ret);
//		//printf("%s", result);
//		strcat(sum_res, result);
//	}
//	//printf("%s",sum_res);
//	fclose(fp);
//	fp = fopen("E:\\c艹\\知识点讲解副本.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen error");
//		return;
//
//	}
//	fputs(sum_res, fp);
//	fclose(fp);
//}
//
//int main(void)
//{
//	write_file();
//	read_file();
//	return 0; 
//}