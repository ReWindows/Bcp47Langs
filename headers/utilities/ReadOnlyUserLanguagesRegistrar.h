#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 5 member(s).
class ReadOnlyUserLanguagesRegistrar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAvailableTransientLcid@ReadOnlyUserLanguagesRegistrar@@UEAAKXZ
    virtual unsigned long GetNextAvailableTransientLcid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserLocaleAutoSetFromLanguageProfile@ReadOnlyUserLanguagesRegistrar@@UEAA_NXZ
    virtual bool IsUserLocaleAutoSetFromLanguageProfile();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReadOnlyUserLanguagesRegistrar@@UEAA@XZ
    virtual ~ReadOnlyUserLanguagesRegistrar();
};
