#include<iostream>
#include<ctime>
#include<stdlib.h>
#include <string.h>
#define N 9
using namespace std;
int d[N][N];
int derection[3] = { 0, 1, -1 };
int calculate ( int x, int y )
{
	int counter = 0;
	for ( int i = 0; i < 3; i++ )
	for ( int j = 0; j < 3; j++ )
	if ( d[ x+derection[i]][ y+derection[j] ] == 9 )
	counter++;                 // calculate number of bombs around (x,y)
	return counter;
}

void start (int x, int y) //if press a blank, extend the range
{
	if (calculate(x,y)==0)
	{
		d[x][y]=0;
		for (int i=x-1;i<=x+1;i++)
		{
			for(int j=y-1;j<=y+1;j++)
			if ( i<N&&i>=1&&j>=1&&j<N&&!((i==x&&j==y)&&d[i][j]==-1)) 
                      start(i,j);
		}
	}
	else 
	d[x][y]=calculate(x,y);
	
}

void print ()
{
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            if (d[i][j]==-1||d[i][j]==9)
            cout << "x ";
            else
            cout << d[i][j]<<" ";
            
        }
        cout << endl;
        
    }
    
}

bool check ()
{
    int counter = 0;
    for (int i=1;i<10;i++)
    for (int j=1;j<10;j++)
    if (d[i][j]!=-1 )
    counter++;
    if (counter==10)
    return true;
    else
    return false;
}
int main()
{   
    int x,y;
    int i,j,n=0;

	srand(time(0));
	memset(d,-1,sizeof(d));
	    while(n<10)
	    {
	        int counter=0;
	        i=rand()%10;
	        j=rand()%10;  
	        if (d[i][j]!=9)
	        {
	            d[i][j]=9;
	            n++;
	            
	        }
	        
	    }
	    
	    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        cout<<"x ";
        cout<<endl;
    }
    cout<<"Please enter a coordinate: ";
	    while (cin>>x>>y)
	    {
	        if (d[x][y]==9)
	        {
	            cout << "GAME OVER" << endl; 
	            for (int i=0;i<N;i++)
	            {
	                for (int j=0;j<N;j++)
	                {
	                    if (d[i][j]==9)
	                    cout << "* ";
	                    else
	                    cout << "x ";
	                    
	                }
	                cout << endl;
	                
	            }
	            break;
	            
	        }
	        start(x,y);
	        print();
	        if (check())
	        {
	            cout << "YOU WIN" << endl;
	            break;
	            
	        }
	        //cout << "\n\n";
	    }
	    return 0;
}