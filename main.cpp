//Made by Eng: Zeyad Elmahdy
#include <iostream>

using namespace std;


void  fillArray(int **arr,int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter row number  "<<i<<"  col number  "<<j<<endl;

            cin>>arr[i][j];
        }
    }
}

void addArray(int **arr1,int **arr2,int row,int col)

{

    int **Adding=new int*[row];
    for(int i=0; i<row; i++)
        Adding[i]=new int [col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            Adding[i][j]=arr1[i][j]+arr2[i][j];
    }


    for(int a=0; a<row; a++)
    {
        for(int j=0; j<col; j++)
        {


            cout<<Adding[a][j];
        }
        cout<<endl;
    }



}

void subtractArray(int **arr1,int **arr2,int row,int col)

{

    int **subtract=new int*[row];
    for(int i=0; i<row; i++)
        subtract[i]=new int [col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            subtract[i][j]=arr1[i][j]-arr2[i][j];
    }


    for(int a=0; a<row; a++)
    {
        for(int j=0; j<col; j++)
        {


            cout<<subtract[a][j];
        }
        cout<<endl;
    }



}

void multiplyArray(int **arr1,int **arr2,int row1,int col1,int row2,int col2)
{
    int **product=new int*[row1];
        for(int i=0; i<row2; i++)
           product[i]=new int [col2];

        for(int i=0; i<row1; ++i)
      for(int j=0; j<col2; ++j) {
         product[i][j] = 0;
      }
      for(int i=0; i<row1; ++i)
      for( int j=0; j<col2; ++j)
      for(int k=0; k<col1; ++k) {
         product[i][j]+=arr1[i][k]*arr2[k][j];
      }
      cout<<"Product of the two matrices is:"<<endl;
      for(int i = 0; i < row1; ++i)
	{
		for( int j = 0; j < col2; ++j)
		{
			cout << product[i][j] << " ";
			if(j == col2 - 1)
				cout << endl << endl;
		}
   }
}

void transposeArray(int **arr,int row ,int col)
{
                   cout << "Entered Matrix : \n ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << "\n ";
    }
    cout << "Transpose of Matrix : \n ";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
            cout << arr[j][i] << " ";
        cout << "\n ";
    }
}





int main()
{


   cout<<"     Hello if you want to know about Matrices ..Enter number (1) \n \n      To Start Enter Any number "<<endl;

   int info;
   cin>>info;

   if(info==1)
   {
       cout<<"# Two matrices can be added/subtracted only if the number of rows and columns of both the matrices are same"<<endl;
       cout<<"#  Multiplication of a matrix with another matrix:Two matrix can be multiplied if the number of column of \n the first matrix is equal to the number of rows of the second matrix"<<endl;

   }









    int r1,c1;
    cout<<endl;
    cout<<"Enter Array Dimensions"<<endl;
    cin>>r1>>c1;


    int **firstArray=new int*[r1];
    for(int i=0; i<r1; i++)
        firstArray[i]=new int [c1];

    fillArray(firstArray,r1,c1);


    cout<<"Choose Operation Enter"<<endl;

    int operation;
    cout<<" (1) for Add \n (2) for Subtract  \n (3) for multiply \n (4) for Transpose"<<endl;
    cin>>operation;

    switch(operation)
    {
    case 1:
    {


        int r2,c2;
        cout<<"Enter  Second Array Dimensions"<<endl;
        cin>>r2>>c2;

        if(r1!=r2&&c1!=c2)
        {
            cout<<"Error"<<endl;
            break;

        }

        int **secondArray=new int*[r2];
        for(int i=0; i<r2; i++)
            secondArray[i]=new int [c2];
        cout<<r2<<"   "<<c2<<endl;

        fillArray(secondArray,r2,c2);
        cout<<"THE RESULT IS"<<endl;


        addArray(firstArray,secondArray,r2,c2);

        break;


    }



    case 2:
    {



        int r2,c2;

        cout<<"Enter  Second Array Dimensions"<<endl;
        cin>>r2>>c2;

        if(r1!=r2&&c1!=c2)
        {
            cout<<"Error"<<endl;
            break;

        }

        int **secondArray=new int*[r2];
        for(int i=0; i<r2; i++)
            secondArray[i]=new int [c2];
        cout<<r2<<"   "<<c2<<endl;


        fillArray(secondArray,r2,c2);
        cout<<"THE RESULT IS"<<endl;


        subtractArray(firstArray,secondArray,r2,c2);



        break;
    }

    case 3:

        int op;
        cout<<" Multiply in (1) number \n (2) Another matrix "<<endl;
        cin>>op;

        switch(op)
        {
        case 1:
        {


            int num;

            cout<<"Enter a Number "<<endl;
            cin>>num;


            int **multiArray=new int*[r1];
            for(int i=0; i<r1; i++)
                multiArray[i]=new int [c1];



            for(int i=0; i<r1; i++)
                for(int j=0; j<c1; j++)
                    multiArray[i][j]=num*firstArray[i][j];



            for(int i=0; i<r1; i++)
            {
                for(int j=0; j<c1; j++)
                {
                    cout<<multiArray[i][j];
                }
                cout<<endl;
            }
            break;
        }


        case 2:
            {

                int r2,c2;
                 cout<<"Enter  Second Array Dimensions"<<endl;
                 cin>>r2>>c2;

                 if(c1!=r2)
                 {
                     cout<<"Error"<<endl;
                     break;
                 }

                 int **secondArray=new int*[r2];
        for(int i=0; i<r2; i++)
            secondArray[i]=new int [c2];
        cout<<r2<<"   "<<c2<<endl;

        fillArray(secondArray,r2,c2);

        multiplyArray(firstArray,secondArray,r1,c1,r2,c2);





break;


            }






        }

        case 4:
            {
                transposeArray(firstArray,r1,c1);
                break;

            }


            default   : cout<<"Try Again";

    }





    return 0;
}





