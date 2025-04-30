#include <windows.h>

int main() {
   // Simple message box
   MessageBoxW( // Use the wide-character version of MessageBox
       NULL,                   // Parent window handle
       L"Hello, World!",       // Message text
       L"My Message Box",      // Title
       MB_OK | MB_ICONINFORMATION  // Buttons and icon
   );

   return 0;
}