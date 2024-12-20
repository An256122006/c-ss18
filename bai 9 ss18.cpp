#include <stdio.h>
#include <string.h>
int main()
{
	int value,addindex,value2,temp2=-1;
	char search[50];
	struct dish{
		char name[100];
		int price; 
	}temp; 
	 struct dish user[50]={
	 	{"lau",100},
	 	{"com",200},
	 	{"thit",300},
	 	{"thit cho",100},
	 	{"thit meo",200},
	 };
	 int length=5;
	 do 
	 {
	 	printf ("    menu\n");
	 	printf ("1.In ra giá tr? các ph?n t? có trong menu món an theo d?ng 1. member: value\n");
	 	printf ("2.Thêm m?t ph?n t? vào v? trí ch? d?nh\n");
	 	printf ("3.S?a m?t ph?n t? ? v? trí ch? d?nh\n");
	 	printf ("4. Xóa m?t ph?n t? ? v? trí ch? d?nh\n");
	 	printf ("5.S?p x?p các ph?n t? ( Khi l?a ch?n menu cha thì hi?n th? menu con )\n");
	 	printf ("6.Tìm ki?m ph?n t? theo name nh?p vào\n");
	 	printf ("7.thoat\n");
	 	printf ("moi ban nhap lua chon:");
	 	scanf ("%d",&value);
	 	switch (value)
	 	{	
	 		case 1:
	 		    printf ("              menu\n");
		        for (int i=0; i<5; i++)
		       {
			    printf ("%d:%s %d\n",i+1,user[i].name,user[i].price);
		       }
		       break;
		    case 2:
		    	printf ("moi ban nhap vi tri muon them:");
		    	scanf ("%d",&addindex);
		    	for (int i=length; i>=addindex-1; i--)
		    	{
		    		user[i]=user[i-1];
				}
				fflush(stdin);
				printf ("moi bsn nhsp ten mon an muon them:");
				fgets(user[addindex-1].name,100,stdin);
				user[addindex-1].name[strcspn(user[addindex-1].name,"\n")]='\0';
				printf ("moi ban nhap gia :");
				scanf ("%d",&user[addindex-1].price);
				length++;
				for (int i=0; i<length; i++)
		       {
			    printf ("%d:%s %d\n",i+1,user[i].name,user[i].price);
		       }
				break;
			case 3:
				printf ("moi ban nhap vi tri muon sua:");
		    	scanf ("%d",&addindex);
		    	fflush(stdin);
				printf ("moi bsn nhsp ten mon an muon sua:");
				fgets(user[addindex-1].name,100,stdin);
				user[addindex-1].name[strcspn(user[addindex-1].name,"\n")]='\0';
				printf ("moi ban nhap gia :");
				scanf ("%d",&user[addindex-1].price);
		    	for (int i=0; i<length; i++)
		       {
			    printf ("%d:%s %d\n",i+1,user[i].name,user[i].price);
		       }
				break;
			case 4:	
				printf ("moi ban nhap vi tri muon xoa:");
				scanf ("%d",&addindex-1);
		    	for (int i=addindex; i<length; i++)
		    	{
		    		user[i]=user[i+1];
				}
				length--;
				for (int i=0; i<length; i++)
		       {
			    printf ("%d:%s %d\n",i+1,user[i].name,user[i].price);
		       }
		       break;
		    case 5:
		      	printf ("1:Gi?m d?n theo price\n");
		      	printf ("2.Tang d?n theo price\n");
		      	printf ("moi ban nhap lua chon:");
		      	scanf ("%d",&value2);
		      	switch (value2)
		      	{
		      		case 1:
		      			for (int i=0; i<length-1;i++)
		      			{
		      				for (int j=0; j<length-1-i;j++)
		      				{
		      					if (user[j].price < user[j+1].price)
		      					{
		      						temp=user[j];
		      						user[j]=user[j+1];
		      						user[j+1]=temp;
								}
							}
						}
						for (int i=0; i<length; i++)
		                {
			               printf ("%d:%s %d\n",i+1,user[i].name,user[i].price);
		                }
		                break;
		            case 2:
		                for (int i=0; i<length-1; i++)
						{
							for (int j=0; j<length-1-i; j++)
							{
								if (user[j].price > user[j+1].price)
								{
									temp=user[j];
		      						user[j]=user[j+1];
		      						user[j+1]=temp;
								}
							}
						 }
						for (int i=0; i<length; i++)
		                {
			               printf ("%d:%s %d\n",i+1,user[i].name,user[i].price);
		                }	             
				         break;  
				    default:
					   printf ("khong hop le\n");
					   break;  
				}
			case 6:	
			    printf ("1.Tìm ki?m tuy?n tính\n");
		      	printf ("2.Tìm ki?m nh? phân\n");
		      	printf ("moi ban nhap lua chon:");
		      	scanf ("%d",&value2);
		      	switch (value2)
		      	{
		      		case 1:
		      			fflush(stdin);
		      			printf ("moi ban nhap ten muon tim:");
		      		    fgets(search,100,stdin);
		      		    search[strcspn(search,"\n")]='\0';
		      		    for (int i=0; i<length;i++)
		      		    {
		      		    	if (strcmp(user[i].name,search)==0)
		      		    	{
		      		    		temp2=i;
		      		    		printf ("%d: %s  %d\n",temp2+1,user[temp2].name,user[temp2].price);
		      		    		break;
							}
							if (temp2==-1)
							{
								printf ("khong co phan tu trong manmg\n");
								return 1;
							}
						}
						break;
					case 2:
						printf ("chua cap nhat\n");
						break;
				}
			case 7:
				printf ("thoat\n");
				return 1;
			default:
				printf ("khong hop le\n");
				break;
		}
	 } while (1);
	 return 0;
} 
