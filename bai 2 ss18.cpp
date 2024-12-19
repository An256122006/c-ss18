#include <stdio.h>
int main()
{
	struct sinhvien{
		int id;
		char fullname[100];
		int age;
		char phonenumber[100];
	};
	struct sinhvien user1={
		1,"nguyen van a",18,"0122334455"
	};
	printf ("%d\n",user1.id);
	printf ("%s\n",user1.fullname);
	printf ("%d\n",user1.age);
	printf ("%s\n",user1.phonenumber);
}
