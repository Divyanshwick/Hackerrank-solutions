/* Enter your macros here */
int i;
#define toStr(x) #x
#define io(v) cin >> v
#define foreach(v,i) for(i=0;i<v.size();i++)
#define INF 100000000
#define FUNCTION(func, op) void func(int& a, int b) {if(b op a) a=b;}
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)


}
