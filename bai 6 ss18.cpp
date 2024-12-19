#include <stdio.h>
#include <string.h>
int main()
{
	struct sinhvien {
		char fullname[100];
		int age;
		char phonenumber[10];
	};
	struct sinhvien user[50]= {
		{ "nguyen van a", 18, "0123456"},
		{ "nguyen van b", 18, "0123458"}, 
		{ "nguyen van c", 18, "0123456"}, 
		{ "nguyen van d", 18, "0123456"}, 
		{ "nguyen van e", 18, "0123456"}
	};
	for (int i=0; i<5; i++)
	{
		printf ("sinh vien thu %d:\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("tên :%s\n",user[i].fullname);
		printf ("tuoi:%d\n",user[i].age);
		printf ("sdt:%s\n",user[i].phonenumber);
	}
	int length=5;
	printf ("moi ban nhap ten phan tu moi:");
	fflush(stdin);
	fgets(user[length].fullname,100,stdin);
	user[length].fullname[strcspn(user[length].fullname,"\n")]='\0';
	printf ("moi nhap tuoi:");
	scanf ("%d",&user[length].age);
	printf ("moi nhap so dien thoai:");
	fflush(stdin);
	fgets(user[length].phonenumber,100,stdin);
	user[length].phonenumber[strcspn(user[length].phonenumber,"\n")]='\0';
	length++;
	for (int i=0; i<length; i++)
	{
		printf ("sinh vien thu %d:\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("tên :%s\n",user[i].fullname);
		printf ("tuoi:%d\n",user[i].age);
		printf ("sdt:%s\n",user[i].phonenumber);
	}
	return 0;
}
