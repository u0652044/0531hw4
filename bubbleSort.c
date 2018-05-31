//副程式 
void bubbleSort(int* array, int sizel) //函式宣告
{
	int k,j,temp; //變數宣告
	for(j=sizel;j>1;j--){//第一層迴圈
		for(k=0;k<j-1;k++){//第二層迴圈
			if (array[k+1] < array[k]) {
				temp=array[k+1]; //交換兩元素
				array[k+1]=array[k];
				array[k]=temp;
				
			}
		}
	} 	
}
