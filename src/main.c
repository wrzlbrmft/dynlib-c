#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char* argv[]) {
	if (1 == argc) {
		fprintf(stderr, "error: no lib file\n");
		return 1;
	}
	char* lib = argv[1];

	printf("loading lib %s\n", lib);
	void* lib_ptr = dlopen(lib, RTLD_NOW);
	if (!lib_ptr) {
		fprintf(stderr, "error loading lib %s (%s)\n", lib, dlerror());
		return 1;
	}

	return 0;
}
