#include<stdio.h>
#include<stdlib.h>
    struct Student {
        char name[100];
        char dept[100];
        double cgpa;
    };
int main(){



    printf("Num : ");

    int n;

    scanf("%d", &n);

    struct Student *Students = malloc(sizeof(struct Student)*n);

    for(int i = 0; i < n; i++){

        printf("enter name : ");

        scanf("%s", Students[i].name);

        printf("enter dept : ");

        scanf("%s", Students[i].dept);

        printf("enter cgpa : ");

        scanf("%lf", &Students[i].cgpa);

    }

    for(int i = 0 ; i < n; i++ ){

        printf("Name : %s", Students[i].name);

        printf("Dept : %s", Students[i].dept);

        printf("Cgpa : %lf", Students[i].cgpa);
        printf("\n");

    }


    Students = realloc(Students, (n+2)*sizeof(struct Student));


    for(int i = n; i < n+2; i++){

        printf("enter name : ");

        scanf("%s", Students[i].name);

        printf("enter dept : ");

        scanf("%s", Students[i].dept);

        printf("enter cgpa : ");

        scanf("%lf", &Students[i].cgpa);
    }

    int size = n + 2;


        for(int i = 0 ; i < size; i++ ){

        printf("Name : %s", Students[i].name);

        printf("Dept : %s", Students[i].dept);

        printf("Cgpa : %lf", Students[i].cgpa);
        printf("\n");

    }


    FILE *fptr;

    fptr = fopen("C:\\Users\\User\\Documents\\Files\\readme.txt", "w");

    for(int i = 0 ; i < size; i++){

        fprintf(fptr, "%s %s %.2lf\n", Students[i].name, Students[i].dept, Students[i].cgpa);


    }

    //fflush(fptr);
    fclose(fptr);

    fptr = fopen("C:\\Users\\User\\Documents\\Files\\readme.txt", "r");

    struct Student *arr = malloc(sizeof(struct Student) *size);

    for(int i = 0 ; i < size ; i++){

        fscanf(fptr, "%s %s %lf", arr[i].name, arr[i].dept, &arr[i].cgpa);

    }

    printf("\nRetrieved Student List from File:\n");

    for (int i = 0; i < size; i++){
        printf("%s %s %.2lf\n", arr[i].name, arr[i].dept, arr[i].cgpa);
    }


    free(Students);
    free(arr);

    fclose(fptr);
}
