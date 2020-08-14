#pragma comment(lib, "windowsapp")
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Web.Syndication.h"
#include <stdio.h>
 
using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;
 
int main()
{
    Uri uri{ L"https://kennykerr.ca/feed" };
    SyndicationClient client;
    SyndicationFeed feed = client.RetrieveFeedAsync(uri).get();
 
    for (const auto& item : feed.Items())
    {
        const hstring& title = item.Title().Text();
        printf("%ls\n", title.c_str());
    }
}