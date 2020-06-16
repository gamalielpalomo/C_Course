swap(a,b)

void swap (int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

swap(&a,&b)

void swap (int *px, int *py){
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

*(pa+1);

pa = &a[0];


funcion_1(val_1, val_2)

void funcion_1(int x, int y){
	x = 50;
	y = 100;
}

val_1=15
val_2=32 

double **n_matrix = new double* [n];
for(int i=0; i<n; i++)
	n_matrix[i] = new double[n];


int main(int argc, char const *argv[])
{
	int m,n;
	int *matrix = (int *)malloc(m*n*sizeof(int));
	init_matrix(matrix,m,n);
	return 0;
}

void init_matrix(int *matrix,int m,int n){
	printf("Init matrix\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			*(matrix+i*n+j) = 0;
	}
	return;
}