Matrix_Element_Required()  to get i,j element of matrix
AllocateMatrix() create a matrix with element as 0
InitializeMatrix() Initialize matrix elements by val
DisplayMatrix() display matrix data
Normalize_Matrix_min_max() normalise matrix elements using min-max normalisation technique
setup_data() read given input file and create X and Y matrices
InitializeRandom() Initialize matrix elements by random val


main()
{
	setup_data()
	DisplayMatrix() X and Y matrices
	AllocateMatrix() for Parameters and Train_Parameters
	InitializeRandom() for Parameters
	Normalize_Matrix_min_max() for X matrix
	cudaEventCreate(&start);
	cudaEventCreate(&stop);
	.......
}