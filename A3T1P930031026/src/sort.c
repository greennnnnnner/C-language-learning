void sort(int NumArray[], int n){ //function to sort array in ascending order
	int temp;//for swap
	int min;//index of minimal value
	for (int last=n-1; last>=0; last--){
		min = 0;
		for (int i=1; i<=last; i++){
		 	if (NumArray[i] < NumArray[min]){
		 		min = i;//find the smallest element
		 	}
		 			}
		temp = NumArray[min];   // swap
		NumArray[min] = NumArray[last];
		NumArray[last] = temp;//move the smallest to the last
		}
}
