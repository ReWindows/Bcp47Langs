#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Bcp47Langs.dll by Windissect. 9 member(s).
class UserLanguages {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendUserLanguage@UserLanguages@@QEAAJK@Z
    long AppendUserLanguage(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendUserLanguages@UserLanguages@@QEAAJGPEBG@Z
    long AppendUserLanguages(unsigned short, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserLanguages@UserLanguages@@QEAAJGPEAPEAUHSTRING__@@@Z
    long GetUserLanguages(unsigned short, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IUserLanguagesRegistrarNullDeleter@UserLanguages@@SAXPEAVIUserLanguagesRegistrar@@@Z
    static void IUserLanguagesRegistrarNullDeleter(IUserLanguagesRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUserLanguages@UserLanguages@@QEAAJGPEBG@Z
    long RemoveUserLanguages(unsigned short, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserLanguages@UserLanguages@@QEAAJGPEBGW4MoSetKeyFlags@1@W4LanguageSettingFlags@1@@Z
    long SetUserLanguages(unsigned short, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppropriateUserLocale@UserLanguages@@QEAAXXZ
    void UpdateAppropriateUserLocale();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserLanguages@@QEAA@XZ
    ~UserLanguages();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisplayLanguageRestrictedByGroupPolicy@UserLanguages@@AEAA_NXZ
    bool IsDisplayLanguageRestrictedByGroupPolicy();
};
