#include "Family.h"


int main() {
	Family* simpson = new Family("Simpson", 3);

	simpson->setName(0, "Simpson");
	simpson->setName(1, "Simpson2");
	simpson->setName(2, "Simpson3");

	simpson->show(); 
	delete simpson;
	return 0;
	
}
