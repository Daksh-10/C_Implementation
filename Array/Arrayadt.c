#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int total_size;
    int used_size;
    int *base_address;
};
void createarray(struct myarray *a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->base_address=(int*)malloc(tsize*sizeof(int));
}
void setval(struct myarray *a){
    int t;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter marks for student %d\n ",i);
        scanf("%d",t);
        (a->base_address)[i]=t;
    }
}
void show(struct myarray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->base_address)[i]);
    }
}


   int main(){
    struct myarray marks;

    createarray(&marks,10,2);
    setval(&marks);
    show(&marks);

           return 0;
}