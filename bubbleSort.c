//�Ƶ{�� 
void bubbleSort(int* array, int sizel) //�禡�ŧi
{
	int k,j,temp; //�ܼƫŧi
	for(j=sizel;j>1;j--){//�Ĥ@�h�j��
		for(k=0;k<j-1;k++){//�ĤG�h�j��
			if (array[k+1] < array[k]) {
				temp=array[k+1]; //�洫�⤸��
				array[k+1]=array[k];
				array[k]=temp;
				
			}
		}
	} 	
}
