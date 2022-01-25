// C++ Implementation for drawing line
#include <graphics.h>
#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dist=6;
using namespace std;
// driver code
void bubblesort(int a[],int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				setcolor(YELLOW);
//				setfillstyle(1,YELLOW);
//				floodfill(5,100+2+j*8,YELLOW);
			    rectangle(0,100+j*8,10*a[j],100+dist+j*8);
			    setcolor(YELLOW);
			    rectangle(0,100+(j+1)*8,10*a[j+1],100+dist+(j+1)*8);
//			    setfillstyle(1,YELLOW);
//				floodfill(5,100+2+(j+1)*8,YELLOW);
			    delay(100);
				setcolor(BLACK);
			    rectangle(0,100+j*8,10*a[j],100+dist+j*8); 
			    setcolor(WHITE);
			    rectangle(0,100+j*8,10*a[j+1],100+dist+j*8);
			    
			    
			    //delay(100);
				setcolor(BLACK);
			    rectangle(0,100+(j+1)*8,10*a[j+1],100+dist+(j+1)*8);
			    setcolor(WHITE);
			    rectangle(0,100+(j+1)*8,10*a[j],100+dist+(j+1)*8);
			    delay(56);
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}	
}

void selectionsort(int a[],int n)
{
	int temp,min_index;
	for(int i=0;i<n-1;i++)
	{
		min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min_index])
			{
				min_index=j;
			}
		}
		setcolor(YELLOW);
	    rectangle(0,100+i*8,10*a[i],100+dist+i*8);
	    setcolor(YELLOW);
	    rectangle(0,100+min_index*8,10*a[min_index],100+dist+min_index*8);
	    delay(256);
		setcolor(BLACK);
	    rectangle(0,100+i*8,10*a[i],100+dist+i*8); 
	    setcolor(WHITE);
	    rectangle(0,100+i*8,10*a[min_index],100+dist+i*8);
	    
	    
//	    setcolor(GREEN);
//	    rectangle(0,100+min_index*8,10*a[min_index],100+dist+min_index*8);
	    //delay(100);
		setcolor(BLACK);
	    rectangle(0,100+min_index*8,10*a[min_index],100+dist+min_index*8);
	    setcolor(WHITE);
	    rectangle(0,100+min_index*8,10*a[i],100+dist+min_index*8);
	    delay(156);
		temp=a[i];
		a[i]=a[min_index];
		a[min_index]=temp;
	}
}

void insertionsort(int a[],int n)
{
	int key,temp;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key)
        {
        	
        	setcolor(YELLOW);
		    rectangle(0,100+j*8,10*a[j],100+dist+j*8);
		    setcolor(YELLOW);
		    rectangle(0,100+(j+1)*8,10*a[j+1],100+dist+(j+1)*8);
		    delay(56);
			setcolor(BLACK);
		    rectangle(0,100+j*8,10*a[j],100+dist+j*8); 
		    setcolor(WHITE);
		    rectangle(0,100+j*8,10*a[j+1],100+dist+j*8);
		    
		    
		    
		    //delay(100);
			setcolor(BLACK);
		    rectangle(0,100+(j+1)*8,10*a[j+1],100+dist+(j+1)*8);
		    setcolor(WHITE);
		    rectangle(0,100+(j+1)*8,10*a[j],100+dist+(j+1)*8);
		    delay(56);
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
            j=j-1;
        }
	}
}

int partition(int a[],int low,int high) 
{ 
    int pivot=a[high]; // pivot 
    int i=(low-1); // Index of smaller element and indicates the right position of pivot found so far
    for (int j=low;j<=high-1; j++) 
    { 
        int temp;  
        // If current element is smaller than the pivot 
        if (a[j]<pivot) 
        { 
            i++; // increment index of smaller element 
            setcolor(YELLOW);
		    rectangle(0,100+j*8,10*a[j],100+dist+j*8);
		    setcolor(YELLOW);
		    rectangle(0,100+i*8,10*a[i],100+dist+i*8);
		    delay(56);
			setcolor(BLACK);
		    rectangle(0,100+j*8,10*a[j],100+dist+j*8); 
		    setcolor(WHITE);
		    rectangle(0,100+j*8,10*a[i],100+dist+j*8);
		    
		    //delay(100);
			setcolor(BLACK);
		    rectangle(0,100+i*8,10*a[i],100+dist+i*8);
		    setcolor(WHITE);
		    rectangle(0,100+i*8,10*a[j],100+dist+i*8);
		    delay(56);
		    temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			
        } 
    } 
    setcolor(YELLOW);
    rectangle(0,100+high*8,10*a[high],100+dist+high*8);
    setcolor(YELLOW);
    rectangle(0,100+(i+1)*8,10*a[i+1],100+dist+(i+1)*8);
    delay(56);
	setcolor(BLACK);
    rectangle(0,100+high*8,10*a[high],100+dist+high*8); 
    setcolor(WHITE);
    rectangle(0,100+high*8,10*a[i+1],100+dist+high*8);
    
    
    
    //delay(100);
	setcolor(BLACK);
    rectangle(0,100+(i+1)*8,10*a[i+1],100+dist+(i+1)*8);
    setcolor(WHITE);
    rectangle(0,100+(i+1)*8,10*a[high],100+dist+(i+1)*8);
    delay(56);
    int temp;
	temp=a[high];
	a[high]=a[i+1];
	a[i+1]=temp;
    //swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}
void quicksort(int a[], int low,int high) 
{ 
    if(low<high) 
    { 
        /* pi is partitioning index, arr[p] is now 
        at right place */
        int pi=partition(a,low,high); 
        // Separately sort elements before 
        // partition and after partition 
        quicksort(a,low,pi-1); 
        quicksort(a,pi+1,high); 
    } 
}

int main()
{
	//int gd = DETECT, gm;
	int lower = 1, upper,count;
	cout<<"Enter number of line of different size: ";
	cin>>count;
	upper=count;
	
	cout<<"    Sorting Algorithm    "<<endl;
	cout<<"1. Bubble sort"<<endl;
	cout<<"2. Selection sort"<<endl;
	cout<<"3. Insertion sort"<<endl;
	cout<<"4. Quick sort"<<endl;
	//cout<<"5. Merge sort"<<endl;
	cout<<"Type any number from 1 to 5 to see particular sorting visualisation: "<<endl;
	int selectsort;
	cin>>selectsort;
	
	srand(unsigned(time(0)));
	int arr[count];
	// taking an random value in array
    for (int i = 0; i < count; i++) {
//        int num = (rand() %(upper - lower + 1)) + lower;
//        arr[i]=num;
        arr[i]=(i+1);
    }
    random_shuffle(arr, arr+count);//using in-built random function
    
    //making rectangle according to the array element
    // number of rectangle is equal to count 
	//initgraph(&gd, &gm, "");
	initwindow(1560,1560);
//	srand(time(0));
	for(int i=0;i<count;i++)
	{
		rectangle(0,100+i*8,10*arr[i],100+dist+i*8);//rectangle(left,top,right,bottom)
	}
	
	
	delay(300);
	if(selectsort==1)
	{
		bubblesort(arr,count);
	}
	if(selectsort==2)
	{
		selectionsort(arr,count);
	}
	if(selectsort==3)
	{
		insertionsort(arr,count);
	}
	if(selectsort==4)
	{
		quicksort(arr,0,count-1);
	}
	// closegraph function closes the graphics
	// mode and deallocates all memory allocated
	// by graphics system .
	settextstyle(6,4,1);
	outtextxy(560,156+count*8,"*------ FINISH ------*");
	getch();
	closegraph();
}

