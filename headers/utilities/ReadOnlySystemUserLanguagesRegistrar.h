#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 6 member(s).
class ReadOnlySystemUserLanguagesRegistrar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAvailableTransientLcid@ReadOnlySystemUserLanguagesRegistrar@@UEAAKXZ
    virtual unsigned long GetNextAvailableTransientLcid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserLocaleAutoSetFromLanguageProfile@ReadOnlySystemUserLanguagesRegistrar@@UEAA_NXZ
    virtual bool IsUserLocaleAutoSetFromLanguageProfile();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ReadOnlySystemUserLanguagesRegistrar@@QEAA@XZ
    ReadOnlySystemUserLanguagesRegistrar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReadOnlySystemUserLanguagesRegistrar@@UEAA@XZ
    virtual ~ReadOnlySystemUserLanguagesRegistrar();
};
