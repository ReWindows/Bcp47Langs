#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 6 member(s).
class UserLanguage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendInputMethods@UserLanguage@@SAJPEBGG0@Z
    static long AppendInputMethods(unsigned short const *, unsigned short, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputMethodOverrideForUser@UserLanguage@@SAJPEAXPEAPEAUHSTRING__@@@Z
    static long GetInputMethodOverrideForUser(void *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputMethods@UserLanguage@@SAJPEBGGPEAPEAUHSTRING__@@@Z
    static long GetInputMethods(unsigned short const *, unsigned short, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputMethodsForUser@UserLanguage@@SAJPEAXPEBGGPEAPEAUHSTRING__@@@Z
    static long GetInputMethodsForUser(void *, unsigned short const *, unsigned short, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInputMethods@UserLanguage@@SAJAEAVUserLanguages@@PEBGG1@Z
    static long RemoveInputMethods(UserLanguages &, unsigned short const *, unsigned short, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputMethods@UserLanguage@@SAJPEBGG0@Z
    static long SetInputMethods(unsigned short const *, unsigned short, unsigned short const *);
};
