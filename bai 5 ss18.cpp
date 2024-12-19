#include <stdio.h>
#include <string.h>
int main()
{
	int id;
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
	printf ("moi ban nhap id tim kiem:");
	scanf ("%d",&id);
	for (int i=0; i<5; i++)
	{
		if (id==i+1)
		{
			printf ("moi nhap ten moi:");
			fflush(stdin);
			fgets(user[i].fullname,100,stdin);
			user[i].fullname[strcspn(user[i].fullname,"\n")]='\0';
			printf("moi nhap tuoi moi:");
			scanf ("%d",&user[i].age); 
		}
	}
	printf ("cac gia tri sau khi sua:\n");
	for (int i=0; i<5; i++)
	{
		printf ("sinh vien thu %d:\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("tên :%s\n",user[i].fullname);
		printf ("tuoi:%d\n",user[i].age);
		printf ("sdt:%s\n",user[i].phonenumber);
	} 
		return 0;
}
