#include <stdio.h>
#include <stdlib.h>

void set_value(int *matrix,int m,int n,int i,int j,int value);
void init_matrix(int *matrix,int m,int n);
void print_matrix(int *matrix,int m,int n);

int main(int argc, char const *argv[])
{
	int m,n;
	printf("Cuantas filas?\n");
	scanf("%d",&m);
	printf("Cuantas columnas?\n");
	scanf("%d",&n);
	int *matrix = (int *)malloc(m*n*sizeof(int)); //Nótese que declaramos el arreglo utilizando asignación dinámica de memoria con la función malloc.
	init_matrix(matrix,m,n);
	print_matrix(matrix,m,n);
	while(1){
		int i,j,value;
		printf("Fila del valor a modificar?\n");
		scanf("%d",&i);
		printf("Columna del valor a modificar?\n");
		scanf("%d",&j);
		printf("new value?\n");
		scanf("%d",&value);
		set_value(matrix,m,n,i,j,value);
		print_matrix(matrix,m,n);
	}
	return 0;
}
void set_value(int *matrix,int m,int n,int i,int j,int value){
	printf("\n");
	printf("Setting value: %d at:(%d,%d)\n", value,i,j);
	*(matrix+i*n+j) = value;
	return;
}
void init_matrix(int *matrix,int m,int n){
	printf("Init matrix\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			//scanf("%d",matrix+i*n+j);
			*(matrix+i*n+j)=0;
		}
	}
	return;
}
void print_matrix(int *matrix,int m,int n){
	printf("Matrix:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",*(matrix+i*n+j));
		}
		printf("\n");
	}
	printf("\n");
	return;
}