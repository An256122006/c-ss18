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
	int temp=-1;
	char search[100];
	fflush(stdin);
	printf ("moi ban nhap teen muoons xoa:"); 
	fgets(search,100,stdin);
	search[strcspn(search,"\n")]='\0';
	for (int i=0;i<length; i++)
	{
		if (strcmp(user[i].fullname, search)==0)
		{
			temp=i;
			break;
		}  
	}
	if (temp==-1)  
	 {
		printf ("khong ton tai\n");
		return 1;
	}
	for (int i=temp; i<length; i++)
	{
		user[i]=user[i+1];
	}
	length--;
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
