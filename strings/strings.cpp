#pragma comment(lib, "windowsapp")
#include <string>
#include "winrt/Windows.Networking.Connectivity.h"

using namespace std::literals;
using namespace winrt;
using namespace Windows::Networking;

void foo()
{
    // HostName constructor expects hstring but we can pass string literal
    HostName host1(L"moderncpp.com");
    
    // HostName constructor expects hstring but we can pass wstring
    std::wstring name2 = L"moderncpp.com";
    HostName host2(name2);

    // HostName constructor expects hstring but we can pass wstring_view literal
    HostName host3(L"moderncpp.com"sv);
}

int main()
{
    hstring w = L"hello world";
 
    std::string c = to_string(w);
    assert(c == "hello world");
 
    w = to_hstring(c);
    assert(w == L"hello world");
}