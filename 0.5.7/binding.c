#include <stdio.h>
#include "binding.h"
#include "inet.h"  /* for sockets */
#include "unacceptable.h"

int dd = 1;

ValueObject *getArg(struct scopeobject *scope, char *name)
{
	IdentifierNode *id = createIdentifierNode(IT_DIRECT, (void *)copyString(name), NULL, NULL, 0);
	ValueObject *val = getScopeValue(scope, scope, id);
	deleteIdentifierNode(id);
	return val;
}

ReturnObject *isunacceptableWrapper(struct scopeobject *scope)
{
        ValueObject *arg1 = getArg(scope, "i");
        int i = getInteger(arg1);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        // you can do whatever here
        int z = unacceptable_basis(i);

        //ValueObject *ret = createIntegerValueObject(i);
        ValueObject *ret = createIntegerValueObject(z);
        return createReturnObject(RT_RETURN, ret);
}

ReturnObject *isunacceptableWrapper1(struct scopeobject *scope)
{
/* Prototype 1.  Modify for your use*/

        ValueObject *arg1 = getArg(scope, "i");
	char *addr = getString(castStringImplicit(arg1, scope));
        int z = unacceptable_basis1(addr);
        ValueObject *ret = createIntegerValueObject(z);
        return createReturnObject(RT_RETURN, ret);
}


ReturnObject *isunacceptableWrapper2__EXPT(struct scopeobject *scope)
{
        ValueObject *arg1 = getArg(scope, "i");
        int i = getInteger(arg1);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/
        char* z = unacceptable_basis2(i);
	puts (z);  //<<<<<-----------GETTING VAR BACK?????????????????????
	char *h = "hello";


	char *data = "hello";
	int len = 5;
	data[len] = '\0';

	//ValueObject *ret = createStringValueObject(data); /* this does the correct thing, but breaks */
        //ValueObject *ret = createArrayValueObject("aaabbb"); /* this does a number....but not a word */
        ValueObject *ret = createIntegerValueObject(i);
	return createReturnObject(RT_RETURN, ret);
}


ReturnObject *isunacceptableWrapper2(struct scopeobject *scope)
{
        ValueObject *arg1 = getArg(scope, "i");
        int i = getInteger(arg1);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        char* z = unacceptable_basis2(i);
	puts (z);  //<<<<<-----------GETTING VAR BACK?????????????????????
	char *h = "hello";
        ValueObject *ret = createIntegerValueObject(1);
	return createReturnObject(RT_RETURN, ret);
}


ReturnObject *isunacceptableWrapper3(struct scopeobject *scope)
{
/* SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL */
/* 
	Prototype 3.  Modify for your use
	CALLED FROM:
	zoeSQL

	AND THEREFORE, MIDDLE OF:
	pencil I wish_to_call MYLIB --arrMember--> zoeSQL zoe_pass_this "New Text Passed" zoe_call_now 
*/

/*
SQL Job Marker
*/

//	printf("%s\n","You Are Now Inside ZoeSQL - step 1");
//	printf("%s\n","Step 1.");

        ValueObject *arg1 = getArg(scope, "i");
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
	AND NOT
	int i = getInteger(arg1);
*/
	char *addr = getString(castStringImplicit(arg1, scope));
        int z = unacceptable_basis3(addr);
	/* int z = 88;// unacceptable_basis3(addr); */

        ValueObject *ret = createIntegerValueObject(z);
        return createReturnObject(RT_RETURN, ret);

//        ValueObject *arg1 = getArg(scope, "i");
//        int i = getInteger(arg1);
//        int z = unacceptable_basis3(i);
//        ValueObject *ret = createIntegerValueObject(z);
//        return createReturnObject(RT_RETURN, ret);
}


ReturnObject *isunacceptableWrapper4(struct scopeobject *scope)
{
/* Prototype 4.  Modify for your use*/
        ValueObject *arg1 = getArg(scope, "i");
        int i = getInteger(arg1);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        // you can do whatever here
        int z = unacceptable_basis4(i);

        //ValueObject *ret = createIntegerValueObject(i);
        ValueObject *ret = createIntegerValueObject(z);
        return createReturnObject(RT_RETURN, ret);
}


ReturnObject *isunacceptableWrapperZ(struct scopeobject *scope)
{
/* PATTERN PROTOTYPE.  DO NOT MODIFY - COPY and use THE COPY */
        ValueObject *arg1 = getArg(scope, "i");
        int i = getInteger(arg1);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/



        // you can do whatever here
        int z = unacceptable_basisZ(i);

        //ValueObject *ret = createIntegerValueObject(i);
        ValueObject *ret = createIntegerValueObject(z);
        return createReturnObject(RT_RETURN, ret);
}


ReturnObject *isunacceptableWrapperZZ1(struct scopeobject *scope)
{




/* PATTERN PROTOTYPE.  DO NOT MODIFY - COPY and use THE COPY */

/*
The call (more-than-one passing number) is like this:
VISIBLE I IZ MYLIB'Z ISUNACCEPTABLEZZ1 YR 1 AN YR 2 MKAY
-------------2 OF THEM!!--------------^^^^^^^^^^^^^^^^^^^^
*/
        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        int i = getInteger(arg1);
	int j = getInteger(arg2);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        int y = unacceptable_basisZZ1(i,j);
	ValueObject *ret = createIntegerValueObject(y);
        return createReturnObject(RT_RETURN, ret);
}

ReturnObject *isunacceptableWrapperZZ2(struct scopeobject *scope)
{
/* Feel Free to Modify */
        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        int i = getInteger(arg1);
	int j = getInteger(arg2);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        int y = unacceptable_basisZZ2(i,j);
	ValueObject *ret = createIntegerValueObject(y);
        return createReturnObject(RT_RETURN, ret);
}

ReturnObject *isunacceptableWrapperZZ3(struct scopeobject *scope)
{
/* Feel Free to Modify */
        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        int i = getInteger(arg1);
	int j = getInteger(arg2);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

	int y = unacceptable_basisZZ3(i,j);
	ValueObject *ret = createIntegerValueObject(y);
        return createReturnObject(RT_RETURN, ret);
}

ReturnObject *isunacceptableWrapperZZZ1(struct scopeobject *scope)
{
        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        ValueObject *arg3 = getArg(scope, "k");
        int i = getInteger(arg1);
	int j = getInteger(arg2);
	int k = getInteger(arg3);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        int y = unacceptable_basisZZZ1(i,j,k);
	ValueObject *ret = createIntegerValueObject(y);
        return createReturnObject(RT_RETURN, ret);
}

ReturnObject *isunacceptableWrapperZZZ2(struct scopeobject *scope)
{
        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        ValueObject *arg3 = getArg(scope, "k");
        int i = getInteger(arg1);
	int j = getInteger(arg2);
	int k = getInteger(arg3);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        int y = unacceptable_basisZZZ2(i,j,k);
	ValueObject *ret = createIntegerValueObject(y);
        return createReturnObject(RT_RETURN, ret);
}

ReturnObject *isunacceptableWrapperZZZ3(struct scopeobject *scope)
{

	/*
        ValueObject *arg1 = getArg(scope, "i");
        int i = getInteger(arg1);
        char* z = unacceptable_basis2(i);
	puts (z);  //<<<<<-----------GETTING VAR BACK?????????????????????
	char *h = "hello";
        ValueObject *ret = createIntegerValueObject(1);
	return createReturnObject(RT_RETURN, ret);

	*/



/*
	THIS ABOUT THIS:
	char* i = getInteger(arg1);
	This is clealy wrong!!
	But we are getting away with it now.

	In the future, look at this:

	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
	AND NOT
	int i = getInteger(arg1);
	char *addr = getString(castStringImplicit(arg1, scope));
*/



	/*
	should not be getInteger here.
	should be:
	char *addr = getString(castStrin
	*/

        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        ValueObject *arg3 = getArg(scope, "k");
        char* i = getInteger(arg1);//<<<<<<<<<<<<<<<<<<<<<<<< int here
	char* j = getInteger(arg2);
	int k = getInteger(arg3);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/


        char* aaa = zoe_unacceptable_basisZZZ3(i,j,k);
        /*
        //PLEASE KEEP THIS for future reference
        printf(">From Here> aaa => ");
        printf(aaa);
	*/

        /* char y = unacceptable_basisZZZ3(i,j,k); */
	
	//printf("aaa :%s\n",aaa);
	
	/*


	/*
	11111: RETURN HERE
	*/


	//const char *rdata = "test";
	/*
	char *rdata = "";
	int rlen = 1;
	rdata[rlen] = '\0';

	Currently Test.  If it causes trouble, fall back on FALLBACK
	THIS IS A RISK

	OPTION 1
	***In the future.....experiment with this
	ValueObject *ret = createStringValueObject(rdata);

	OPTION 2
	***In the future.....experiment with this
	ValueObject *ret = createStringValueObject("");

	Right now, no moving of data.
	"Segmentation fault (core dumped)"

	*/

	/*
	OPTION 3
	Keep to one side for fallback
	****
	USE THIS TO RETURN SAFELY
	FALLBACK
	ValueObject *ret = createIntegerValueObject(aaa);

	This behaves at the moment.
	Does not Stack Overflow, and returns.....a big number


	Previously (elswhere this file!) we have this:
	EXAMPLE.
		char *data = malloc(sizeof(char) * (amount + 1));
		int len = inet_receive(remote, local, data, amount, -1);
		data[len] = '\0';

		ValueObject *ret = createStringValueObject(data);	

	How do we start malloc of our own?

	Maybe like this:

		char *array;
		int size;
		array=(*char)malloc (size);	
	....Tomorrow!

	*/
	

//	ValueObject *ret = createIntegerValueObject(aaa);


		char *data = malloc(4012);/*THIS WAS CHANGED RECENTLY.  If it moans, do not be shocked */
		//strcpy(mystr, "hello");
		strcpy(data, aaa);
		/*
		int len = 3;
		data[0] = 'a';
		data[1] = 'b';
		data[2] = 'c';
		data[3] = 'd';
		data[4] = 'e';
		data[5] = 'f';
		data[6] = 'g';
		data[7] = 'h';
		data[8] = 'i';
		data[9] = 'j';
		data[10] = 'k';
		data[11] = 'l';
		data[12] = 'm';
		data[13] = 'n';
		data[15] = 'o';
		data[16] = 'p';
		data[17] = 'q';
		*/
		ValueObject *ret = createStringValueObject(data);	



	/*
	we will use WORK-AROUND to 'return' the result :(
	*/
        return createReturnObject(RT_RETURN, ret);

/*
End-of-day
Did not succeed in returning string.
>>let's try saving in a file.....

Experimented with createStringValueObject
Do this again!!

Currently stuck to createIntegerValueObject

*/
/*

IN FUTURE, study this
Try to get a way to Return a string!!
	char *data = "hello";
	int len = 8;
	data[len] = '\0';

	ValueObject *ret = createStringValueObject(data);

        //ValueObject *ret = createArrayValueObject("aaabbb");
	return createReturnObject(RT_RETURN, ret);
*/
}





















/*
NEW NEW MEW THE MEW ONE <<<<<<<<<<<<<<<<<<<<<<<<<<<<LOOK<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


NOTES TO SELF:

You have a bit of code to move in:
	the '0' and '1' want swapping (within the function)


The Test Call is:

	./zoe ./000-New/AAAA-Current-test.zoe


*/

ReturnObject *isunacceptableWrapperZZZ4(struct scopeobject *scope)
{

	//char *addr = getString(castStringImplicit(arg1, scope));
        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        ValueObject *arg3 = getArg(scope, "k");

        char* i = getInteger(arg1);//<<<<<<<<<<<<<<<<<<<<<<<< int here
	char* j = getInteger(arg2);
	int k = getInteger(arg3);

	//printf("%s\n","You Are Now Inside isunacceptableWrapperZZZ4 - step 1");	


        char* aaa = zoe_unacceptable_basisZZZ4(i,j,k);
	char *data = malloc(4012);/*THIS WAS CHANGED RECENTLY.  If it moans, do not be shocked */
	strcpy(data, aaa);
	ValueObject *ret = createStringValueObject(data);	

        return createReturnObject(RT_RETURN, ret);

}













































ReturnObject *isunacceptableWrapperZZZbase(struct scopeobject *scope)
{
/* Feel Free to Modify */
        ValueObject *arg1 = getArg(scope, "i");
        ValueObject *arg2 = getArg(scope, "j");
        ValueObject *arg3 = getArg(scope, "k");
        int i = getInteger(arg1);
	int j = getInteger(arg2);
	int k = getInteger(arg3);
/*
	IF YOU WANT A STRING TO COME IN:
	char *addr = getString(castStringImplicit(arg1, scope));
*/

        int y = unacceptable_basisZZZbase(i,j,k);
	ValueObject *ret = createIntegerValueObject(y);
        return createReturnObject(RT_RETURN, ret);
}

ReturnObject *iopenWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "addr");
	ValueObject *arg2 = getArg(scope, "port");
	char *addr = getString(castStringImplicit(arg1, scope));
	int port = getInteger(arg2);

	inet_host_t *h = malloc(sizeof(inet_host_t));
	inet_open(h, IN_PROT_TCP, addr, port);

	ValueObject *ret = createBlobValueObject(h);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *ilookupWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "addr");
	char *addr = getString(castStringImplicit(arg1, scope));

	char *h = inet_lookup(addr);

	ValueObject *ret = createStringValueObject(h);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *iacceptWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "local");
	inet_host_t *host = (inet_host_t *)getBlob(arg1);

	inet_host_t *h = malloc(sizeof(inet_host_t));
	inet_accept(h, host);

	ValueObject *ret = createBlobValueObject(h);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *iconnectWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "local");
	ValueObject *arg2 = getArg(scope, "addr");
	ValueObject *arg3 = getArg(scope, "port");
	inet_host_t *host = (inet_host_t *)getBlob(arg1);
	char *addr = getString(castStringImplicit(arg2, scope));
	int port = getInteger(arg3);

	inet_host_t *h = malloc(sizeof(inet_host_t));
	inet_setup(h, IN_PROT_TCP, addr, port);
	inet_connect(host, h);

	ValueObject *ret = createBlobValueObject(h);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *icloseWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "local");
	inet_host_t *host = (inet_host_t *)getBlob(arg1);

	inet_close(host);

	ValueObject *ret = createBlobValueObject(host);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *isendWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "local");
	ValueObject *arg2 = getArg(scope, "remote");
	ValueObject *arg3 = getArg(scope, "data");
	inet_host_t *local = (inet_host_t *)getBlob(arg1);
	inet_host_t *remote = (inet_host_t *)getBlob(arg2);
	char *data = getString(castStringImplicit(arg3, scope));

	int n = inet_send(local, remote, data, strlen(data));

	ValueObject *ret = createIntegerValueObject(n);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *ireceiveWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "local");
	ValueObject *arg2 = getArg(scope, "remote");
	ValueObject *arg3 = getArg(scope, "amount");
	inet_host_t *local = (inet_host_t *)getBlob(arg1);
	inet_host_t *remote = (inet_host_t *)getBlob(arg2);
	int amount = getInteger(arg3);

	char *data = malloc(sizeof(char) * (amount + 1));
	int len = inet_receive(remote, local, data, amount, -1);
	data[len] = '\0';

	ValueObject *ret = createStringValueObject(data);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *fopenWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "filename");
	ValueObject *arg2 = getArg(scope, "mode");
	char *filename = getString(castStringImplicit(arg1, scope));
	char *mode = getString(castStringImplicit(arg2, scope));

	FILE *f = fopen(filename, mode);

	ValueObject *ret = createBlobValueObject(f);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *freadWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "file");
	ValueObject *arg2 = getArg(scope, "length");
	FILE *file = (FILE *)getBlob(arg1);
	int length = getInteger(arg2);

	char *buf = malloc(sizeof(char) * (length + 1));
	int len = fread(buf, 1, length, file);
	buf[len] = '\0';

	ValueObject *ret = createStringValueObject(buf);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *fwriteWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "file");
	ValueObject *arg2 = getArg(scope, "data");
	FILE *file = (FILE *)getBlob(arg1);
	char *data = getString(arg2);

	fwrite(data, 1, strlen(data), file);

	return createReturnObject(RT_DEFAULT, NULL);
}

ReturnObject *fcloseWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "file");
	FILE *file = (FILE *)getBlob(arg1);

	fclose(file);

	return createReturnObject(RT_DEFAULT, NULL);
}

ReturnObject *ferrorWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "file");
	FILE *file = (FILE *)getBlob(arg1);

	ValueObject *ret = createBooleanValueObject(file == NULL || ferror(file));
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *rewindWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "file");
	FILE *file = (FILE *)getBlob(arg1);

	rewind(file);

	return createReturnObject(RT_DEFAULT, NULL);
}

ReturnObject *strlenWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "string");
	char *string = getString(castStringImplicit(arg1, scope));

	size_t len = strlen(string);

	ValueObject *ret = createIntegerValueObject((long long)len);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *stratWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "string");
	ValueObject *arg2 = getArg(scope, "position");
	char *string = getString(castStringImplicit(arg1, scope));
	long long position = getInteger(arg2);

	char *temp = malloc(sizeof(char) * 2);
	temp[0] = string[position];
	temp[1] = 0;

	ValueObject *ret = createStringValueObject(temp);
	return createReturnObject(RT_RETURN, ret);
}

ReturnObject *srandWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "seed");
	int seed = getInteger(arg1);

	srand(seed);

	return createReturnObject(RT_DEFAULT, NULL);
}

ReturnObject *randWrapper(struct scopeobject *scope)
{
	ValueObject *arg1 = getArg(scope, "max");
	unsigned int max = getInteger(arg1);

	unsigned int val = (rand() % max);

	ValueObject *ret = createIntegerValueObject(val);
	return createReturnObject(RT_RETURN, ret);
}

void loadLibrary(ScopeObject *scope, IdentifierNode *target)
{

	char *name = NULL;
	int status;
	ScopeObject *lib = NULL;
	IdentifierNode *id = NULL;
	ValueObject *val = NULL;
	if (target == NULL) return;

	name = resolveIdentifierName(target, scope);
	if (!name) goto loadLibraryAbort;

	if (!strcmp(name, "STDLIB")) {
		lib = createScopeObject(scope);
		if (!lib) goto loadLibraryAbort;

		loadBinding(lib, "MIX", "seed", &srandWrapper);
		loadBinding(lib, "BLOW", "max", &randWrapper);

		id = createIdentifierNode(IT_DIRECT, (void *)copyString("STDLIB"), NULL, NULL, 0);
		if (!id) goto loadLibraryAbort;

		if (!createScopeValue(scope, scope, id)) goto loadLibraryAbort;

		val = createArrayValueObject(lib);
		if (!val) goto loadLibraryAbort;
		lib = NULL;

		if (!updateScopeValue(scope, scope, id, val)) goto loadLibraryAbort;
		deleteIdentifierNode(id);
	} else if (!strcmp(name, "STDIO")) {
		lib = createScopeObject(scope);
		if (!lib) goto loadLibraryAbort;

		loadBinding(lib, "OPEN", "filename mode", &fopenWrapper);
		loadBinding(lib, "DIAF", "file", &ferrorWrapper);
		loadBinding(lib, "LUK", "file length", &freadWrapper);
		loadBinding(lib, "SCRIBBEL", "file data", &fwriteWrapper);
		loadBinding(lib, "AGEIN", "file", &rewindWrapper);
		loadBinding(lib, "CLOSE", "file", &fcloseWrapper);

		id = createIdentifierNode(IT_DIRECT, (void *)copyString("STDIO"), NULL, NULL, 0);
		if (!id) goto loadLibraryAbort;

		if (!createScopeValue(scope, scope, id)) goto loadLibraryAbort;

		val = createArrayValueObject(lib);
		if (!val) goto loadLibraryAbort;
		lib = NULL;

		if (!updateScopeValue(scope, scope, id, val)) goto loadLibraryAbort;
		deleteIdentifierNode(id);
	} else if (!strcmp(name, "SOCKS")) {
		lib = createScopeObject(scope);
		if (!lib) goto loadLibraryAbort;

		loadBinding(lib, "RESOLV", "addr", &ilookupWrapper);
		loadBinding(lib, "BIND", "addr port", &iopenWrapper);
		loadBinding(lib, "LISTN", "local", &iacceptWrapper);
		loadBinding(lib, "KONN", "local addr port", &iconnectWrapper);
		loadBinding(lib, "CLOSE", "local", &icloseWrapper);
		loadBinding(lib, "PUT", "local remote data", &isendWrapper);
		loadBinding(lib, "GET", "local remote amount", &ireceiveWrapper);

		id = createIdentifierNode(IT_DIRECT, (void *)copyString("SOCKS"), NULL, NULL, 0);
		if (!id) goto loadLibraryAbort;

		if (!createScopeValue(scope, scope, id)) goto loadLibraryAbort;

		val = createArrayValueObject(lib);
		if (!val) goto loadLibraryAbort;
		lib = NULL;

		if (!updateScopeValue(scope, scope, id, val)) goto loadLibraryAbort;
		deleteIdentifierNode(id);
	} else if (!strcmp(name, "STRING")) {
		lib = createScopeObject(scope);
		if (!lib) goto loadLibraryAbort;

		loadBinding(lib, "LEN", "string", &strlenWrapper);
		loadBinding(lib, "AT", "string position", &stratWrapper);

		id = createIdentifierNode(IT_DIRECT, (void *)copyString("STRING"), NULL, NULL, 0);
		if (!id) goto loadLibraryAbort;

		if (!createScopeValue(scope, scope, id)) goto loadLibraryAbort;

		val = createArrayValueObject(lib);
		if (!val) goto loadLibraryAbort;
		lib = NULL;

		if (!updateScopeValue(scope, scope, id, val)) goto loadLibraryAbort;
		deleteIdentifierNode(id);
   } else if (!strcmp(name, "MYLIB")) {  // CHANGED
   	    lib = createScopeObject(scope);
        if (!lib) goto loadLibraryAbort;

	loadBinding(lib, "ISUNACCEPTABLE1", "i", &isunacceptableWrapper1); // CHANGED
        loadBinding(lib, "ISUNACCEPTABLE2", "i", &isunacceptableWrapper2); // CHANGED

	/* SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL  SQL */
        loadBinding(lib, "zoeSQL", "i", &isunacceptableWrapper3);
        loadBinding(lib, "ISUNACCEPTABLE4", "i", &isunacceptableWrapper4); // CHANGED

        loadBinding(lib, "ISUNACCEPTABLEZ", "i", &isunacceptableWrapperZ); // PROTOTYPE TO COPY.  DO NOT MODIFY.

        loadBinding(lib, "ISUNACCEPTABLEZZ1","i j", &isunacceptableWrapperZZ1); // PROTOTYPE TO COPY.  DO NOT MODIFY.
        loadBinding(lib, "ISUNACCEPTABLEZZ2","i j", &isunacceptableWrapperZZ2); // MODIFY
        loadBinding(lib, "ISUNACCEPTABLEZZ3","i j", &isunacceptableWrapperZZ3); // MODIFY

        loadBinding(lib, "ISUNACCEPTABLEZZZbase","i j k", &isunacceptableWrapperZZZbase); // PROTOTYPE TO COPY.  DO NOT MODIFY.
        loadBinding(lib, "ISUNACCEPTABLEZZZ1","i j k", &isunacceptableWrapperZZZ1); // MODIFY
        loadBinding(lib, "ISUNACCEPTABLEZZZ2","i j k", &isunacceptableWrapperZZZ2); // MODIFY
        loadBinding(lib, "zoePassString1","i j k", &isunacceptableWrapperZZZ3); // MODIFY
        loadBinding(lib, "zoePassStringMore","i j k", &isunacceptableWrapperZZZ4); // MODIFY
	/* 
	ABOVE: we must pass 2 things to ISUNACCEPTABLEZZ.
	Convention is to put a SPACE between them
	i.e  ISUNACCEPTABLEZZ","i j"
	                         ^space
	and not commas
	
	*/
        id = createIdentifierNode(IT_DIRECT, (void *)copyString("MYLIB"), NULL, NULL, 0); // CHANGED
        if (!id) goto loadLibraryAbort;

        if (!createScopeValue(scope, scope, id)) goto loadLibraryAbort;

        val = createArrayValueObject(lib);
        if (!val) goto loadLibraryAbort;
        lib = NULL;

        if (!updateScopeValue(scope, scope, id, val)) goto loadLibraryAbort;
        deleteIdentifierNode(id);
}

	if (name) free(name);
	return;

loadLibraryAbort: /* In case something goes wrong... */
	/* Clean up any allocated structures */
	if (name) free(name);
	if (lib) deleteScopeObject(lib);
	if (id) deleteIdentifierNode(id);
	if (val) deleteValueObject(val);
	return;
}

void loadBinding(ScopeObject *scope, char *name, const char *args, struct returnobject *(*binding)(struct scopeobject *))
{
	IdentifierNode *id = NULL;
	StmtNodeList *stmts = NULL;
	BindingStmtNode *stmt = NULL;
	StmtNode *wrapper = NULL;
	int status;
	BlockNode *body = NULL;
	IdentifierNodeList *ids = NULL;
	IdentifierNode *arg = NULL;
	if (name == NULL || binding == NULL) return;

	id = createIdentifierNode(IT_DIRECT, (void *)copyString(name), NULL, NULL, 0);
	if (!id) goto loadBindingAbort;

	stmts = createStmtNodeList();
	if (!stmts) goto loadBindingAbort;

	stmt = createBindingStmtNode(binding);
	if (!stmt) goto loadBindingAbort;

	wrapper = createStmtNode(ST_BINDING, stmt);
	if (!wrapper) goto loadBindingAbort;
	stmt = NULL;

	status = addStmtNode(stmts, wrapper);
	if (!status) goto loadBindingAbort;
	wrapper = NULL;

	body = createBlockNode(stmts);
	if (!body) goto loadBindingAbort;
	stmts = NULL;

	ids = createIdentifierNodeList();
	if (!ids) goto loadBindingAbort;

	const char *start = args;
	while (start != NULL) {
		char *end = strchr(start, ' ');
		char *temp = NULL;
		unsigned int len = 0;

		if (end != NULL) len = (end - start);
		else len = strlen(start);

		temp = malloc(sizeof(char) * (len + 1));
		strncpy(temp, start, len);
		temp[len] = '\0';

		if (end != NULL) start = (end + 1);
		else start = NULL;

		arg = createIdentifierNode(IT_DIRECT, (void *)temp, NULL, NULL, 0);
		if (!arg) goto loadBindingAbort;

		status = addIdentifierNode(ids, arg);
		if (!status) goto loadBindingAbort;
	}

	FuncDefStmtNode *interface = createFuncDefStmtNode(NULL, id, ids, body);
	if (!interface) goto loadBindingAbort;

	ValueObject *val = createFunctionValueObject(interface);
	if (!val) goto loadBindingAbort;

	createScopeValue(scope, scope, id);
	updateScopeValue(scope, scope, id, val);

	return;

loadBindingAbort: /* In case something goes wrong... */

	if (id) deleteIdentifierNode(id);
	if (val) deleteValueObject(val);
	else if (interface) deleteFuncDefStmtNode(interface);
	else {
		if (arg) deleteIdentifierNode(arg);
		if (ids) deleteIdentifierNodeList(ids);
		if (body) deleteBlockNode(body);
		if (stmts) deleteStmtNodeList(stmts);
		if (wrapper) deleteStmtNode(wrapper);
		if (stmt) deleteBindingStmtNode(stmt);
	}
	return;
}
