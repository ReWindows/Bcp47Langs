#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 2 member(s).
namespace Windows::Internal {
class CRegion {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositeRegionCode@CRegion@Internal@Windows@@SAII@Z
    static unsigned int GetCompositeRegionCode(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindRegionId@CRegion@Internal@Windows@@CAIPEBG@Z
    static unsigned int TryFindRegionId(unsigned short const *);
};
} // namespace Windows::Internal
