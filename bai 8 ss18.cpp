#include <stdio.h>
#include <string.h>
int main()
{
	struct sinhvien{
		char fullname[100];
		int age;
		char phonenumber[100];
	};
	struct sinhvien user[100]={
		{"nguyen van a",18,"012345"},
		{"nguyen van b",18,"0123456"},
		{"nguyen van c",18,"0123467"},
		{"nguyen van d",18,"0123467"},
		{"nguyen van e",18,"0123467"}
	};
	for (int i=0; i<5; i++)
	{
		printf ("sinh vien thu %d:\n",i+1);
		printf("id:%d\n",i+1);
		printf("ten:%s\n",user[i].fullname);
		printf ("tuoi:%d\n",user[i].age);
		printf("sdt:%s\n",user[i].phonenumber);
	}
	int length=5; 
	int addindex;
	printf ("moi nhap vi tri can chen:");
	scanf ("%d",&addindex); 
	if (addindex>0 || addindex<6)
	{
		for(int i=length; i>=addindex;i--)
		{
			user[i]=user[i-1]; 
		} 
		fflush(stdin);
		printf ("moi ban nhap ten sinh vien:");
		fgets (user[addindex].fullname,100,stdin);
		user[addindex].fullname[strcspn(user[addindex].fullname,"\n")]='\0';
		printf ("moi ban nhap tuoi:");
		scanf ("%d",&user[addindex].age);
		fflush(stdin);
		printf ("moi ban nhap phone :");
		fgets (user[addindex].phonenumber,100,stdin);
		user[addindex].phonenumber[strcspn(user[addindex].phonenumber,"\n")]='\0';
		length++; 
			for (int i=0; i<length; i++)
	{
		printf ("sinh vien thu %d:\n",i+1);
		printf("id:%d\n",i+1);
		printf("ten:%s\n",user[i].fullname);
		printf ("tuoi:%d\n",user[i].age);
		printf("sdt:%s\n",user[i].phonenumber);
	}
	} else
	{
		printf ("khong hop le\n");
    } 
  return 0;  
}
