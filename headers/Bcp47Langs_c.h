// Flat C exports observed in Bcp47Langs.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef BCP47LANGS_C_H
#define BCP47LANGS_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: GetAppropriateUserLocaleForUserLanguages (ABI unverified)
// Export: GetSerializedUserLanguageProfile (ABI unverified)
// Export: Bcp47GetNlsForm (ABI unverified)
// Export: GetApplicationManifestLanguages (ABI unverified)
// Export: GetApplicationLanguageOverride (ABI unverified)
// Export: SetApplicationManifestLanguages (ABI unverified)
// Export: GetUnIsoRegionCode (ABI unverified)
// Export: RemoveUserLanguageInputMethods (ABI unverified)
// Export: Bcp47GetNeutralForm (ABI unverified)
// Export: AppendUserLanguages (ABI unverified)
// Export: Bcp47GetIsoScriptCode (ABI unverified)
// Export: LanguageListAsMuiForm (ABI unverified)
// Export: Bcp47FindClosestLanguage (ABI unverified)
// Export: Bcp47GetDistance (ABI unverified)
// Export: Bcp47GetMuiForm (ABI unverified)
// Export: GetAppropriateUserPreferredAndDisplayLanguagesForUser (ABI unverified)
// Export: GetApplicationLanguages (ABI unverified)
// Export: GetUserLanguages (ABI unverified)
// Export: IsTransientLcid (ABI unverified)
// Export: Bcp47FromHkl (ABI unverified)
// Export: Bcp47GetExtensionSubstring (ABI unverified)
// Export: Bcp47Normalize (ABI unverified)
// Export: Bcp47IsWellFormed (ABI unverified)
// Export: Bcp47FromCompactTagInternal (ABI unverified)
// Export: Bcp47GetAbbreviation (ABI unverified)
// Export: Bcp47GetLanguageName (ABI unverified)
// Export: SetUserLanguagesInternalCore (ABI unverified)
// Export: LcidFromBcp47 (ABI unverified)
// Export: RemoveInputsForAllLanguagesInternal (ABI unverified)
// Export: ResolveLanguages (ABI unverified)
// Export: Bcp47BufferFromLcid (ABI unverified)
// Export: Bcp47FromLcid (ABI unverified)
// Export: GetFontFallbackLanguageList (ABI unverified)
// Export: ClearApplicationManifestLanguages (ABI unverified)
// Export: GetUserLanguagesForUser (ABI unverified)
// Export: GetPendingUserDisplayLanguage (ABI unverified)
// Export: CompactTagFromBcp47Internal (ABI unverified)
// Export: Bcp47GetDirectionality (ABI unverified)
// Export: GetSerializedUserLanguagesForUser (ABI unverified)
// Export: ClearApplicationLanguageOverride (ABI unverified)
// Export: SetApplicationLanguageOverride (ABI unverified)
// Export: GetUserLanguagesForAllUsers (ABI unverified)
// Export: GetUserLanguageInputMethodsForUser (ABI unverified)
// Export: SetUserLanguagesInternal (ABI unverified)
// Export: GetInputMethodOverrideForUser (ABI unverified)
// Export: AppendUserLanguageInputMethods (ABI unverified)
// Export: GetUserLanguageInputMethods (ABI unverified)
// Export: Bcp47GetUnIsoRegionCode (ABI unverified)
// Export: GetRelevantLocalesFromLanguageTags (ABI unverified)
// Export: GetUserDisplayLanguageOverride (ABI unverified)
// Export: GetClosestMatchingUserLanguage (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: AppendUserLanguageInternal (ABI unverified)
// Export: ClearHttpAcceptLanguageOptOut (ABI unverified)
// Export: ClearUserDisplayLanguageOverride (ABI unverified)
// Export: ClearUserLocaleFromLanguageProfileOptOut (ABI unverified)
// Export: GetDisplayLanguagesForAllUsers (ABI unverified)
// Export: GetHttpAcceptLanguageOptOut (ABI unverified)
// Export: GetStartingUserDisplayLanguage (ABI unverified)
// Export: GetUserLocaleFromLanguageProfileOptOut (ABI unverified)
// Export: SetHttpAcceptLanguageOptOut (ABI unverified)
// Export: SetInputMethodOverride (ABI unverified)
// Export: SetPreviousUserDisplayLanguages (ABI unverified)
// Export: SetStartingUserDisplayLanguage (ABI unverified)
// Export: SetUserDisplayLanguageOverride (ABI unverified)
// Export: SetUserLanguageInputMethods (ABI unverified)
// Export: SetUserLocaleFromLanguageProfileOptOut (ABI unverified)
// Export: Bcp47GetExtensionSingletons (ABI unverified)
// Export: Bcp47GetIsoLanguageCode (ABI unverified)
// Export: Bcp47GetSubtagMapInternal (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // BCP47LANGS_C_H
