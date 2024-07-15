
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string.h>

char str[1000];

static int callback(void *data, int argc, char **argv, char **azColName){
	int i;
	int z;
	z=1;
	for(i = 0; i<argc; i++){
		if(z>1){
			strcat(str, ",");
		}
		strcat(str, argv[i]);
		z++;
	}
	strcat(str, ";");
   return 0;
}


char* main(int argc, char* argv[]) {
	if( argc == 2 ) {
		strcpy(str, "");
		sqlite3 *db;
		char *zErrMsg = 0;
		int rc;
		char *sql;
		const char* data = "Callback function called";
		rc = sqlite3_open("./zdb_data.db", &db);

		sql = argv[1];
		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
		printf("%s\n",str);
		sqlite3_close(db);

		char *filename = "zdb_output_data.txt";/*Open file*/
		FILE *fp = fopen(filename, "w");
		fprintf(fp,  str);

	}else {
	      printf("No SQL; wrong number of args.\n");
	}

	return str;
}

