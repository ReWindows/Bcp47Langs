#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 7 member(s).
class RegistryDwordValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@RegistryDwordValue@@UEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@RegistryDwordValue@@UEBAKXZ
    virtual unsigned long Get() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistryDwordValue@@QEAA@PEAUHKEY__@@PEBG1K@Z
    RegistryDwordValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@RegistryDwordValue@@UEAAXK@Z
    virtual void Set(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryDwordValue@@UEAA@XZ
    virtual ~RegistryDwordValue();
};
