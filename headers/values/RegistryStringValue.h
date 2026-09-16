#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 5 member(s).
class RegistryStringValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@RegistryStringValue@@UEAAXXZ
    virtual void Clear();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistryStringValue@@QEAA@PEAUHKEY__@@PEBG1KK@Z
    RegistryStringValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryStringValue@@UEAA@XZ
    virtual ~RegistryStringValue();
};
