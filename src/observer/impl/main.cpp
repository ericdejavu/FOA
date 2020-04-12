#include "header/observer.h"
#include <iostream>

int main() {
	Service *pService = new Service();

	pService->doTask();

	delete pService;
}
