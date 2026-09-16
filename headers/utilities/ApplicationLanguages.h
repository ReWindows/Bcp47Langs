#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 6 member(s).
class ApplicationLanguages {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearApplicationLanguageOverride@ApplicationLanguages@@QEAAJXZ
    long ClearApplicationLanguageOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearApplicationManifestLanguages@ApplicationLanguages@@QEAAJXZ
    long ClearApplicationManifestLanguages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationLanguageOverride@ApplicationLanguages@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetApplicationLanguageOverride(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationManifestLanguages@ApplicationLanguages@@QEAAPEAUHSTRING__@@G@Z
    HSTRING__* GetApplicationManifestLanguages(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationLanguageOverride@ApplicationLanguages@@QEAAJPEBG@Z
    long SetApplicationLanguageOverride(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationManifestLanguages@ApplicationLanguages@@QEAAJGPEBG@Z
    long SetApplicationManifestLanguages(unsigned short, unsigned short const *);
};
