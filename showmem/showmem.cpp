#pragma comment(lib, "windowsapp")
#include "winrt/windows.system.diagnostics.h"

using namespace winrt;
using namespace Windows::System::Diagnostics;

int main()
{
    init_apartment();
    SystemDiagnosticInfo info = SystemDiagnosticInfo::GetForCurrentSystem();
    uint64_t mem = info.MemoryUsage().GetReport().TotalPhysicalSizeInBytes();
    printf("mem: %I64u", mem);
}