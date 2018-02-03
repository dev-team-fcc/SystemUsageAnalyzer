#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	system("free -h && sync && echo 4 > /proc/sys/vm/drop_caches && free -h && sync");
}
