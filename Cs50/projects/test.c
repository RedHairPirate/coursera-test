#include <stdio.h>
void merge_recursion(int a[],int l,int r);
void merge_sort(int a[],int length);
void merge_sorted_arrays(int a[],int l,int r,int m);
int main(void)
{
    int array[]={0,12,3,4,9,5,6,7,11,15};
    int length=10;
    merge_sort(array,length );
    for(int i=0;i<length;i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}
void merge_sort(int a[],int length)
{
    merge_recursion(a,0,length-1);
} 
void merge_recursion(int a[], int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        merge_recursion(a,l,m);
        merge_recursion(a,m+1,r);
        merge_sorted_arrays(a, l, m, r);
    }
}
void merge_sorted_arrays(int a[], int l,int m, int r)
{
    int right_length=r-m;
    int left_length=m-l+1;
    int temp_left[left_length];
    int temp_right[right_length];
    int i,j,k;
    for(int i=0;i<left_length;i++)
        temp_left[i]=a[l+i];
    for(int i=0;i<right_length;i++)
        temp_right[i]=a[1+m+i];
    for(i=0,j=0,k=l;k<=r;k++)
    {
        if((i<left_length) && (j>=right_length || temp_left[i]<=temp_right[j]))
        {
            a[k]=temp_left[i];
            i++;
        }
        else
        {
            a[k]=temp_right[j];
            j++;
        }
    }
}



//ALGORITHM:-
// SO FIRST WE TAKE THE ARRRAY AND LENGTH OF ARRAY FROM USER
// WE USE RECURSION FUNCTION TO DIVIDE THE ARRAY IN 
// 2 HALVES WE REPEAT THIS SAME WITH THE FIRST AND THE SECOND HALF
// WE INTRODUCE THE MIDPOINT BEFORE DIVIDING THE ARRAY AND BY
// RECURSION IT GETS DIVIDED. WE MERGE THE SORTED PARTS IN THE 
// RECURSION ITSELF SO WE HAVE GROUPS OF SORTED ELEMENTS.
// NOW WE HAVE TO MERGE THE TWO HALVES OF THE DIVIDED ARRAY WE 
// INTRODUCE TWO TEMPORARY ARRAYS TO FIT EACH HALF.
// WE FILL THESE ARRAYS ONE BY ONE AND THEN WE SORT THEM INTO THE 
// FINAL ARRAY , THE CONDITIONS ARE SELF EXPLANATORY
// i(left half counter)- once i is equal to the half part that
// implies all elements of that temp left are sorted so we move 
// to else case which puts the right half element in the 
// array.
// Note so the groups of two are merged first then in the final one  the whole half is checked.
//as you did in recursion you make sure all the two sets are sorted then in the final loop you sort the whole half