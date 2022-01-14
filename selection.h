void selection(int x[],int n){
  int swap_count=0;
  int i, j, mi;
  for(i=0;i<n-1;i++){
    mi = i;
    for (j = i+1; j < n; j++){
      if(x[j] < x[mi])  mi = j; 
    }
    swap(&x[i],&x[mi]);
    swap_count++;
    display(x,n);
	}
  printf("Selectionsort swap %d time\n",swap_count);
}