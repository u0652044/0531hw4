#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int* array, int sizel); //函式宣告
int main(void){
	int a[5] ={23,44,7,26,3}; //最初陣列值
	size_t i ; //counter//
	
	printf("最初陣列值:\n"); //顯示最初陣列的排序
	
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
	  
	bubbleSort(a,5);  //呼叫排序函數 
	
	printf("\n排序過後值:\n"); //顯示泡沫排序過後的排序
	
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
}

