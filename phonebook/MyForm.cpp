#include "MyForm.h"

using namespace phonebook; // Ensure you have this line to bring the namespace into scope.

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    MyForm form;  // Correct usage of the class name
    Application::Run(% form);
    return 0;  // Return a success code.
}
