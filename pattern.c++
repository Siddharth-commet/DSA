// #include<iostream>
// using namespace std;
//  int main(){
//     int size;
//     cin>>size;
//     for (int i = 0; i <= size; i++)
//     {
//         for (int j = 1; j<=size-i; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
        
//     }
    



//  }


// #include<iostream>
// using namespace std;
// int main (){
//     int size;
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k <(2*i)+1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
    


//     return 0;
// }


// #include<iostream>

// using namespace std;

// int main(){
//     int size;
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         for (int k = 0; k < i; k++)
//         {
//             cout<<" ";
//         }
//         for (int j = 0; j < 2*(size-i)-1; j++)
//         {
//             cout<<"*";
//         }
        
//         cout<<endl;
        
//     }
    
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int diamond(int size){

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size-i-1; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k < (2*i) + 1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for (int i = 0; i < size ; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k < 2*(size-i)-1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
    
       
    

//     return 0;
// }

// int main(){
//     int size;
//     cin>>size;
//     diamond(size);
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int sideTriangle(int size){
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j <= i ; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;   
//     }

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 1; j < size-i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
    

//     return 0;   
// }


// int main(){
//     int size;
//     cin>>size;
//     sideTriangle(size);


//     return 0;
// }







// #include<iostream>
// using namespace std;

// int BinaryTriangle(int size){
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<(i+j+1)%2;
//             cout<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }



// int main(){
//     int size;
//     cin>>size;
//     BinaryTriangle(size);


//     return 0;
// }





// #include<iostream>
// using namespace std;


// int DoubleTriangle(int size){
//     for (int i = 1; i <= size; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j;
//         }
//         for (int k = 0; k < (size-i)*2; k++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i-j+1;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int size;
//     cin>>size;
//     DoubleTriangle(size);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int countingTriangle(int size){
//     int count=1;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
    

//     return 0;
// }


// int main(){
//     int size;
//     cin>>size;
//     countingTriangle(size);
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int countingTriangle(int size){
//     int count=65;
//     for (int i = 0; i < size; i++)
//     {
        
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<char(count)<<" ";
//         }
//         count++;
//         cout<<endl;
//     }
    

//     return 0;
// }


// int main(){
//     int size;
//     cin>>size;
//     countingTriangle(size);
//     return 0;
// }

#include<iostream>
using namespace std;

int NumberRectangle(int size){
for (int i = 0; i < size; i++)
{
    for (int k = 0; k < i ; k++)
    {
        cout<<size-k<<" ";
    }
    for (int j = 0; j < (2*(size-i))-1; j++)
    {
        cout<<size-i<<" ";
    }
    for (int k = 0; k < i ; k++)
    {
        cout<<size-i+k+1<<" ";
    }
    cout<<endl;
}



}

int main(){
    int size;
    cin>>size;
    NumberRectangle(size);
    return 0;
}



























