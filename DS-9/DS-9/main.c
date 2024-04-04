  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    int rno;
    char name[20];
    struct subject{
        int scode;
        char sname[20];
        int mark;
    }sub[3];
    int total;
    float per;
}student;

void create(){
    student *s;
    FILE *fp;
    int n,i,j;
    printf("Enter how many students you want : ");
    scanf("%d",&n);
    
    s = (student*)calloc(n,sizeof(student));
    fp = fopen("mystudents.txt", "w");
    for (i=0; i<n; i++) {
        s[i].total = 0;
        s[i].per = 0;
        printf("Enter RollNo : ");
        scanf("%d",&s[i]);
        fflush(stdin);
        printf("Enter Name : ");
        scanf("%[^\n]s",s[i].name);
        
        for (j=0; j<3; j++) {
            printf("Enter Marks of Subject : ");
            scanf("%d",&s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }
        s[i].per = s[i].total / 3.0;
        fwrite(&s[i],sizeof(student),1,fp);
    }
    fclose(fp);
}

void display(){
    student *sl;
    int j;
    FILE *fp;
    fp = fopen("mystudents.txt","r");
    while (fread(&sl, sizeof(student), 1, fp)) {
        printf("\n%-5d%-20s",sl->rno,sl->name);
        for (j=0; j<3; j++) {
            printf("%4d",sl->sub[j].mark);
        }
        printf("%5d%7.2f",sl->total,sl->per);
    }
}

void append(){
    student *s;
    FILE *fp;
    int n,i,j;
    printf("Enter how many students you want : ");
    scanf("%d",&n);
    
    s = (student*)calloc(n,sizeof(student));
    fp = fopen("mystudents.txt", "a");
    for (i=0; i<n; i++) {
        s[i].total = 0;
        s[i].per = 0;
        printf("Enter RollNo : ");
        scanf("%d",&s[i]);
        fflush(stdin);
        printf("Enter Name : ");
        scanf("%[^\n]s",s[i].name);
        
        for (j=0; j<3; j++) {
            printf("Enter Marks of Subject : ");
            scanf("%d",&s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }
        s[i].per = s[i].total / 3.0;
        fwrite(&s[i],sizeof(student),1,fp);
    }
    fclose(fp);
}


int main() {
    
    int choice;
    do{
        printf("\n1.CREATE");
        printf("\n2.DİSPLAY");
        printf("\n3.APPEND");
        printf("\n0.EXIT");
        
        printf("\n1.Enter your choice : ");
        scanf("%d",&choice);
        
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                append();
                break;
        }
        
    }while(choice != 0);
    
    return 0;
}

//BERSAN MUHAMMET EKICI
///
//BEYZA AYDIN
///
//EGEMEN KARAMAN
///
//ISMAIL ESAT ERBAY
///
//KEREM KORKUT TURAN
///
//OKAN KUKUL
///
//RUVEYDA ARDIC
///
//SALIH YELEN
///
//SAMET ERŞEN
///
//SEHER OVA
///
//YASIN GORGUN
///
//SEYMA NUR CIN
//12 student
