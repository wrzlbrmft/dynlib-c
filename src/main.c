#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char *argv[]) {
	// expect first arg to be lib file to load
	if (1 == argc) {
		fprintf(stderr, "error: no lib file\n");
		return 1;
	}
	char *lib = argv[1];

	// load lib file or exit on error
	printf("loading lib %s\n", lib);
	void *lib_ptr = dlopen(lib, RTLD_LAZY);
	if (!lib_ptr) {
		fprintf(stderr, "error loading lib %s (%s)\n", lib, dlerror());
		return 1;
	}

	// get pointer to func() from loaded lib or exit on error
	printf("loading func()\n");
	void (*func_ptr)() = dlsym(lib_ptr, "func");
	if (!func_ptr) {
		fprintf(stderr, "error loading func() (%s)\n", dlerror());
		return 1;
	}

	// call func()
	printf("calling func()\n");
	func_ptr();

	return 0;
}
