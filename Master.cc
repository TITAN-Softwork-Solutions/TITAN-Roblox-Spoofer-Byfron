#include "Container/Services/Services.hpp"
#include "Container/Header/FsCleaner.h"
#include "Container/Header/Mac.h"
#include "Container/Header/Registry.h"
#include "Container/Header/WMI.h"

int main() {

    TsService::TITAN();

    TsService::__TerminateRoblox();

    FsCleaner::__RemoveTraces();
    MAC::MacSpoofer::run();
    Registry::RegSpoofer::run();
    WMI::WmiSpoofer::run();
    FsCleaner::__ReInstall();

    std::cout << "\nAll done :3 Bye Bye Hyperion :mog: \n";

    // if uncommented, this'll cause the console to stay open once done
    // std::cin.get();

    return 0;
}
