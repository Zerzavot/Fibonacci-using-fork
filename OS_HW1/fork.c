//author: Coimer

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
// 11/03/2020 OPERATING_SYSTEMS_HW 06:38:24
// Printing Fibonacci with fork()

int main(){

	int pid,fd[2],n;
	int sum=0;
	int t1 = 0, t2 = 1, nextTerm;
	int son=0;

	if(pipe(fd)==-1)
	{
		printf("\nError in pipe connection\n");
		return 0;
	}

	pid=fork();

	if(pid>0)
		{ //PARENT
		printf("Enter the number of elements: \n");
		scanf("%d",&n); //kaca kadar olacagı

		//close(fd[0]);
		write(fd[1],&n,sizeof(n)); //n i gönder
		close(fd[1]); //yazdırma işlemi kapat

		wait(NULL); //?bu olmazsa bekleyip duruyo kod :(
		read(fd[0],&son,sizeof(son)); // son değeri okuma
		printf("F(n): %d",son);

		//int s2=-1; //Başka bir yöntem
		//wait(&s2); //ger tek value atacaksan bunu kullanabilirsin
		read(fd[0],&sum,sizeof(sum));
		//printf("   SUM: %d\n",s2/255); //exit(sum) deyip bunları da parent a ekle
		printf("   SUM: %d\n",sum);

		exit(0);

	}

	else{ //CHILD


		read(fd[0],&n,sizeof(n)); //okuma
		close(fd[0]); //okumayı kapat

		printf("\n"); 
		//FIBONACCI LOOP
		printf("Fibonacci Series:  ");
		for (int i = 1; i <= n; ++i) {
					
			nextTerm = t1 + t2;
			t1 = t2;
			t2 = nextTerm;
			printf("%d ", t1);
			son=t1;
			sum+=t1;
		}
		
		printf("\n");		
	
		write(fd[1],&son,sizeof(son));
		//exit(sum); //2.yöntemden
		write(fd[1],&sum,sizeof(sum));
		//printf("\nSUM: %d ", sum);

	}

}


