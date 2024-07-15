#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */


int main()
{
    pid_t pid=fork();
    if (pid==0) { /* child process */

	 char mysqlYYY1[] = "INSERT INTO testtable (id,info) VALUES (7, 'seven' );";
	 char mysqlYYY2[] = "SELECT * from testtable;";
	 char mysqlYYY3[] = "SELECT * from testtable WHERE id=7;";
	 char mysqlYYY4[] = "UPDATE testtable set info = 'SEVVVUN' where id=7;";
	 char mysqlYYY5[] = "DELETE from testtable where id=7;";

	/* execv wants a Static to eat. */
	static char mysqlZZZ1[128]; 
	static char mysqlZZZ2[128]; 
	static char mysqlZZZ3[128]; 
	static char mysqlZZZ4[128]; 
	static char mysqlZZZ5[128]; 

	/* copy string from 'non-static' to 'static' */
	strcpy(mysqlZZZ1, mysqlYYY1);  //to INSERT 
	strcpy(mysqlZZZ2, mysqlYYY2);  //to SELECT lots 
	strcpy(mysqlZZZ3, mysqlYYY3);  //to SELECT one
	strcpy(mysqlZZZ4, mysqlYYY4);  //to UPDATE 
	strcpy(mysqlZZZ5, mysqlYYY5);  //to DELETE 

	static char *argv1[]={"./zdb_basement", mysqlZZZ3};
                                Change this number here ^ to change the SQL being executed.
	execv("./zdb_basement",argv1);
        
    }
    else { /* pid!=0; parent process */
        waitpid(pid,0,0); /* wait for child to exit */
    }
    return 0;
}


