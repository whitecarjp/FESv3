#include "GUI.h"

using namespace electrodeGUI;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew GUI());
	return 0;
}
