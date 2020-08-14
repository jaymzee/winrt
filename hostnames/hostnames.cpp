#pragma comment(lib, "windowsapp") 

#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Networking.Connectivity.h"

using namespace winrt;
using namespace Windows::Networking;
using namespace Windows::Networking::Connectivity;

int main()
{
    init_apartment();

    for (const HostName& hostname : NetworkInformation::GetHostNames()) {
        auto s = hostname.DisplayName().c_str();
        printf("%ls\n", s);
    }
}