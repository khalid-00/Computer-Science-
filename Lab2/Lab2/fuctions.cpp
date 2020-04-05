#include <Lab2.h>
#include <iostream>
#include <math.h>
#include <ctime>
#include <time.h>
//using namespace

//=========================================================================
//Question 1
//=========================================================================
//swap function

void swap(int x, int y){

    int temp=0;
    temp=x;
    x=y;
    y=temp;

}//end of func

//=======================================
// test sign number
bool matchSign(int a, int b) {

    return ((a / b >= 0.0f));

}//end of the function

//========================================
//even or odd
void evenorodd(int a,int b)
{
    std::cout<<std::endl;



    if ((a%2==0) && (b%2==0))
        std::cout<<"Both numbers are even"<<std::endl;
    else if ((a%2!=0) && (b%2==0))
        std::cout<<"First number is odd and Second number is even"<<std::endl;
    else if ((a%2==0) && (b%2!=0))
        std::cout<<"First number is even and Second number is odd"<<std::endl;
    else
        std::cout<<"Both numbers are odd"<<std::endl;
}//end of function
//================================================
//print first

void printfirst()
{
    std::cout<<std::endl;
    int a=0;
    std::cout<<"To print first, please select 1"<<std::endl;
    std::cin>>a;
    if (a==1)
        std::cout<<"First"<<std::endl;
    else
        std::cout<<"Correct number not selected"<<std::endl;
}//end of function
//===============================================
//print first second
void printfirstorscond()
{
    std::cout<<std::endl;
    int a=0;
    std::cout<<"To print first, please select 1 or to print second, please select 2"<<std::endl;
    std::cin>>a;

    switch(a)
    {
    case 1:
        std::cout<<"First"<<std::endl<<"First"<<std::endl<<"First"<<std::endl;
        break;

    case 2:
        std::cout<<"Second"<<std::endl<<"Second"<<std::endl;
        break;

    default:
        std::cout<<"Correct number not selected"<<std::endl;
    }

}//end of function
//=========================================================================
//Question 2
//=========================================================================

float sin_ln(float x){


    if ((x>0 && x < 10 )) {
        float result =0;
        std::cout << "f("<<x<<")"<<"="<<"sin ("<<x<<")"<<"+"<<"ln "<<"("<<x<<")"<<std::endl;
        result=sin(x)+log(x);
        std::cout <<"x = "<<result<<std::endl;

    }
else{
        std::cout<<"you are out of the range"<<std::endl;
    }
    return  x;
}


//=========================================================================
//Question 3
//=========================================================================

void s_swap(int* &a, int* &b)
{
    int* c=a;
    a=b;
    b=c;
}

//=========================================================================
//Question 4
//=========================================================================



void bubblesortArray(double* anArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (anArray[j] > anArray[j + 1])
            {
                int temp = anArray[j];
                anArray[j] = anArray[j + 1];
                anArray[j + 1] = temp;
            }
        }
    }
}

int quickSort(double* anArray, int start, int end)
{
    int swaps = 0;
    if(start < end)
    {
        int pIndex = partition(anArray, start, end, swaps);
        //after each call one number(the PIVOT) will be at its final position
        swaps += quickSort(anArray, start, pIndex-1);
        swaps += quickSort(anArray, pIndex+1, end);
    }
    return swaps;
}

int partition(double* anArray, int start, int end, int& swaps)
{
    int pivot = anArray[end];
    int pIndex = start;

    for(int i = start; i < end; i++)
    {
        if(anArray[i] <= pivot)
        {

            if(pIndex != i)
            {
                std::swap(anArray[i], anArray[pIndex]);
                swaps++;
            }
            pIndex++;
        }
    }
    if(pIndex != end)
    {
        std::swap(anArray[pIndex], anArray[end]);
        swaps++;
    }
    return pIndex;
}





//void b_sort(){

//    int temp=0;
//    int arr[10];
//    std::cout<<"Please insert 10 numbers"<<std::endl;
//    for (int i=0 ;i<=10;i++)
//    {
//       std::cin>> i;

//    }
//    //befor sorting
//    std::cout<<"\n Data before sorting :"<<std::endl;
//    for(int j=0;j<=10 ;j++)
//    {

//        std::cout<<" "<<arr[j];
//    }
//    for(int i=0;i<=10;i++)
//    {
//    for(int j=0;j<=10-i;j++)
//    {
//    if(arr[j]>arr[j+1])
//    {
//    temp=arr[j];
//    arr[j]=arr[j+1];
//    arr[j+1]=temp;

//    }//end for1
//    }//end for2
//}//end of for3

//    std::cout<<"\n Data after sorting: "<<std::endl;
//    for(int j=0;j<=10 ;j++)
//    {
//   std:: cout<<" "<<arr[j];
//    }
//}

//void q_sort(){
//}


//=========================================================================
//Question 5
//=========================================================================

void  transpose(int matrixx[][4], int rows,int cols)
{

    //this will store the transpose of the array
    int trans[rows][cols];
   //taking transpose here
   for ( int i = 0; i < rows; i++ )
   {
      for ( int j = 0; j < cols; j++ )
        {
            trans[j][i]=matrixx[i][j];
        }

   }
   //displaying the transposed matrix here
   std::cout<<"Transposed matrix"<<std::endl<<std::endl;
   for ( int i = 0; i < cols; i++ )
   {
      for ( int j = 0; j < rows; j++ )
        {
            std::cout << trans[i][j]<<'\t';
        }
        std::cout<<std::endl;
   }

}

void  mono(int matrixx[][4], int rows,int cols)
{
    int array1[rows *cols]={0};
    //this will be used as an array counter
    int num=0;
    //conversion from 2D to 1D
    for ( int i = 0; i < rows; i++ )

    {
      for ( int j = 0; j < cols; j++ )
        {
            array1[num++]=matrixx[i][j];
        }

    }
    //displaying the !D array
   std::cout<<std::endl<<"Mono dimensional array"<<std::endl<<std::endl;
   for ( int i = 0; i < rows*cols; i++ )
   {
       std::cout << array1[i]<<" ";
   }

}

void pascal()
{
    int rows,opt=1,spacing,i,j;
    std::cout<<'\n'<<'\n'<<"Enter number of rows for pascal triangle: ";
    std::cin>>rows;

    for (i=0;i<rows;i++)
    {
        for (spacing=1;spacing<=rows-i;spacing++)
        {
            std::cout<<"  ";
        }
        for (j=0; j<=i; j++)
        {
            if (j==0 || i ==0)
                opt=1;
            else
                opt=opt*(i-j+1)/j;
            std::cout<<"    "<<opt;
        }
        std::cout<<std::endl;
    }
}
