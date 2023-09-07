/*1.PATTERN 1:

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
               cout<<n-j;
            }
             cout<<endl;
        }
       

 return 0;
}
*/


/*2.PATTERN 2:
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

     int count=1;

    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {
          cout<<count;
          count++;
        }
        cout<<endl;
    }
    return 0;
}
*/


    
 /* 3.PATTERN 3:
 #include<iostream>
 using namespace std;

 int main(int argc, char const *argv[])
 {
     int n ;
     cin>>n;

     for(int i=1; i<=n; i++)
     {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
    return 0;
 }
 */
 

// 4.PATTERN 4:
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//      int n;
//      cin>>n;

//      for(int i=1; i<=n; i++)
//      {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//      }
//     return 0;
// }




//  5.PATTERN 5:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//        for(int i=1; i<=n; i++)
//        {
//           for(int j=1; j<=i; j++)
//           {
//               cout<<i;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }






// 6.PATTERN 6:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//        for(int i=1; i<=n; i++)
//        {
//           for(int j=1; j<=i; j++)
//           {
//               cout<<i+j-1;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }




// 7.PATTERN 7:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//        for(int i=1; i<=n; i++)
//        {
//           for(int j=1; j<=i; j++)
//           {
//               cout<<i-j+1;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }



// 8.PATTERN 8:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//        for(int i=0; i<n; i++)
//        {
//           for(int j=0; j<n; j++)
//           {
//               cout<<char('A'+i) ;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }


// 9.PATTERN 9:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//        for(int i=0; i<n; i++)
//        {
//           for(int j=0; j<n; j++)
//           {
//               cout<<char('A'+j) ;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }



// 10.PATTERN 10:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//       int count = 0;

//        for(int i=0; i<n; i++)
//        {
//           for(int j=0; j<n; j++)
//           {
//               cout<<char('A'+count) ;
//               count++;
//           }
//           cout<<endl;
//        }
//       return 0;
 // }



// 
// 11.PATTERN 11:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

      

//        for(int i=0; i<n; i++)
//        {
//         int count=0;
//           for(int j=0; j<n; j++)
//           {
//               cout<<char('A' + i + count) ;
//               count++;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }




// 12.PATTERN 12:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

      

//        for(int i=0; i<n; i++)
//        {
 
//           for(int j=0; j<=i; j++)
//           {
//               cout<<char('A' + i) ;
              
//           }
//           cout<<endl;
//        }
//       return 0;
//   }




// 13.PATTERN 13:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//       int count = 0;

//        for(int i=1; i<=n; i++)
//        {
 
//           for(int j=1; j<=i; j++)
//           {
//               cout<<char('A' + count) ;
//               count++;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }



// 14.PATTERN 14:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

       

//        for(int i=0; i<n; i++)
//        {
//           int count = 0;
//           for(int j=0; j<=i; j++)
//           {
//               cout<<char('A' + i + count) ;
//               count++;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }




// 15.PATTERN 15:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

       

//        for(int i=1; i<=n; i++)
//        {
//           int count = 0;
//           for(int j=1; j<=i; j++)
//           {
//               cout<<char('A' + n - i + count) ;
//                count++;
//           }
//           cout<<endl;
//        }
//       return 0;
//   }



// 16.PATTERN 16:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;
     
       

//        for(int i=1; i<=n; i++)
//        {
        
//          int space = n-i;

//          while(space)
//          {
//          cout<<" ";
//          space--;
//          }
//           for(int j=1; j<=i; j++)
//           {
//                cout<<"*";
//           }
//           cout<<endl;
//        }
//       return 0;
//   }



// 17.PATTERN 17:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;
     
       

//        for(int i=0; i<n; i++)
//        {
        
//           for(int j=0; j<n-i; j++)
//           {
//                cout<<"*";
//           }
//           cout<<endl;
//        }
//       return 0;
//   }


// 18.PATTERN 18:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;
     
       

//        for(int i=1; i<=n; i++)
//        {
//          int space = 1-i;

//          while(space)
//          {
//          cout<<" ";
//          space++;

//          }
//           for(int j=1; j<=n-i+1; j++)
//           {
//                cout<<"*";
//           }
//           cout<<endl;
//        }
//       return 0;
//   }



// 19.PATTERN 19:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;
     
       

//        for(int i=1; i<=n; i++)
//        {
//          int space = 1-i;

//          while(space)
//          {
//          cout<<" ";
//          space++;

//          }
//          int value = i;
//           for(int j=1; j<=n-i+1; j++)
//           {
//                cout<<value;
//                value++;

//           }
//           cout<<endl;
//        }
//       return 0;
//   }


// 20.PATTERN 20:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;

//       int count = 1;
       

//        for(int i=1; i<=n; i++)
//        {
//          int space = n-i;

//          while(space)
//          {
//          cout<<" ";
//          space--;

//          }
         
//           for(int j=1; j<=i; j++)
//           {
//                cout<<count;
//                count++;

//           }
//           cout<<endl;
//        }
//       return 0;
//   }


// 21.PATTERN 21:
//  #include<iostream>
//  using namespace std;

//  int main(int argc, char const *argv[])
//   {
//       int n;
//       cin>>n;
       

//        for(int i=1; i<=n; i++)
//        {
//          int space = n-i;

//          while(space)
//          {
//          cout<<" ";
//          space--;

//          }
         
//           for(int j=1; j<=i; j++)
//           {
//                cout<<j;
                
//           }       
//                    int start = i-1;
//                    while(start)
//                    {
//                      cout<<start;
//                      start--;
//                    }
          
//           cout<<endl;
//        }
//       return 0;
//   }



//22.PATTERN 22:
 #include<iostream>
 using namespace std;

 int main(int argc, char const *argv[])
  {
      int n;
      cin>>n;
       

       for(int i=1; i<=n; i++)
       {
        
           for(int j=1; j<=n-i+1; j++)
          {
               cout<<j;
                
          }       
                     int space = 1-i;

                     while(space)
                     {
                     cout<<" ";
                     space--;

                     }
           int value = n;
           for (int j = 1; j <=n; j++)
           {
            cout<<value;
            value--;
           }
           
          
          cout<<endl;
       }
      return 0;
  }