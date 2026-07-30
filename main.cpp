#include <windows.h>
#include <GL/gl.h>

DWORD WINAPI MainThread(LPVOID lpParam) {
    while (true) {
        Sleep(100);
    }
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, nullptr, 0, nullptr);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
