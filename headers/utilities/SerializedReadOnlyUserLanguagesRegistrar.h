#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 7 member(s).
class SerializedReadOnlyUserLanguagesRegistrar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAvailableTransientLcid@SerializedReadOnlyUserLanguagesRegistrar@@UEAAKXZ
    virtual unsigned long GetNextAvailableTransientLcid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserLocaleAutoSetFromLanguageProfile@SerializedReadOnlyUserLanguagesRegistrar@@UEAA_NXZ
    virtual bool IsUserLocaleAutoSetFromLanguageProfile();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SerializedReadOnlyUserLanguagesRegistrar@@QEAA@PEAX@Z
    SerializedReadOnlyUserLanguagesRegistrar(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SerializedReadOnlyUserLanguagesRegistrar@@UEAA@XZ
    virtual ~SerializedReadOnlyUserLanguagesRegistrar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Null_PSid_Deleter@SerializedReadOnlyUserLanguagesRegistrar@@CAPEAXPEAX@Z
    static void * Null_PSid_Deleter(void *);
};
