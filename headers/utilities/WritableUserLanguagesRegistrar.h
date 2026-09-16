#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 6 member(s).
class WritableUserLanguagesRegistrar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAvailableTransientLcid@WritableUserLanguagesRegistrar@@UEAAKXZ
    virtual unsigned long GetNextAvailableTransientLcid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserLocaleAutoSetFromLanguageProfile@WritableUserLanguagesRegistrar@@UEAA_NXZ
    virtual bool IsUserLocaleAutoSetFromLanguageProfile();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WritableUserLanguagesRegistrar@@QEAA@XZ
    WritableUserLanguagesRegistrar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WritableUserLanguagesRegistrar@@UEAA@XZ
    virtual ~WritableUserLanguagesRegistrar();
};
