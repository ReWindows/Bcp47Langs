#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 9 member(s).
class SerializedRegistryKey {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDwordValue@SerializedRegistryKey@@UEBAKPEBG@Z
    virtual unsigned long GetDwordValue(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValuesCount@SerializedRegistryKey@@UEBAKXZ
    virtual unsigned long GetValuesCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSubKey@SerializedRegistryKey@@UEAAXPEBG@Z
    virtual void RemoveSubKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveValue@SerializedRegistryKey@@UEAAXPEBG@Z
    virtual void RemoveValue(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@SerializedRegistryKey@@UEAAXPEBGK@Z
    virtual void SetValue(unsigned short const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SerializedRegistryKey@@UEAA@XZ
    virtual ~SerializedRegistryKey();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitReadKey@SerializedRegistryKey@@AEAAXPEAUHKEY__@@@Z
    void InitReadKey(HKEY__*);
};
