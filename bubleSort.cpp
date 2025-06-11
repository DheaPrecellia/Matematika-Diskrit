#include <iostream>
using namespace std;

int main()
{
   int y;
   int temp;
   int v;
   int w;
   int z;
   int x[9]; 

   z = 8;
   x[1] = 9;
   x[2] = 2;
   x[3] = 1;
   x[4] = 4;
   x[5] = 11;
   x[6] = 10;
   x[7] = 18;
   x[8] = 6;

   cout << "Data Belum Terurut:" << endl;
   w = 1;
   while (w <= z)
   {
      cout << x[w] << " ";
      w = w + 1;
   }
   cout << endl;

   v = 1;
   while (v <= z - 1)
   {
      cout << "(Langkah ke-" << v << ") - " << endl;
      y = z;
      while (y >= v + 1)
      {
         if (x[y] < x[y - 1])
         {
            temp = x[y];
            x[y] = x[y - 1];
            x[y - 1] = temp;
         }
         y = y - 1;
      }
      w = 1;
      while (w <= z)
      {
         cout << x[w] << " ";
         w = w + 1;
      }
      cout << endl;
      v = v + 1;
   }

   cout << "Data Telah Terurut:" << endl;
   w = 1;
   while (w <= z)
   {
      cout << x[w] << " ";
      w = w + 1;
   }
   cout << endl;

   return 0;
}
