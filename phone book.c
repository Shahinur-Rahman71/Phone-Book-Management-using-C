#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct person
{
    char name[35];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char home_town[20];

};
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();
int main()
{
    system("color 5f");
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{

    printf("\t\t *****************************************\n");
    printf("\t\t *****************************************\n");
    printf("\t\t **********                    ***********\n");
    printf("\t\t **********WELCOME TO PHONEBOOK***********\n");
    printf("\t\t **********                    ***********\n");
    printf("\t\t *****************************************\n");
    printf("\t\t *****************************************\n");

    printf("\n\n\t\t\t\t MENU\t\t\n\n");
    printf("\t\t1 .Add New   \t2.List   \t3.Exit\n  \n\t\t4.Modify \t5.Search\t6.Delete");

    switch(getch())
    {
        case '1':


                  addrecord();
        break;
        case '2': listrecord();
        break;
        case '3': exit(0);
        break;
        case '4': modifyrecord();
        break;
        case '5': searchrecord();
        break;
        case '6': deleterecord();
        break;
        default:
                    system("cls");
                    printf("\nEnter 1 to 6 only");
                    printf("\n Enter any key");
                    getch();

        menu();
    }

}

void addrecord()
{
        system("cls");
        FILE *f;
        struct person p;
        int w,i,j,k,l,z,x;
        char h;
        f=fopen("project","ab+");
        w:
        printf("\n Enter name: ");
        //getchar();
       // getchar();
        got(p.name);
        if(strcmp(p.name,"3")==0||strcmp(p.name,"112")==0||strcmp(p.name,"223")==0||strcmp(p.name,"56")==0||strcmp(p.name,"789")==0||strcmp(p.name,"44")==0||strcmp(p.name,"55")==0||strcmp(p.name,"66")==0||strcmp(p.name,"77")==0||strcmp(p.name,"88")==0||strcmp(p.name,"12345")==0||strcmp(p.name,"2345")==0||strcmp(p.name,"4567")==0||strcmp(p.name,"787")==0||strcmp(p.name,"45")==0||strcmp(p.name,"3456")==0||strcmp(p.name,"4")==0||strcmp(p.name,"1")==0||strcmp(p.name,"2")==0||strcmp(p.name,"0")==0||strcmp(p.name,"33")==0||strcmp(p.name,"333")==0||strcmp(p.name,"334")==0||strcmp(p.name,"34")==0||strcmp(p.name,"11")==0||strcmp(p.name,"22")==0||strcmp(p.name,"123")==0||strcmp(p.name,"1234")==0||strcmp(p.name,"445")==0||strcmp(p.name,"234")==0||strcmp(p.name,"23")==0||strcmp(p.name,"222")==0||strcmp(p.name,"5")==0||strcmp(p.name,"6")==0||strcmp(p.name,"7")==0||strcmp(p.name,"8")==0||strcmp(p.name,"9")==0||strcmp(p.name,"0")==0||strcmp(p.name,"345")==0||strcmp(p.name,"567")==0||strcmp(p.name,"456")==0||strcmp(p.name,"34567")==0||strcmp(p.name,"5678")==0)
        {

            printf("\nplease again type name.This is not perfect.\n");
            goto w;
        }
        //menu();

        i:
        printf("\nEnter the address: ");
        //getchar();
        got(p.address);
        if(strcmp(p.address,"3")==0||strcmp(p.address,"112")==0||strcmp(p.address,"223")==0||strcmp(p.address,"56")==0||strcmp(p.address,"789")==0||strcmp(p.address,"44")==0||strcmp(p.address,"55")==0||strcmp(p.address,"66")==0||strcmp(p.address,"77")==0||strcmp(p.address,"88")==0||strcmp(p.address,"12345")==0||strcmp(p.address,"2345")==0||strcmp(p.address,"4567")==0||strcmp(p.address,"787")==0||strcmp(p.address,"45")==0||strcmp(p.address,"3456")==0||strcmp(p.address,"4")==0||strcmp(p.address,"1")==0||strcmp(p.address,"2")==0||strcmp(p.address,"0")==0||strcmp(p.address,"33")==0||strcmp(p.address,"333")==0||strcmp(p.address,"334")==0||strcmp(p.address,"34")==0||strcmp(p.address,"11")==0||strcmp(p.address,"22")==0||strcmp(p.address,"123")==0||strcmp(p.address,"1234")==0||strcmp(p.address,"445")==0||strcmp(p.address,"234")==0||strcmp(p.address,"23")==0||strcmp(p.address,"222")==0||strcmp(p.address,"5")==0||strcmp(p.address,"6")==0||strcmp(p.address,"7")==0||strcmp(p.address,"8")==0||strcmp(p.address,"9")==0||strcmp(p.address,"0")==0||strcmp(p.address,"345")==0||strcmp(p.address,"567")==0||strcmp(p.address,"456")==0||strcmp(p.address,"34567")==0||strcmp(p.address,"5678")==0)
        {

            printf("\nplease again type address.This is not perfect.\n");
            goto i;
        }
        j:
        printf("\nEnter father name: ");
        got(p.father_name);
        if(strcmp(p.father_name,"3")==0||strcmp(p.father_name,"112")==0||strcmp(p.father_name,"223")==0||strcmp(p.father_name,"56")==0||strcmp(p.father_name,"789")==0||strcmp(p.father_name,"44")==0||strcmp(p.father_name,"55")==0||strcmp(p.father_name,"66")==0||strcmp(p.father_name,"77")==0||strcmp(p.father_name,"88")==0||strcmp(p.father_name,"12345")==0||strcmp(p.father_name,"2345")==0||strcmp(p.father_name,"4567")==0||strcmp(p.father_name,"787")==0||strcmp(p.father_name,"45")==0||strcmp(p.father_name,"3456")==0||strcmp(p.father_name,"4")==0||strcmp(p.father_name,"1")==0||strcmp(p.father_name,"2")==0||strcmp(p.father_name,"0")==0||strcmp(p.father_name,"33")==0||strcmp(p.father_name,"333")==0||strcmp(p.father_name,"334")==0||strcmp(p.father_name,"34")==0||strcmp(p.father_name,"11")==0||strcmp(p.father_name,"22")==0||strcmp(p.father_name,"123")==0||strcmp(p.father_name,"1234")==0||strcmp(p.father_name,"445")==0||strcmp(p.father_name,"234")==0||strcmp(p.father_name,"23")==0||strcmp(p.father_name,"222")==0||strcmp(p.father_name,"5")==0||strcmp(p.father_name,"6")==0||strcmp(p.father_name,"7")==0||strcmp(p.father_name,"8")==0||strcmp(p.father_name,"9")==0||strcmp(p.father_name,"0")==0||strcmp(p.father_name,"345")==0||strcmp(p.father_name,"567")==0||strcmp(p.father_name,"456")==0||strcmp(p.father_name,"34567")==0||strcmp(p.father_name,"5678")==0)
        {

            printf("\nplease again type father_name.This is not perfect.\n");
            goto j;
        }
        l:
        printf("\nEnter mother name: ");
        got(p.mother_name);
        if(strcmp(p.mother_name,"3")==0||strcmp(p.mother_name,"112")==0||strcmp(p.mother_name,"223")==0||strcmp(p.mother_name,"56")==0||strcmp(p.mother_name,"789")==0||strcmp(p.mother_name,"44")==0||strcmp(p.mother_name,"55")==0||strcmp(p.mother_name,"66")==0||strcmp(p.mother_name,"77")==0||strcmp(p.mother_name,"88")==0||strcmp(p.mother_name,"12345")==0||strcmp(p.mother_name,"2345")==0||strcmp(p.mother_name,"4567")==0||strcmp(p.mother_name,"787")==0||strcmp(p.mother_name,"45")==0||strcmp(p.mother_name,"3456")==0||strcmp(p.mother_name,"4")==0||strcmp(p.mother_name,"1")==0||strcmp(p.mother_name,"2")==0||strcmp(p.mother_name,"0")==0||strcmp(p.mother_name,"33")==0||strcmp(p.mother_name,"333")==0||strcmp(p.mother_name,"334")==0||strcmp(p.mother_name,"34")==0||strcmp(p.mother_name,"11")==0||strcmp(p.mother_name,"22")==0||strcmp(p.mother_name,"123")==0||strcmp(p.mother_name,"1234")==0||strcmp(p.mother_name,"445")==0||strcmp(p.mother_name,"234")==0||strcmp(p.mother_name,"23")==0||strcmp(p.mother_name,"222")==0||strcmp(p.mother_name,"5")==0||strcmp(p.mother_name,"6")==0||strcmp(p.mother_name,"7")==0||strcmp(p.mother_name,"8")==0||strcmp(p.mother_name,"9")==0||strcmp(p.mother_name,"00")==0||strcmp(p.mother_name,"345")==0||strcmp(p.mother_name,"567")==0||strcmp(p.mother_name,"456")==0||strcmp(p.mother_name,"34567")==0||strcmp(p.mother_name,"5678")==0)
        {

            printf("\nplease again type mother_name.This is not perfect.\n");
            goto l;
        }
        printf("\nEnter phone no.\n");
        printf("\n Carefully, It will be integer type.\n\n");
        scanf("%ld",&p.mble_no);
        z:
        printf("Enter sex:");

        got(p.sex);
        if(strcmp(p.sex,"male")==0||strcmp(p.sex,"female")==0||strcmp(p.sex,"eunuch")==0)
        {
            ;
        }
        else
        {
            printf("\nplease again type.This is not perfect.\n");
            goto z;

        }
        printf("\nEnter e-mail:");
        got(p.mail);
        x:
        printf("\nEnter home_town:\n");
        printf("\n Carefully, It will be char type.\n");
        got(p.home_town);
        if(strcmp(p.home_town,"3")==0||strcmp(p.home_town,"112")==0||strcmp(p.home_town,"223")==0||strcmp(p.home_town,"56")==0||strcmp(p.home_town,"789")==0||strcmp(p.home_town,"44")==0||strcmp(p.home_town,"55")==0||strcmp(p.home_town,"66")==0||strcmp(p.home_town,"77")==0||strcmp(p.home_town,"88")==0||strcmp(p.home_town,"12345")==0||strcmp(p.home_town,"2345")==0||strcmp(p.home_town,"4567")==0||strcmp(p.home_town,"787")==0||strcmp(p.home_town,"45")==0||strcmp(p.home_town,"3456")==0||strcmp(p.home_town,"4")==0||strcmp(p.home_town,"1")==0||strcmp(p.home_town,"2")==0||strcmp(p.home_town,"0")==0||strcmp(p.home_town,"33")==0||strcmp(p.home_town,"333")==0||strcmp(p.home_town,"334")==0||strcmp(p.home_town,"34")==0||strcmp(p.home_town,"11")==0||strcmp(p.home_town,"22")==0||strcmp(p.home_town,"123")==0||strcmp(p.home_town,"1234")==0||strcmp(p.home_town,"445")==0||strcmp(p.home_town,"234")==0||strcmp(p.home_town,"23")==0||strcmp(p.home_town,"222")==0||strcmp(p.home_town,"5")==0||strcmp(p.home_town,"6")==0||strcmp(p.home_town,"7")==0||strcmp(p.home_town,"8")==0||strcmp(p.home_town,"9")==0||strcmp(p.home_town,"00")==0||strcmp(p.home_town,"345")==0||strcmp(p.home_town,"567")==0||strcmp(p.home_town,"456")==0||strcmp(p.home_town,"34567")==0||strcmp(p.home_town,"5678")==0)
        {

            printf("\nplease again type home_town.This is not perfect.\n");
            goto x;
        }
        fwrite(&p,sizeof(p),1,f);

        fflush(stdin);
        printf("\nrecord saved");

        fclose(f);

        printf("\n\nEnter any key");

	 getch();
     system("cls");
     menu();
}
void listrecord()
{
        struct person p;
        FILE *f;
    f=fopen("project","rb");
    if(f==NULL)
    {
    printf("\nfile opening error in listing :\a\a\a\a");
    //
    printf("\nPlease add document\n");



    //exit(1);
    }
    while(fread(&p,sizeof(p),1,f)==1)
    {
         printf("\n\n\n YOUR RECORD IS\n\n ");
            printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobile no=%ld\nSex=%s\nE-mail=%s\nhome_town=%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);

         getch();
         system("cls");
    }
    fclose(f);
     printf("\n Enter any key");
     getch();
        system("cls");
    menu();
}
void searchrecord()
{
    struct person p;
    FILE *f;
    char name[100];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char home_town[20];
    f=fopen("project","rb");
    if(f==NULL)
    {
        printf("\n error in opening\a\a\a\a");
        printf("\nPlease add document\n");
        //exit(1);

    }
    else
    {
        //
        system("cls");
        printf("\n\t1.Search by name   \t2.Search by address   \t3.Search by father name\n  \n\t4.Serch by mother name \t5.Search by mobl_no\t6.search by sex\n\n\t7.search by email\t8.search by home_no \n");
        printf("\n\tEnter the given key that choice you for searching.");
        switch(getch())
        {

            case '1':
                    printf("\nEnter name of person to search\n");
                    got(name);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(strcmp(p.name,name)==0)
                        {
                            printf("\n\tDetail Information About %s",name);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else
                            printf("\nfile not found");

                    }

                      //addrecord();
            break;
            case '2':
                // listrecord();
                printf("\nEnter address of person to search\n");
                    got(address);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(strcmp(p.address,address)==0)
                        {
                            printf("\n\tDetail Information About %s",address);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else
                            printf("\nfile not found");

                    }
              break;
            case '3':
                //exit(0);
                printf("\nEnter father_name of person to search\n");
                    got(father_name);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(strcmp(p.father_name,father_name)==0)
                        {
                            printf("\n\tDetail Information About %s",father_name);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else
                            printf("\nfile not found");

                    }
            break;
            case '4':
                //modifyrecord();
                printf("\nEnter mother_name of person to search\n");
                    got(mother_name);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(strcmp(p.mother_name,mother_name)==0)
                        {
                            printf("\n\tDetail Information About %s",mother_name);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else
                            printf("\nfile not found");

                    }
            break;
            case '5':
                // searchrecord();
                printf("\nEnter mobile_no of person to search\n");
                    //got(mble_no);
                    scanf("%ld",&mble_no);
                    //printf("%ld %ld\n",mble_no,p.mble_no);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(p.mble_no==mble_no)
                        {
                            printf("\n\tDetail Information About %ld",mble_no);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else;
                            //printf("\nfile not found");

                    }
            break;
            case '6':
                //deleterecord();
                printf("\nEnter sex of person to search\n");
                    got(sex);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(strcmp(p.sex,sex)==0)
                        {
                            printf("\n\tDetail Information About %s",sex);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else
                            printf("\nfile not found");

                    }
            break;
            case '7':
                //deleterecord();
                printf("\nEnter emai_no of person to search\n");
                    got(mail);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(strcmp(p.mail,mail)==0)
                        {
                            printf("\n\tDetail Information About %s",mail);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else
                            printf("\nfile not found");

                    }
            break;
            case '8':
                //deleterecord();
                printf("\nEnter home_town of person to search\n");
                    got(home_town);
                    while(fread(&p,sizeof(p),1,f)==1)
                    {
                        if(strcmp(p.home_town,home_town)==0)
                        {
                            printf("\n\tDetail Information About %s",home_town);
                            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
                        }
                            else
                            printf("\nfile not found");

                    }
            break;

            default:
                        system("cls");
                        printf("\nEnter 1 to 6 only");
                        printf("\n Enter any key");
                        getch();

            menu();
        }
        //
//        printf("\nEnter name of person to search\n");
//        got(name);
//        while(fread(&p,sizeof(p),1,f)==1)
//        {
//            if(strcmp(p.name,name)==0)
//            {
//                printf("\n\tDetail Information About %s",name);
//                printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nhome_town:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.home_town);
//            }
//                else
//                printf("file not found");
//
//        }
        //
    }
    fclose(f);
    printf("\n Enter any key");

    getch();

    system("cls");
    menu();
}
void deleterecord()
{
    struct person p;
    FILE *f,*ft;
	int flag;
	char name[100];

	f=fopen("project","rb");
	if(f==NULL)
		{

			printf("\nCONTACT'S DATA NOT ADDED YET.\a\a\a\a");

		}
	else
	{
		ft=fopen("temp","wb+");

		if(ft==NULL)

            printf("\nfile opaning error");

		else
        {


            printf("\nEnter CONTACT'S NAME:");
            got(name);

            fflush(stdin);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(p.name,name)!=0)
                    fwrite(&p,sizeof(p),1,ft);
                if(strcmp(p.name,name)==0)
                    flag=1;
            }
            fclose(f);
            fclose(ft);
            if(flag!=1)
            {
                printf("\nNO CONACT'S RECORD TO DELETE.");
                remove("temp.txt");
            }
            else
            {
                remove("project");
                rename("temp.txt","project");
                printf("\nRECORD DELETED SUCCESSFULLY.");

            }


	    }

    }
 printf("\n Enter any key");

	 getch();
     system("cls");
     menu();
}

void modifyrecord()
{
    int c;
    FILE *f;
    int flag=0;
    struct person p,s;
	char  name[50];
	char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char home_town[20];

	f=fopen("project","rb+");
	if(f==NULL)
		{

			printf("\nCONTACT'S DATA NOT ADDED YET.\a\a\a\a");
			printf("\nPlease add document\n");
			//exit(1);


		}
	else
	{
	    system("cls");
	    printf("\n\t1.Modify name   \t2.Modify address   \t3.Modify father name\n  \n\t4.Modify mother name \t5.Modify mobl_no\t6.Modify sex\n\n\t7.Modify email\t\t8.Modify home_town\t9.Modify All\n");
        printf("\n\tEnter the given key that choice you for modify.");
	    switch(getch())
        {
        case '1':

                printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
                got(name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.name)==0)
                {



                    printf("\n Enter name:");
                    got(p.name);

                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
                  //addrecord();
        break;
        case '2':
            //listrecord();
            printf("\nEnter CONTACT'S address TO MODIFY:\n");
                got(address);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(address,p.address)==0)
                {



                    printf("\n Enter address:");
                    got(p.address);

                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
        break;
        case '3':
            //exit(0);
            printf("\nEnter CONTACT'S father name TO MODIFY:\n");
            got(father_name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(father_name,p.father_name)==0)
                {



                    printf("\n Enter Father name:");
                    got(p.father_name);

                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
        break;
        case '4':
            //modifyrecord();
            printf("\nEnter CONTACT'S MOTHER NAME TO MODIFY:\n");
            got(mother_name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(mother_name,p.mother_name)==0)
                {



                    printf("\n Enter mother name:");
                    got(p.mother_name);

                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
        break;
        case '5':
            // searchrecord();
            printf("\nEnter CONTACT'S mobile number TO MODIFY:\n");
                //got(name);
                scanf("%ld",&mble_no);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(mble_no==p.mble_no)
                {



                    printf("\n Enter name:");
                    //got(p.mble_no);
                    scanf("%ld",&p.mble_no);
                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
        break;
        case '6':
            //deleterecord();
            printf("\nEnter CONTACT'S sex TO MODIFY:\n");
                got(sex);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(sex,p.sex)==0)
                {



                    printf("\n Enter sex:");
                    got(p.sex);

                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
        break;
        case '7':
            printf("\nEnter CONTACT'S mail TO MODIFY:\n");
                got(mail);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(mail,p.mail)==0)
                {



                    printf("\n Enter mail:");
                    got(p.mail);

                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
            break;
        case '8':
            printf("\nEnter CONTACT'S home town TO MODIFY:\n");
                got(home_town);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(home_town,p.home_town)==0)
                {



                    printf("\n Enter home town:");
                    got(p.home_town);

                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&p,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
            break;
        case '9':
            printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
                got(name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.name)==0)
                {



                    printf("\n Enter name:");
                    got(s.name);
                    printf("\nEnter the address:");
                    got(s.address);
                    printf("\nEnter father name:");
                    got(s.father_name);
                    printf("\nEnter mother name:");
                    got(s.mother_name);
                    printf("\nEnter phone no:");
                    scanf("%ld",&s.mble_no);
                    printf("\nEnter sex:");
                    got(s.sex);
                    printf("\nEnter e-mail:");
                    got(s.mail);
                    printf("\nEnter home_town\n");
                    got(s.home_town);
                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&s,sizeof(p),1,f);
                    flag=1;
                    break;

                  }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
        default:
                    system("cls");
                    printf("\nEnter 1 to 6 only");
                    printf("\n Enter any key");
                    getch();

        menu();
        }
//
//		printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
//            got(name);
//            while(fread(&p,sizeof(p),1,f)==1)
//            {
//                if(strcmp(name,p.name)==0)
//                {
//
//
//
//                    printf("\n Enter name:");
//                    got(s.name);
//                    printf("\nEnter the address:");
//                    got(s.address);
//                    printf("\nEnter father name:");
//                    got(s.father_name);
//                    printf("\nEnter mother name:");
//                    got(s.mother_name);
//                    printf("\nEnter phone no:");
//                    scanf("%ld",&s.mble_no);
//                    printf("\nEnter sex:");
//                    got(s.sex);
//                    printf("\nEnter e-mail:");
//                    got(s.mail);
//                    printf("\nEnter citizen no\n");
//                    got(s.home_town);
//                    fseek(f,-sizeof(p),SEEK_CUR);
//                    fwrite(&s,sizeof(p),1,f);
//                    flag=1;
//                    break;
//
//
//
//                }
//                fflush(stdin);
//
//
//            }
//            if(flag==1)
//            {
//                printf("\n your data id modified");
//
//            }
//            else
//            {
//                    printf(" \n data is not found");
//
//            }
//            fclose(f);
//
	}
	 printf("\n Enter any key");
	 getch();
    system("cls");
	menu();

}
void got(char *name)
{

   int i=0,j;
    char c,ch;
    //getchar();
    do
    {
        c=getch();
                if(c!=8&&c!=13)
                {
                    *(name+i)=c;
                        putch(c);
                        i++;
                }
                if(c==8)
                {
                    if(i>0)
                    {
                        i--;
                    }

                    system("cls");
                    for(j=0;j<i;j++)
                    {
                        ch=*(name+j);
                        putch(ch);

                    }

                }
    }while(c!=13);
      *(name+i)='\0';
}



