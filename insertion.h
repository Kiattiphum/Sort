void insertSort(int x[], int n)
{
  int swap_count=0;
  int i, j, value;
  for(i = 1; i < n; i++){
    value = x[i];
    for (j = i - 1; j >= 0 && x[j] > value ; j--){
      x[j + 1] = x[j];
      swap_count++;
      display(x,n);
    }
    x[j + 1] = value;
    display(x,n);
    printf("==================\n");
  }
  printf("Insertionsort swap %d time\n",swap_count);
}