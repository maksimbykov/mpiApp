#include <iostream>
#include <mpi.h>

int main(int argc, char *argv[])
{
	int processor_rank  = 0;
	int processor_count = 0;
	MPI_Init(&argc,&argv);
	MPI_Comm_size (MPI_COMM_WORLD, &processor_count);
	MPI_Comm_rank (MPI_COMM_WORLD, &processor_rank );
	MPI_Status   status;

	std::cout << "<results_total>"<< processor_rank<<"\n";
	std::cout << "\t<rank>" << processor_rank << "</rank>\n";
	std::cout <<processor_rank<< "</results_total>" <<"\n\n";

	MPI_Finalize();
}
