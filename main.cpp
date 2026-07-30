#include <windows.h>
#include <GL/gl.h>

// OpenGL hook ve ortam karartma mantığı iskeleti
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        // DLL oyuna enjekte olduğunda çalışacak kısım
        MessageBoxA(NULL, "DLL Basariyla Enjekte Edildi!", "Bilgi", MB_OK);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
