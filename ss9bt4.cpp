#include<stdio.h>
#define maxsize 100
void nhapmang(int array[],int *size){
	printf("nhap so luong phan tu: ");
	scanf("%d",size);
	if(*size>maxsize){
		printf("so luong khong hop le.\n");
		*size=0;
		return;
	}
	for(int i=0;i<*size;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
		
	}
	printf("\n");
}
void hienthimang(int array[],int *size){
	if(*size==0){
	printf("mang rong.\n");
	return;
}
    printf(" cac phan tu trong mang: ");
    for(int i=0;i<*size;i++){
    	printf("%d",array[i]);
	}
	printf("\n");
}
void themphantu(int array[],int *size){
	if(*size>=maxsize){
		printf("khong the them phan tu moi,\n");
		return;
	}
	int value;
	printf("gia tri phan tu can them: ");
	scanf("%d",&value);
	array[*size]=value;
	(*size)++;
}
void suaphantu(int array[],int *size){
	if(*size==0){
		printf("mang rong.\n");
		return;
		
	}
	int index,value;
	printf("nhap gia tri can sua 0-%d: ",*size-1);
	scanf("%d",&index);
	if(index<0||index>=*size){
		printf("vi tri ko hop le");
		return;
	}
	printf("nhap gia tri moi: ");
	scanf("%d",&value);
	array[index]=value;
	printf("sua thanh cong.\n");
}
void xoaphantu(int array[],int *size){
	if(*size==0){
		printf("mang rong.\n");
		return;
	}
	int index;
	printf("nhap vi tri phan tu can xoa 0-%d: ",size-1);
	scanf("%d",&index);
	if(index<0||index>=*size){
		printf("vi tri khong hop le");
		return;
	}
	for(int i=index;i<*size-1;i++){
		array[i]=array[i+1];
	}
	(*size)--;
	printf("xoa thanh cong.\n");
	
}
int main(){
	int array[maxsize];
	int size=0;
	int choice;
	do{
		printf("\n======menu======\n");
		printf("1. nhap vao mang.\n");
		printf("2. hien thi mang.\n");
		printf("3. them phan tu.\n");
		printf("4. sua phan tu.\n");
		printf("5. xoa phan tu.\n");
		printf("6. thoat.\n");
		printf("lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				nhapmang(array,&size);
				break;
			case 2:
				hienthimang(array,&size);
				break;
			case 3:
				themphantu(array,&size);
				break;
			case 4:
				suaphantu(array,&size);
				break;
			case 5:
				xoaphantu(array,&size);
				break;
			case 6:
				printf("thoat chuong trinh.\n");
				break;
			default:
			    printf("vui long chon lai.\n");
		}
	}while(choice!=6);
	return 0;
}
