#include <stdio.h>
#include <string.h>
int main()
{
	struct sinhvien{
		char fullname[100];
		int age;
		char phonenumber[100];
	};
	struct sinhvien user[5];
	for (int i=0; i<5; i++)
	{
		printf ("sinh vieen thu %d:\n",i+1);
		fflush (stdin);
		printf ("moi ban nhap fullname :");
		fgets (user[i].fullname,100,stdin);
		user[i].fullname[strcspn(user[i].fullname,"\n")]='\0';
		printf ("moi ban nhap tuoi cua ban:");
		scanf ("%d",&user[i].age);
		fflush (stdin);
		printf ("moi ban nhap phonenumber:");
		fgets (user[i].phonenumber,100,stdin);
		user[i].phonenumber[strcspn(user[i].phonenumber,"\n")]='\0';
	}
	for (int i=0; i<5; i++)
	{
		printf ("sinh vieen thu %d:\n",i+1);
	    printf ("%s\n",user[i].fullname);
	    printf ("%d\n",user[i].age);
	    printf ("%s\n",user[i].phonenumber);
	}
	return 0;
}
