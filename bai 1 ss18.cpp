#include <stdio.h>
#include <string.h>
int main()
{
	struct sinhvien{
		int id;
		char fullname[100];
		int age;
		char phonenumber[100];
	};
	struct sinhvien user1;
		printf ("moi ban nhap ma cua ban:");
		scanf ("%d",&user1.id);
		fflush (stdin);
		printf ("moi ban nhap fullname :");
		fgets (user1.fullname,100,stdin);
		user1.fullname[strcspn(user1.fullname,"\n")]='\0';
		printf ("moi ban nhap tuoi cua ban:");
		scanf ("%d",&user1.age);
		fflush (stdin);
		printf ("moi ban nhap phonenumber:");
		fgets (user1.phonenumber,100,stdin);
		user1.phonenumber[strcspn(user1.phonenumber,"\n")]='\0';
	
	printf ("%d\n",user1.id);
	printf ("%s\n",user1.fullname);
	printf ("%d\n",user1.age);
	printf ("%s\n",user1.phonenumber);
	return 0;
}
