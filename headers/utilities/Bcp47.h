#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 17 member(s).
class Bcp47 {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Bcp47@@QEAA@PEBG@Z
    Bcp47(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Bcp47@@QEAA@PEAUHSTRING__@@_N@Z
    Bcp47(HSTRING__*, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Bcp47@@QEAA@_K@Z
    Bcp47(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Bcp47@@QEAA@K@Z
    Bcp47(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectionality@Bcp47@@QEAA?AW4BCP47_SCRIPT_DIRECTIONALITY@Internal@Windows@@XZ
    int GetDirectionality();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistance@Bcp47@@SAHPEBG0@Z
    static int GetDistance(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageName@Bcp47@@SA?AVString@Internal@Windows@@PEBGPEAVIRegistryKey@@@Z
    static ::Windows::Internal::String GetLanguageName(unsigned short const *, IRegistryKey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLcid@Bcp47@@SAKPEBGAEAVIRegistryKey@@@Z
    static unsigned long GetLcid(unsigned short const *, IRegistryKey &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLcid@Bcp47@@QEAAKXZ
    unsigned long GetLcid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNeutral@Bcp47@@QEAA_NXZ
    bool IsNeutral();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransientLcid@Bcp47@@SA_NK@Z
    static bool IsTransientLcid(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@Bcp47@@QEAA_NXZ
    bool IsValid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWellFormed@Bcp47@@SA_NPEBG@Z
    static bool IsWellFormed(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareSameLanguageAndScript@Bcp47@@SA_NPEBG0@Z
    static bool ShareSameLanguageAndScript(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Bcp47@@QEAA@XZ
    ~Bcp47();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLcid@Bcp47@@AEAAKAEAVIRegistryKey@@@Z
    unsigned long GetLcid(IRegistryKey &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLcidFromNlsData@Bcp47@@AEAAKXZ
    unsigned long GetLcidFromNlsData();
};
